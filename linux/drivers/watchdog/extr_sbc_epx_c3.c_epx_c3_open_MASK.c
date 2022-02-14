
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, struct file *VAR_5)
{
 if (VAR_2)
  return -VAR_0;

 if (VAR_3)
  FUNC_0(VAR_1);


 FUNC_2();
 FUNC_1();

 VAR_2 = 1;
 FUNC_3("Started watchdog timer\n");

 return FUNC_4(VAR_4, VAR_5);
}
