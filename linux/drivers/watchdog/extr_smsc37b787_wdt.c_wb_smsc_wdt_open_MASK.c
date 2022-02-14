
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (struct inode*,struct file*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_7, struct file *VAR_8)
{


 if (FUNC_3(0, &VAR_5))
  return -VAR_0;

 if (VAR_3)
  FUNC_0(VAR_1);


 FUNC_4();

 FUNC_1("Watchdog enabled. Timeout set to %d %s\n",
  VAR_4, (VAR_6 == VAR_2) ? "second(s)" : "minute(s)");

 return FUNC_2(VAR_7, VAR_8);
}
