
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct xgbe_prv_data {int tx_ring_count; int rx_ring_count; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,char*,int) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 struct xgbe_prv_data *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;

 switch (VAR_4) {
 case 128:
  for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
   FUNC_0(VAR_5, VAR_2[VAR_7].stat_string,
          VAR_0);
   VAR_5 += VAR_0;
  }
  for (VAR_7 = 0; VAR_7 < VAR_6->tx_ring_count; VAR_7++) {
   FUNC_2(VAR_5, "txq_%u_packets", VAR_7);
   VAR_5 += VAR_0;
   FUNC_2(VAR_5, "txq_%u_bytes", VAR_7);
   VAR_5 += VAR_0;
  }
  for (VAR_7 = 0; VAR_7 < VAR_6->rx_ring_count; VAR_7++) {
   FUNC_2(VAR_5, "rxq_%u_packets", VAR_7);
   VAR_5 += VAR_0;
   FUNC_2(VAR_5, "rxq_%u_bytes", VAR_7);
   VAR_5 += VAR_0;
  }
  break;
 }
}
