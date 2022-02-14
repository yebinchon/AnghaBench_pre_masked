
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct megasas_instance {scalar_t__ perf_mode; int low_latency_index_start; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*,int) ;

__attribute__((used)) static inline void
FUNC_4(struct megasas_instance *VAR_1)
{
 int VAR_2;
 int VAR_3;

 if (VAR_1->perf_mode == VAR_0) {
  VAR_3 = FUNC_1(&VAR_1->pdev->dev);

  for (VAR_2 = 0; VAR_2 < VAR_1->low_latency_index_start; VAR_2++)
   FUNC_2(FUNC_3(VAR_1->pdev, VAR_2),
    FUNC_0(VAR_3));
 }
}
