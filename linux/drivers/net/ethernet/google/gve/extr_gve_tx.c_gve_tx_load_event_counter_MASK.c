
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct gve_tx_ring {TYPE_1__* q_resources; } ;
struct gve_priv {int * counter_array; } ;
typedef int __be32 ;
struct TYPE_2__ {int counter_index; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;

__be32 FUNC_2(struct gve_priv *VAR_0,
     struct gve_tx_ring *VAR_1)
{
 u32 VAR_2 = FUNC_1((VAR_1->q_resources->counter_index));

 return FUNC_0(VAR_0->counter_array[VAR_2]);
}
