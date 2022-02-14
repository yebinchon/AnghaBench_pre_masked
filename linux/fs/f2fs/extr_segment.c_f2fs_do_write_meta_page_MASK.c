
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int op_flags; scalar_t__ old_blkaddr; scalar_t__ new_blkaddr; int in_list; int * encrypted_page; struct page* page; int op; int temp; int type; struct f2fs_sb_info* sbi; } ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct f2fs_io_info*) ;
 int FUNC_3 (struct f2fs_sb_info*,int,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct f2fs_sb_info*,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7(struct f2fs_sb_info *VAR_7, struct page *VAR_8,
     enum iostat_type VAR_9)
{
 struct f2fs_io_info VAR_10 = {
  .sbi = VAR_7,
  .type = VAR_2,
  .temp = VAR_1,
  .op = VAR_4,
  .op_flags = VAR_6 | VAR_3 | VAR_5,
  .old_blkaddr = VAR_8->index,
  .new_blkaddr = VAR_8->index,
  .page = VAR_8,
  .encrypted_page = ((void*)0),
  .in_list = 0,
 };

 if (FUNC_6(VAR_8->index >= FUNC_1(VAR_7)))
  VAR_10.op_flags &= ~VAR_3;

 FUNC_4(VAR_8);
 FUNC_0(VAR_8);
 FUNC_2(&VAR_10);

 FUNC_5(VAR_7, VAR_8->index);
 FUNC_3(VAR_7, VAR_9, VAR_0);
}
