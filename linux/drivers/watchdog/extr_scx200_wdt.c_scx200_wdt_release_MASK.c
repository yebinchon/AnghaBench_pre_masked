
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 if (VAR_0 != 42)
  FUNC_1("watchdog device closed unexpectedly, will not disable the watchdog timer\n");
 else if (!VAR_1)
  FUNC_2();
 VAR_0 = 0;
 FUNC_0(0, &VAR_2);

 return 0;
}
