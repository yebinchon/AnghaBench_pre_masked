
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct serdev_device {int dummy; } ;
struct qcauart {TYPE_1__* rx_skb; int frm_handle; struct net_device* net_dev; } ;
struct net_device_stats {int rx_bytes; int rx_errors; int rx_packets; int rx_dropped; } ;
struct net_device {scalar_t__ mtu; struct net_device_stats stats; } ;
typedef int s32 ;
struct TYPE_5__ {int ip_summed; int dev; int protocol; int data; } ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 void* FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int ,unsigned char const) ;
 struct qcauart* FUNC_5 (struct serdev_device*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_8(struct serdev_device *VAR_2, const unsigned char *VAR_3,
  size_t VAR_4)
{
 struct qcauart *VAR_5 = FUNC_5(VAR_2);
 struct net_device *VAR_6 = VAR_5->net_dev;
 struct net_device_stats *VAR_7 = &VAR_6->stats;
 size_t VAR_8;

 if (!VAR_5->rx_skb) {
  VAR_5->rx_skb = FUNC_1(VAR_6,
       VAR_6->mtu +
       VAR_1);
  if (!VAR_5->rx_skb) {
   VAR_7->rx_errors++;
   VAR_7->rx_dropped++;
   return 0;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  s32 VAR_9;

  VAR_9 = FUNC_4(&VAR_5->frm_handle,
         VAR_5->rx_skb->data,
         FUNC_7(VAR_5->rx_skb),
         VAR_3[VAR_8]);

  switch (VAR_9) {
  case 131:
  case 129:
   break;
  case 128:
   FUNC_2(VAR_6, "recv: no RX tail\n");
   VAR_7->rx_errors++;
   VAR_7->rx_dropped++;
   break;
  case 130:
   FUNC_2(VAR_6, "recv: invalid RX length\n");
   VAR_7->rx_errors++;
   VAR_7->rx_dropped++;
   break;
  default:
   VAR_7->rx_packets++;
   VAR_7->rx_bytes += VAR_9;
   FUNC_6(VAR_5->rx_skb, VAR_9);
   VAR_5->rx_skb->protocol = FUNC_0(
      VAR_5->rx_skb, VAR_5->rx_skb->dev);
   VAR_5->rx_skb->ip_summed = VAR_0;
   FUNC_3(VAR_5->rx_skb);
   VAR_5->rx_skb = FUNC_1(VAR_6,
        VAR_6->mtu +
        VAR_1);
   if (!VAR_5->rx_skb) {
    FUNC_2(VAR_6, "recv: out of RX resources\n");
    VAR_7->rx_errors++;
    return VAR_8;
   }
  }
 }

 return VAR_8;
}
