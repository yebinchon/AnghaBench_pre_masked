
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 if (VAR_1 == 42) {
  FUNC_1();
 } else {
  FUNC_3("Unexpected close, not stopping watchdog!\n");
  FUNC_0();
 }
 FUNC_2(0, &VAR_0);
 VAR_1 = 0;
 return 0;
}
