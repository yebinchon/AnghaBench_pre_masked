
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void vm_area_struct ;
struct seq_file {struct proc_maps_private* private; } ;
struct proc_maps_private {int dummy; } ;
typedef int loff_t ;


 void* FUNC_0 (struct proc_maps_private*,void*) ;
 int FUNC_1 (struct proc_maps_private*) ;

__attribute__((used)) static void *FUNC_2(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct proc_maps_private *VAR_3 = VAR_0->private;
 struct vm_area_struct *VAR_4;

 (*VAR_2)++;
 VAR_4 = FUNC_0(VAR_3, VAR_1);
 if (!VAR_4)
  FUNC_1(VAR_3);
 return VAR_4;
}
