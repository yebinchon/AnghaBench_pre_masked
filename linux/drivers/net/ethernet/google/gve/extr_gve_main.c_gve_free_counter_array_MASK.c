
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gve_priv {int num_event_counters; int * counter_array; int counter_array_bus; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct gve_priv *VAR_0)
{
 FUNC_0(&VAR_0->pdev->dev,
     VAR_0->num_event_counters *
     sizeof(*VAR_0->counter_array),
     VAR_0->counter_array, VAR_0->counter_array_bus);
 VAR_0->counter_array = ((void*)0);
}
