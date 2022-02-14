
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct inode*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct inode *VAR_1, int VAR_2)
{
 static int VAR_3 = 5;

 if (FUNC_0(VAR_1)) {
  if (!FUNC_3(VAR_1->i_mode) && VAR_3) {



   FUNC_1("jfs_dirty_inode called on read-only volume");
   FUNC_1("Is remount racy?");
   VAR_3--;
  }
  return;
 }

 FUNC_2(VAR_0, VAR_1);
}
