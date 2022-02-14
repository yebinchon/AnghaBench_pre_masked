
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct v4l2_enc_idx_entry {int offset; int length; int pts; int flags; } ;
struct ivtv {int pgm_info_offset; int pgm_info_num; int pgm_info_write_idx; scalar_t__ mpg_data_received; scalar_t__ vbi_data_inserted; struct v4l2_enc_idx_entry* pgm_info; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ivtv *VAR_3)
{
 u32 VAR_4 = (FUNC_1(VAR_3->pgm_info_offset) - VAR_3->pgm_info_offset - 4) / 24;
 int VAR_5;
 int VAR_6 = 0;

 if (VAR_4 >= VAR_3->pgm_info_num) {
  FUNC_0("Invalid PGM index %d (>= %d)\n", VAR_4, VAR_3->pgm_info_num);
  return;
 }
 VAR_5 = (VAR_4 + VAR_3->pgm_info_num - VAR_3->pgm_info_write_idx) % VAR_3->pgm_info_num;
 while (VAR_6 < VAR_5) {
  int VAR_7 = (VAR_3->pgm_info_write_idx + VAR_6) % VAR_3->pgm_info_num;
  struct v4l2_enc_idx_entry *VAR_8 = VAR_3->pgm_info + VAR_7;
  u32 VAR_9 = VAR_3->pgm_info_offset + 4 + VAR_7 * 24;
  const int VAR_10[8] = { -1, VAR_1, VAR_2, -1,
   VAR_0, -1, -1, -1 };


  VAR_8->offset = FUNC_1(VAR_9 + 4) + ((u64)FUNC_1(VAR_9 + 8) << 32);
  if (VAR_8->offset > VAR_3->mpg_data_received) {
   break;
  }
  VAR_8->offset += VAR_3->vbi_data_inserted;
  VAR_8->length = FUNC_1(VAR_9);
  VAR_8->pts = FUNC_1(VAR_9 + 16) + ((u64)(FUNC_1(VAR_9 + 20) & 1) << 32);
  VAR_8->flags = VAR_10[FUNC_1(VAR_9 + 12) & 7];
  VAR_6++;
 }
 VAR_3->pgm_info_write_idx = (VAR_3->pgm_info_write_idx + VAR_6) % VAR_3->pgm_info_num;
}
