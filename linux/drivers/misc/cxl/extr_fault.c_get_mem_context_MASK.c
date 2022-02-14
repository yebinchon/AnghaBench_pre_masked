
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int mm_users; } ;
struct cxl_context {struct mm_struct* mm; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static struct mm_struct *FUNC_1(struct cxl_context *VAR_0)
{
 if (VAR_0->mm == ((void*)0))
  return ((void*)0);

 if (!FUNC_0(&VAR_0->mm->mm_users))
  return ((void*)0);

 return VAR_0->mm;
}
