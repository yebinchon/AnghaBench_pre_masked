
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicpf {int num_vec; int* irq_allocated; int pdev; } ;


 int FUNC_0 (int ,struct nicpf*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct nicpf *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_vec; VAR_1++) {
  if (VAR_0->irq_allocated[VAR_1])
   FUNC_0(FUNC_1(VAR_0->pdev, VAR_1), VAR_0);
  VAR_0->irq_allocated[VAR_1] = 0;
 }
}
