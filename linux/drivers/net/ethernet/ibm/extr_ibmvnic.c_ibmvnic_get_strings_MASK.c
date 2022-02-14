
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct ibmvnic_adapter {int req_tx_queues; int req_rx_queues; } ;
struct TYPE_5__ {int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;


 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int ,int) ;
 struct ibmvnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int,char*,int) ;
 int FUNC_4 (int *,TYPE_1__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3, u32 VAR_4, u8 *VAR_5)
{
 struct ibmvnic_adapter *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;

 switch (VAR_4) {
 case 128:
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2);
    VAR_7++, VAR_5 += VAR_0)
   FUNC_1(VAR_5, VAR_2[VAR_7].name, VAR_0);

  for (VAR_7 = 0; VAR_7 < VAR_6->req_tx_queues; VAR_7++) {
   FUNC_3(VAR_5, VAR_0, "tx%d_packets", VAR_7);
   VAR_5 += VAR_0;

   FUNC_3(VAR_5, VAR_0, "tx%d_bytes", VAR_7);
   VAR_5 += VAR_0;

   FUNC_3(VAR_5, VAR_0,
     "tx%d_dropped_packets", VAR_7);
   VAR_5 += VAR_0;
  }

  for (VAR_7 = 0; VAR_7 < VAR_6->req_rx_queues; VAR_7++) {
   FUNC_3(VAR_5, VAR_0, "rx%d_packets", VAR_7);
   VAR_5 += VAR_0;

   FUNC_3(VAR_5, VAR_0, "rx%d_bytes", VAR_7);
   VAR_5 += VAR_0;

   FUNC_3(VAR_5, VAR_0, "rx%d_interrupts", VAR_7);
   VAR_5 += VAR_0;
  }
  break;

 case 129:
  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
   FUNC_4(VAR_5 + VAR_7 * VAR_0,
          VAR_1[VAR_7]);
  break;
 default:
  return;
 }
}
