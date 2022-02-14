
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; int vm_page_prot; } ;
struct file {int dummy; } ;
struct aspeed_lpc_ctrl {int mem_base; scalar_t__ mem_size; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aspeed_lpc_ctrl* FUNC_0 (struct file*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,scalar_t__,unsigned long,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 struct aspeed_lpc_ctrl *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6 = VAR_4->vm_end - VAR_4->vm_start;
 pgprot_t VAR_7 = VAR_4->vm_page_prot;

 if (VAR_4->vm_pgoff + VAR_6 > VAR_5->mem_base + VAR_5->mem_size)
  return -VAR_1;


 VAR_7 = FUNC_1(VAR_7);

 if (FUNC_2(VAR_4, VAR_4->vm_start,
  (VAR_5->mem_base >> VAR_2) + VAR_4->vm_pgoff,
  VAR_6, VAR_7))
  return -VAR_0;

 return 0;
}
