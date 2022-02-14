
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, struct file *VAR_4)
{
 if (FUNC_4(VAR_1, &VAR_2))
  FUNC_0();
 else {
  FUNC_3("device closed unexpectedly, watchdog timer will not stop!\n");
  FUNC_1();
 }

 FUNC_2(VAR_0, &VAR_2);
 FUNC_2(VAR_1, &VAR_2);

 return 0;
}
