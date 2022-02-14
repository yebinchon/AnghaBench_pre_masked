
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_flags; int d_fsdata; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dentry *VAR_1)
{

 if (FUNC_2(VAR_1->d_fsdata)) {
  if (VAR_1->d_flags & VAR_0)
   FUNC_0(1);
  else
   FUNC_1(VAR_1->d_fsdata);
 }
}
