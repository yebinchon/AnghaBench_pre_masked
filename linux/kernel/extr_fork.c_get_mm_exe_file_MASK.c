
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int exe_file; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*) ;
 struct file* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct file *FUNC_4(struct mm_struct *VAR_0)
{
 struct file *VAR_1;

 FUNC_2();
 VAR_1 = FUNC_1(VAR_0->exe_file);
 if (VAR_1 && !FUNC_0(VAR_1))
  VAR_1 = ((void*)0);
 FUNC_3();
 return VAR_1;
}
