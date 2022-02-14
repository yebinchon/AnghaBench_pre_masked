
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {scalar_t__ perf_mode; int msix_vectors; int low_latency_index_start; scalar_t__ smp_affinity_enable; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct megasas_instance*) ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct megasas_instance*) ;
 int FUNC_3 (unsigned int,int) ;
 unsigned int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(struct megasas_instance *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4;

 VAR_3 = FUNC_0(VAR_2);

 if ((VAR_2->perf_mode == VAR_0) &&
     (VAR_3 != VAR_2->msix_vectors)) {
  if (VAR_2->msix_vectors)
   FUNC_5(VAR_2->pdev);

  VAR_2->perf_mode = VAR_1;
  VAR_2->low_latency_index_start = 1;
  VAR_4 = FUNC_4() + VAR_2->low_latency_index_start;

  VAR_2->msix_vectors = FUNC_3(VAR_4,
    VAR_2->msix_vectors);

  VAR_3 = FUNC_0(VAR_2);

 }

 FUNC_1(&VAR_2->pdev->dev,
  "requested/available msix %d/%d\n", VAR_2->msix_vectors, VAR_3);

 if (VAR_3 > 0)
  VAR_2->msix_vectors = VAR_3;
 else
  VAR_2->msix_vectors = 0;

 if (VAR_2->smp_affinity_enable)
  FUNC_2(VAR_2);
}
