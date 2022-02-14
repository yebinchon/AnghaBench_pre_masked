
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct afs_fs_cursor {int flags; int error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct afs_fs_cursor *VAR_3)
{
 if (VAR_3->flags & VAR_0) {
  FUNC_1(1000);
  if (FUNC_2(VAR_2)) {
   VAR_3->error = -VAR_1;
   return 0;
  }
 } else {
  FUNC_0(1000);
 }

 return 1;
}
