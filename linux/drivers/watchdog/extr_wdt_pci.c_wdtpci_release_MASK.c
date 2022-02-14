
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 if (VAR_0 == 42) {
  FUNC_3();
 } else {
  FUNC_1("Unexpected close, not stopping timer!\n");
  FUNC_2();
 }
 VAR_0 = 0;
 FUNC_0(0, &VAR_1);
 return 0;
}
