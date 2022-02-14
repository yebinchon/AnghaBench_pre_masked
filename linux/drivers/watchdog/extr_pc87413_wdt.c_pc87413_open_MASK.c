
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct inode*,struct file*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_5, struct file *VAR_6)
{


 if (FUNC_4(0, &VAR_4))
  return -VAR_0;

 if (VAR_2)
  FUNC_0(VAR_1);


 FUNC_1();

 FUNC_2("Watchdog enabled. Timeout set to %d minute(s).\n", VAR_3);

 return FUNC_3(VAR_5, VAR_6);
}
