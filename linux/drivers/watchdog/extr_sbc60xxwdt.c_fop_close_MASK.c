
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 if (VAR_1 == 42)
  FUNC_3();
 else {
  FUNC_1(&VAR_0);
  FUNC_2("device file closed unexpectedly. Will not stop the WDT!\n");
 }
 FUNC_0(0, &VAR_2);
 VAR_1 = 0;
 return 0;
}
