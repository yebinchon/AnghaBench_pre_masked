
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {unsigned int channel_count; TYPE_1__** channel; } ;
struct TYPE_2__ {int tx_ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->channel_count; VAR_3++) {
  if (!VAR_2->channel[VAR_3]->tx_ring)
   break;

  FUNC_0(VAR_2->channel[VAR_3], VAR_0, VAR_1, 1);
 }
}
