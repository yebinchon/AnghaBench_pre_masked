
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct file {int f_path; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int *) ;
 int FUNC_1 (struct file*) ;
 struct file* FUNC_2 (struct mm_struct*) ;

__attribute__((used)) static unsigned long FUNC_3(struct mm_struct *VAR_1)
{
 unsigned long VAR_2 = VAR_0;
 struct file *VAR_3;

 if (!VAR_1)
  goto done;

 VAR_3 = FUNC_2(VAR_1);
 if (!VAR_3)
  goto done;

 VAR_2 = FUNC_0(&VAR_3->f_path);
 FUNC_1(VAR_3);
done:
 return VAR_2;
}
