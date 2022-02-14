
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_2, struct file *VAR_3)
{
 if (VAR_0 == 42)
  FUNC_2();
 else
  FUNC_1("SBC8360 device closed unexpectedly.  SBC8360 will not stop!\n");

 FUNC_0(0, &VAR_1);
 VAR_0 = 0;
 return 0;
}
