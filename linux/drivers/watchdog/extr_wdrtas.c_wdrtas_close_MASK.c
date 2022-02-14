
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{

 if (VAR_1 == VAR_0)
  FUNC_3();
 else {
  FUNC_1("got unexpected close. Watchdog not stopped.\n");
  FUNC_2();
 }

 VAR_1 = 0;
 FUNC_0(&VAR_2);
 return 0;
}
