
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; struct xgbe_channel** channel; int service_timer; } ;
struct xgbe_channel {int tx_timer; int tx_ring; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_0)
{
 struct xgbe_channel *VAR_1;
 unsigned int VAR_2;

 FUNC_0(&VAR_0->service_timer);

 for (VAR_2 = 0; VAR_2 < VAR_0->channel_count; VAR_2++) {
  VAR_1 = VAR_0->channel[VAR_2];
  if (!VAR_1->tx_ring)
   break;

  FUNC_0(&VAR_1->tx_timer);
 }
}
