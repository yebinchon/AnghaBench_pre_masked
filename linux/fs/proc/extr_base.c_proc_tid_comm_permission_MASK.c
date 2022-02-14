
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,int) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int ,struct task_struct*) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_3, int VAR_4)
{
 bool VAR_5;
 struct task_struct *VAR_6;

 VAR_6 = FUNC_1(VAR_3);
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = FUNC_4(VAR_2, VAR_6);
 FUNC_3(VAR_6);

 if (FUNC_2(VAR_5 && !(VAR_4 & VAR_1))) {




  return 0;
 }

 return FUNC_0(VAR_3, VAR_4);
}
