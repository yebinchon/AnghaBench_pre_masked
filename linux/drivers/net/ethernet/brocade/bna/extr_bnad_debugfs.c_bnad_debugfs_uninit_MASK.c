
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnad {int * port_debugfs_root; int ** bnad_dentry_files; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct bnad *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  if (VAR_3->bnad_dentry_files[VAR_4]) {
   FUNC_3(VAR_3->bnad_dentry_files[VAR_4]);
   VAR_3->bnad_dentry_files[VAR_4] = ((void*)0);
  }
 }


 if (VAR_3->port_debugfs_root) {
  FUNC_3(VAR_3->port_debugfs_root);
  VAR_3->port_debugfs_root = ((void*)0);
  FUNC_1(&VAR_0);
 }


 if (FUNC_2(&VAR_0) == 0) {
  FUNC_3(VAR_1);
  VAR_1 = ((void*)0);
 }
}
