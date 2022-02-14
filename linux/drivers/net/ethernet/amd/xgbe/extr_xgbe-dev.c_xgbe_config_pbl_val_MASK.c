
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {unsigned int pbl; unsigned int channel_count; TYPE_1__** channel; } ;
struct TYPE_2__ {scalar_t__ rx_ring; scalar_t__ tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct xgbe_prv_data *VAR_7)
{
 unsigned int VAR_8, VAR_9;
 unsigned int VAR_10;

 VAR_8 = VAR_3;
 VAR_9 = VAR_7->pbl;

 if (VAR_7->pbl > 32) {
  VAR_8 = VAR_4;
  VAR_9 >>= 3;
 }

 for (VAR_10 = 0; VAR_10 < VAR_7->channel_count; VAR_10++) {
  FUNC_0(VAR_7->channel[VAR_10], VAR_0, VAR_6,
           VAR_8);

  if (VAR_7->channel[VAR_10]->tx_ring)
   FUNC_0(VAR_7->channel[VAR_10], VAR_2,
            VAR_5, VAR_9);

  if (VAR_7->channel[VAR_10]->rx_ring)
   FUNC_0(VAR_7->channel[VAR_10], VAR_1,
            VAR_5, VAR_9);
 }

 return 0;
}
