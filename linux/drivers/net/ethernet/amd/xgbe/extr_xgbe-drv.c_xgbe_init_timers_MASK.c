
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {unsigned int channel_count; struct xgbe_channel** channel; int service_timer; } ;
struct xgbe_channel {int tx_timer; int tx_ring; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_2)
{
 struct xgbe_channel *VAR_3;
 unsigned int VAR_4;

 FUNC_0(&VAR_2->service_timer, VAR_0, 0);

 for (VAR_4 = 0; VAR_4 < VAR_2->channel_count; VAR_4++) {
  VAR_3 = VAR_2->channel[VAR_4];
  if (!VAR_3->tx_ring)
   break;

  FUNC_0(&VAR_3->tx_timer, VAR_1, 0);
 }
}
