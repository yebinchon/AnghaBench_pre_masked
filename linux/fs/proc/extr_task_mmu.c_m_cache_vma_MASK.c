
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; } ;
struct seq_file {scalar_t__ count; scalar_t__ size; unsigned long version; int private; } ;


 scalar_t__ FUNC_0 (int ,struct vm_area_struct*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_0, struct vm_area_struct *VAR_1)
{
 if (VAR_0->count < VAR_0->size)
  VAR_0->version = FUNC_0(VAR_0->private, VAR_1) ? VAR_1->vm_end : -1UL;
}
