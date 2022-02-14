
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {size_t vm_end; size_t vm_start; scalar_t__ vm_pgoff; int vm_page_prot; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,size_t,int ,size_t,int ) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 size_t VAR_8 = VAR_7->vm_end - VAR_7->vm_start;

 if (!FUNC_0(VAR_0))
  return -VAR_3;

 if ((VAR_8 > VAR_4) || (VAR_7->vm_pgoff != 0))
  return -VAR_2;

 if (FUNC_1(VAR_7, VAR_7->vm_start,
       FUNC_2(VAR_5),
       VAR_8, VAR_7->vm_page_prot))
  return -VAR_1;

 return 0;
}
