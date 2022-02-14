
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ixgbevf_adapter {int num_tx_queues; int num_xdp_queues; int num_rx_queues; } ;
struct TYPE_2__ {int stat_string; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int) ;
 struct ixgbevf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_7, u32 VAR_8,
    u8 *VAR_9)
{
 struct ixgbevf_adapter *VAR_10 = FUNC_1(VAR_7);
 char *VAR_11 = (char *)VAR_9;
 int VAR_12;

 switch (VAR_8) {
 case 128:
  FUNC_0(VAR_9, *VAR_4,
         VAR_3 * VAR_0);
  break;
 case 129:
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
   FUNC_0(VAR_11, VAR_5[VAR_12].stat_string,
          VAR_0);
   VAR_11 += VAR_0;
  }

  for (VAR_12 = 0; VAR_12 < VAR_10->num_tx_queues; VAR_12++) {
   FUNC_2(VAR_11, "tx_queue_%u_packets", VAR_12);
   VAR_11 += VAR_0;
   FUNC_2(VAR_11, "tx_queue_%u_bytes", VAR_12);
   VAR_11 += VAR_0;
  }
  for (VAR_12 = 0; VAR_12 < VAR_10->num_xdp_queues; VAR_12++) {
   FUNC_2(VAR_11, "xdp_queue_%u_packets", VAR_12);
   VAR_11 += VAR_0;
   FUNC_2(VAR_11, "xdp_queue_%u_bytes", VAR_12);
   VAR_11 += VAR_0;
  }
  for (VAR_12 = 0; VAR_12 < VAR_10->num_rx_queues; VAR_12++) {
   FUNC_2(VAR_11, "rx_queue_%u_packets", VAR_12);
   VAR_11 += VAR_0;
   FUNC_2(VAR_11, "rx_queue_%u_bytes", VAR_12);
   VAR_11 += VAR_0;
  }
  break;
 case 130:
  FUNC_0(VAR_9, VAR_6,
         VAR_2 * VAR_0);
  break;
 }
}
