
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_msi_group {int gic_irq; } ;
struct xgene_msi {struct xgene_msi_group* msi_groups; scalar_t__ num_cpus; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *,int *) ;
 int FUNC_7 (int ,struct xgene_msi_group*) ;
 int FUNC_8 (char*) ;
 struct xgene_msi VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(unsigned int VAR_5)
{
 struct xgene_msi *VAR_6 = &VAR_3;
 struct xgene_msi_group *VAR_7;
 cpumask_var_t VAR_8;
 int VAR_9;
 int VAR_10;

 for (VAR_9 = VAR_5; VAR_9 < VAR_2; VAR_9 += VAR_6->num_cpus) {
  VAR_7 = &VAR_6->msi_groups[VAR_9];
  if (!VAR_7->gic_irq)
   continue;

  FUNC_5(VAR_7->gic_irq,
     VAR_4);
  VAR_10 = FUNC_7(VAR_7->gic_irq, VAR_7);
  if (VAR_10) {
   FUNC_8("failed to register GIC IRQ handler\n");
   return -VAR_0;
  }





  if (FUNC_0(&VAR_8, VAR_1)) {
   FUNC_1(VAR_8);
   FUNC_2(VAR_5, VAR_8);
   VAR_10 = FUNC_4(VAR_7->gic_irq, VAR_8);
   if (VAR_10)
    FUNC_8("failed to set affinity for GIC IRQ");
   FUNC_3(VAR_8);
  } else {
   FUNC_8("failed to alloc CPU mask for affinity\n");
   VAR_10 = -VAR_0;
  }

  if (VAR_10) {
   FUNC_6(VAR_7->gic_irq,
        ((void*)0), ((void*)0));
   return VAR_10;
  }
 }

 return 0;
}
