
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {scalar_t__ io_wbc; int temp; int type; int op; int new_blkaddr; struct f2fs_sb_info* sbi; } ;
struct bio {int bi_write_hint; struct f2fs_sb_info* bi_private; int bi_end_io; } ;


 struct bio* FUNC_0 (struct f2fs_sb_info*,int,int) ;
 int FUNC_1 (struct f2fs_sb_info*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct f2fs_sb_info*,int ,struct bio*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,struct bio*) ;

__attribute__((used)) static struct bio *FUNC_5(struct f2fs_io_info *VAR_2, int VAR_3)
{
 struct f2fs_sb_info *VAR_4 = VAR_2->sbi;
 struct bio *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_3, 1);

 FUNC_2(VAR_4, VAR_2->new_blkaddr, VAR_5);
 if (FUNC_3(VAR_2->op)) {
  VAR_5->bi_end_io = VAR_0;
  VAR_5->bi_private = ((void*)0);
 } else {
  VAR_5->bi_end_io = VAR_1;
  VAR_5->bi_private = VAR_4;
  VAR_5->bi_write_hint = FUNC_1(VAR_4,
      VAR_2->type, VAR_2->temp);
 }
 if (VAR_2->io_wbc)
  FUNC_4(VAR_2->io_wbc, VAR_5);

 return VAR_5;
}
