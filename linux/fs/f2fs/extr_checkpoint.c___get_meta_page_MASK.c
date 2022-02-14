
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int op_flags; int is_por; struct page* page; int * encrypted_page; int new_blkaddr; int old_blkaddr; int op; int type; struct f2fs_sb_info* sbi; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int) ;
 int VAR_1 ;
 struct address_space* FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 struct page* FUNC_4 (struct address_space*,int ,int) ;
 int FUNC_5 (struct page*,int) ;
 int FUNC_6 (struct f2fs_io_info*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static struct page *FUNC_9(struct f2fs_sb_info *VAR_5, pgoff_t VAR_6,
       bool VAR_7)
{
 struct address_space *VAR_8 = FUNC_1(VAR_5);
 struct page *VAR_9;
 struct f2fs_io_info VAR_10 = {
  .sbi = VAR_5,
  .type = VAR_1,
  .op = VAR_3,
  .op_flags = VAR_2 | VAR_4,
  .old_blkaddr = VAR_6,
  .new_blkaddr = VAR_6,
  .encrypted_page = ((void*)0),
  .is_por = !VAR_7,
 };
 int VAR_11;

 if (FUNC_8(!VAR_7))
  VAR_10.op_flags &= ~VAR_2;
repeat:
 VAR_9 = FUNC_4(VAR_8, VAR_6, 0);
 if (!VAR_9) {
  FUNC_3();
  goto repeat;
 }
 if (FUNC_2(VAR_9))
  goto out;

 VAR_10.page = VAR_9;

 VAR_11 = FUNC_6(&VAR_10);
 if (VAR_11) {
  FUNC_5(VAR_9, 1);
  return FUNC_0(VAR_11);
 }

 FUNC_7(VAR_9);
 if (FUNC_8(VAR_9->mapping != VAR_8)) {
  FUNC_5(VAR_9, 1);
  goto repeat;
 }

 if (FUNC_8(!FUNC_2(VAR_9))) {
  FUNC_5(VAR_9, 1);
  return FUNC_0(-VAR_0);
 }
out:
 return VAR_9;
}
