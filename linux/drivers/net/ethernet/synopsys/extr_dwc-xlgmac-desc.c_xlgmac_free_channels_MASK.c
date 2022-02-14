
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xlgmac_pdata {scalar_t__ channel_count; TYPE_1__* channel_head; } ;
struct TYPE_2__ {struct TYPE_2__* rx_ring; struct TYPE_2__* tx_ring; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct xlgmac_pdata *VAR_0)
{
 if (!VAR_0->channel_head)
  return;

 FUNC_0(VAR_0->channel_head->tx_ring);
 VAR_0->channel_head->tx_ring = ((void*)0);

 FUNC_0(VAR_0->channel_head->rx_ring);
 VAR_0->channel_head->rx_ring = ((void*)0);

 FUNC_0(VAR_0->channel_head);

 VAR_0->channel_head = ((void*)0);
 VAR_0->channel_count = 0;
}
