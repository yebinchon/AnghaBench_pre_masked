
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {int msix_vectors; int low_latency_index_start; int pdev; scalar_t__ smp_affinity_enable; } ;
struct irq_affinity {int pre_vectors; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,struct irq_affinity*) ;

__attribute__((used)) static int
FUNC_1(struct megasas_instance *VAR_2)
{
 int VAR_3, VAR_4;
 struct irq_affinity VAR_5 = { .pre_vectors = VAR_2->low_latency_index_start };
 struct irq_affinity *VAR_6 = &VAR_5;

 VAR_4 = VAR_1;

 if (VAR_2->smp_affinity_enable)
  VAR_4 |= VAR_0;
 else
  VAR_6 = ((void*)0);

 VAR_3 = FUNC_0(VAR_2->pdev,
  VAR_2->low_latency_index_start,
  VAR_2->msix_vectors, VAR_4, VAR_6);

 return VAR_3;
}
