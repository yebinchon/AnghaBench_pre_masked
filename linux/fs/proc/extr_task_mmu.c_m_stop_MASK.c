
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct proc_maps_private* private; } ;
struct proc_maps_private {int * task; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct proc_maps_private*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct proc_maps_private *VAR_2 = VAR_0->private;

 if (!FUNC_0(VAR_1))
  FUNC_2(VAR_2);
 if (VAR_2->task) {
  FUNC_1(VAR_2->task);
  VAR_2->task = ((void*)0);
 }
}
