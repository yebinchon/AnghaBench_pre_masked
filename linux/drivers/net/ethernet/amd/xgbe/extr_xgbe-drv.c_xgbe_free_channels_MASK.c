
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct xgbe_prv_data {scalar_t__ channel_count; TYPE_1__** channel; } ;
struct TYPE_3__ {struct TYPE_3__* tx_ring; struct TYPE_3__* rx_ring; } ;


 unsigned int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_0)
{
 unsigned int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->channel); VAR_1++) {
  if (!VAR_0->channel[VAR_1])
   continue;

  FUNC_1(VAR_0->channel[VAR_1]->rx_ring);
  FUNC_1(VAR_0->channel[VAR_1]->tx_ring);
  FUNC_1(VAR_0->channel[VAR_1]);

  VAR_0->channel[VAR_1] = ((void*)0);
 }

 VAR_0->channel_count = 0;
}
