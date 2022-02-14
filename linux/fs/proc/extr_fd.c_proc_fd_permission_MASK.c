
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*,int) ;
 struct task_struct* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct task_struct*,int ) ;

int FUNC_6(struct inode *VAR_2, int VAR_3)
{
 struct task_struct *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2, VAR_3);
 if (VAR_5 == 0)
  return VAR_5;

 FUNC_3();
 VAR_4 = FUNC_1(FUNC_2(VAR_2), VAR_0);
 if (VAR_4 && FUNC_5(VAR_4, VAR_1))
  VAR_5 = 0;
 FUNC_4();

 return VAR_5;
}
