
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
struct hpfs_sb_info {int sb_max_fwd_alloc; } ;
typedef int secno ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct quad_buffer_head*) ;
 int FUNC_2 (struct super_block*,int) ;
 int FUNC_3 (struct super_block*,char*,int) ;
 int * FUNC_4 (struct super_block*,int,struct quad_buffer_head*,char*) ;
 int FUNC_5 (struct quad_buffer_head*) ;
 struct hpfs_sb_info* FUNC_6 (struct super_block*) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct super_block *VAR_0, secno VAR_1, unsigned VAR_2)
{
 struct quad_buffer_head VAR_3;
 __le32 *VAR_4;
 struct hpfs_sb_info *VAR_5 = FUNC_6(VAR_0);

 if (!VAR_2) return;
 if (VAR_1 < 0x12) {
  FUNC_3(VAR_0, "Trying to free reserved sector %08x", VAR_1);
  return;
 }
 VAR_5->sb_max_fwd_alloc += VAR_2 > 0xffff ? 0xffff : VAR_2;
 if (VAR_5->sb_max_fwd_alloc > 0xffffff) VAR_5->sb_max_fwd_alloc = 0xffffff;
 new_map:
 if (!(VAR_4 = FUNC_4(VAR_0, VAR_1 >> 14, &VAR_3, "free"))) {
  return;
 }
 new_tst:
 if ((FUNC_7(VAR_4[(VAR_1 & 0x3fff) >> 5]) >> (VAR_1 & 0x1f) & 1)) {
  FUNC_3(VAR_0, "sector %08x not allocated", VAR_1);
  FUNC_1(&VAR_3);
  return;
 }
 VAR_4[(VAR_1 & 0x3fff) >> 5] |= FUNC_0(1 << (VAR_1 & 0x1f));
 FUNC_2(VAR_0, VAR_1);
 if (!--VAR_2) {
  FUNC_5(&VAR_3);
  FUNC_1(&VAR_3);
  return;
 }
 if (!(++VAR_1 & 0x3fff)) {
  FUNC_5(&VAR_3);
  FUNC_1(&VAR_3);
  goto new_map;
 }
 goto new_tst;
}
