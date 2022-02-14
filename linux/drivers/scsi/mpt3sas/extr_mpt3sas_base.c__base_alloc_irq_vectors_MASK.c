
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_affinity {int pre_vectors; } ;
struct MPT3SAS_ADAPTER {int msix_vector_count; int high_iops_queues; int pdev; scalar_t__ smp_affinity_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int,struct irq_affinity*) ;

__attribute__((used)) static int
FUNC_2(struct MPT3SAS_ADAPTER *VAR_2)
{
 int VAR_3, VAR_4 = VAR_1;
 struct irq_affinity VAR_5 = { .pre_vectors = VAR_2->high_iops_queues };
 struct irq_affinity *VAR_6 = &VAR_5;

 if (VAR_2->smp_affinity_enable)
  VAR_4 |= VAR_0;
 else
  VAR_6 = ((void*)0);

 FUNC_0(VAR_2, " %d %d\n", VAR_2->high_iops_queues,
     VAR_2->msix_vector_count);

 VAR_3 = FUNC_1(VAR_2->pdev,
     VAR_2->high_iops_queues,
     VAR_2->msix_vector_count, VAR_4, VAR_6);

 return VAR_3;
}
