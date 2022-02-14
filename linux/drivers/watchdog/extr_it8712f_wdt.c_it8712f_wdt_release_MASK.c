
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 if (VAR_0 != 42) {
  FUNC_2("watchdog device closed unexpectedly, will not disable the watchdog timer\n");
 } else if (!VAR_1) {
  if (FUNC_1())
   FUNC_2("Watchdog disable failed\n");
 }
 VAR_0 = 0;
 FUNC_0(0, &VAR_2);

 return 0;
}
