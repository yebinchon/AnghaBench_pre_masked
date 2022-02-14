
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_msi_group {int gic_irq; } ;
struct xgene_msi {struct xgene_msi_group* msi_groups; scalar_t__ num_cpus; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 struct xgene_msi VAR_1 ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2)
{
 struct xgene_msi *VAR_3 = &VAR_1;
 struct xgene_msi_group *VAR_4;
 int VAR_5;

 for (VAR_5 = VAR_2; VAR_5 < VAR_0; VAR_5 += VAR_3->num_cpus) {
  VAR_4 = &VAR_3->msi_groups[VAR_5];
  if (!VAR_4->gic_irq)
   continue;

  FUNC_0(VAR_4->gic_irq, ((void*)0),
       ((void*)0));
 }
 return 0;
}
