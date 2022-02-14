
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {scalar_t__ type; } ;
struct f2fs_bio_info {int dummy; } ;
struct TYPE_2__ {int bi_size; } ;
struct bio {unsigned int bi_max_vecs; unsigned int bi_vcnt; TYPE_1__ bi_iter; } ;
typedef int block_t ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 unsigned int FUNC_2 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct f2fs_bio_info*,struct f2fs_io_info*) ;
 int FUNC_4 (struct f2fs_sb_info*,struct bio*,int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct f2fs_sb_info *VAR_2, struct bio *VAR_3,
     struct f2fs_bio_info *VAR_4,
     struct f2fs_io_info *VAR_5,
     block_t VAR_6,
     block_t VAR_7)
{
 if (FUNC_1(VAR_2) && (VAR_5->type == VAR_0 || VAR_5->type == VAR_1)) {
  unsigned int VAR_8 =
    FUNC_0(VAR_3->bi_iter.bi_size);
  unsigned int VAR_9 = FUNC_2(VAR_2);
  unsigned int VAR_10 = VAR_3->bi_max_vecs - VAR_3->bi_vcnt;


  if (!(VAR_8 % VAR_9) && VAR_10 < VAR_9)
   return 0;
 }
 if (!FUNC_4(VAR_2, VAR_3, VAR_6, VAR_7))
  return 0;
 return FUNC_3(VAR_4, VAR_5);
}
