
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
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int FUNC_4 (struct inode*,struct file*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_5, struct file *VAR_6)
{
 if (FUNC_5(0, &VAR_3))
  return -VAR_0;

 if (VAR_2)
  FUNC_0(VAR_1);


 if (!VAR_4)
  FUNC_2();

 FUNC_1();

 FUNC_3("Started watchdog timer\n");

 return FUNC_4(VAR_5, VAR_6);
}
