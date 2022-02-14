
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct files_struct {int dummy; } ;
struct file {int f_mode; } ;
typedef int fmode_t ;


 struct file* FUNC_0 (struct files_struct*,unsigned int) ;
 struct files_struct* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct files_struct*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

__attribute__((used)) static bool FUNC_5(struct task_struct *VAR_0, unsigned VAR_1, fmode_t *VAR_2)
{
 struct files_struct *VAR_3 = FUNC_1(VAR_0);
 struct file *VAR_4;

 if (!VAR_3)
  return 0;

 FUNC_3();
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (VAR_4)
  *VAR_2 = VAR_4->f_mode;
 FUNC_4();
 FUNC_2(VAR_3);
 return !!VAR_4;
}
