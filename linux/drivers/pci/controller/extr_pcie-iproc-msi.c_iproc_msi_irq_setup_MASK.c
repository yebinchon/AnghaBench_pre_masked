
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iproc_pcie {int dev; } ;
struct iproc_msi {int nr_irqs; TYPE_1__* grps; scalar_t__ nr_cpus; struct iproc_pcie* pcie; } ;
typedef int cpumask_var_t ;
struct TYPE_2__ {int gic_irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct iproc_msi*,unsigned int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct iproc_msi *VAR_3, unsigned int VAR_4)
{
 int VAR_5, VAR_6;
 cpumask_var_t VAR_7;
 struct iproc_pcie *VAR_8 = VAR_3->pcie;

 for (VAR_5 = VAR_4; VAR_5 < VAR_3->nr_irqs; VAR_5 += VAR_3->nr_cpus) {
  FUNC_7(VAR_3->grps[VAR_5].gic_irq,
       VAR_2,
       &VAR_3->grps[VAR_5]);

  if (FUNC_0(&VAR_7, VAR_1)) {
   FUNC_1(VAR_7);
   FUNC_2(VAR_4, VAR_7);
   VAR_6 = FUNC_6(VAR_3->grps[VAR_5].gic_irq, VAR_7);
   if (VAR_6)
    FUNC_3(VAR_8->dev,
     "failed to set affinity for IRQ%d\n",
     VAR_3->grps[VAR_5].gic_irq);
   FUNC_4(VAR_7);
  } else {
   FUNC_3(VAR_8->dev, "failed to alloc CPU mask\n");
   VAR_6 = -VAR_0;
  }

  if (VAR_6) {

   FUNC_5(VAR_3, VAR_4);
   return VAR_6;
  }
 }

 return 0;
}
