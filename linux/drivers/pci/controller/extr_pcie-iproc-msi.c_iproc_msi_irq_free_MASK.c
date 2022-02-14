
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iproc_msi {int nr_irqs; TYPE_1__* grps; scalar_t__ nr_cpus; } ;
struct TYPE_2__ {int gic_irq; } ;


 int FUNC_0 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_1(struct iproc_msi *VAR_0, unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = VAR_1; VAR_2 < VAR_0->nr_irqs; VAR_2 += VAR_0->nr_cpus) {
  FUNC_0(VAR_0->grps[VAR_2].gic_irq,
       ((void*)0), ((void*)0));
 }
}
