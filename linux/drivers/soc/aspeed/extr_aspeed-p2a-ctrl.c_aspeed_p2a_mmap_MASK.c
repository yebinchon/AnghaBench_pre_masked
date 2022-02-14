
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; scalar_t__ vm_pgoff; int vm_page_prot; } ;
struct file {struct aspeed_p2a_user* private_data; } ;
struct aspeed_p2a_user {struct aspeed_p2a_ctrl* parent; } ;
struct aspeed_p2a_ctrl {int mem_base; scalar_t__ mem_size; } ;
typedef int pgprot_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,scalar_t__,unsigned long,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 unsigned long VAR_5;
 pgprot_t VAR_6;
 struct aspeed_p2a_user *VAR_7 = VAR_3->private_data;
 struct aspeed_p2a_ctrl *VAR_8 = VAR_7->parent;

 if (VAR_8->mem_base == 0 && VAR_8->mem_size == 0)
  return -VAR_1;

 VAR_5 = VAR_4->vm_end - VAR_4->vm_start;
 VAR_6 = VAR_4->vm_page_prot;

 if (VAR_4->vm_pgoff + VAR_5 > VAR_8->mem_base + VAR_8->mem_size)
  return -VAR_1;


 VAR_6 = FUNC_0(VAR_6);

 if (FUNC_1(VAR_4, VAR_4->vm_start,
  (VAR_8->mem_base >> VAR_2) + VAR_4->vm_pgoff,
  VAR_5, VAR_6))
  return -VAR_0;

 return 0;
}
