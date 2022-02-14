
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (struct inode*,struct file*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{

 if (FUNC_3(0, &VAR_2))
  return -VAR_0;

 if (VAR_3 > VAR_1)
  VAR_3 = VAR_1;

 FUNC_1();
 FUNC_0("Watchdog enabled, timeout = %d min(s)", VAR_3);

 return FUNC_2(VAR_4, VAR_5);
}
