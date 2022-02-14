
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {int ui_mutex; int dirty; } ;
struct ubifs_info {int dummy; } ;
struct page {int dummy; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ubifs_info*) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*,struct ubifs_inode*) ;

__attribute__((used)) static void FUNC_6(struct ubifs_info *VAR_0, struct page *VAR_1,
     struct ubifs_inode *VAR_2, int VAR_3)
{
 if (VAR_3) {
  if (!VAR_2->dirty)
   FUNC_5(VAR_0, VAR_2);
  FUNC_2(&VAR_2->ui_mutex);
 }
 if (!FUNC_1(VAR_1)) {
  if (FUNC_0(VAR_1))
   FUNC_4(VAR_0);
  else
   FUNC_3(VAR_0);
 }
}
