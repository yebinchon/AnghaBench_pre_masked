
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_end; size_t vm_start; scalar_t__ vm_pgoff; int vm_page_prot; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,size_t,int ,size_t,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 size_t VAR_6 = VAR_5->vm_end - VAR_5->vm_start;

 if ((VAR_6 > VAR_2) || (VAR_5->vm_pgoff != 0))
  return -VAR_1;

 if (FUNC_0(VAR_5, VAR_5->vm_start,
       FUNC_1(VAR_3),
       VAR_6, VAR_5->vm_page_prot))
  return -VAR_0;

 return 0;
}
