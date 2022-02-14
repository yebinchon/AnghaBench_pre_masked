
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rcar_can_priv {TYPE_3__* ndev; TYPE_2__* regs; } ;
struct net_device_stats {int rx_packets; int rx_bytes; int rx_dropped; } ;
struct can_frame {int can_id; size_t can_dlc; void** data; } ;
struct TYPE_7__ {struct net_device_stats stats; } ;
struct TYPE_6__ {TYPE_1__* mb; } ;
struct TYPE_5__ {int * data; int dlc; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_0 (TYPE_3__*,struct can_frame**) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 size_t FUNC_2 (size_t) ;
 int FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rcar_can_priv *VAR_9)
{
 struct net_device_stats *VAR_10 = &VAR_9->ndev->stats;
 struct can_frame *VAR_11;
 struct sk_buff *VAR_12;
 u32 VAR_13;
 u8 VAR_14;

 VAR_12 = FUNC_0(VAR_9->ndev, &VAR_11);
 if (!VAR_12) {
  VAR_10->rx_dropped++;
  return;
 }

 VAR_13 = FUNC_5(&VAR_9->regs->mb[VAR_7].id);
 if (VAR_13 & VAR_5)
  VAR_11->can_id = (VAR_13 & VAR_1) | VAR_0;
 else
  VAR_11->can_id = (VAR_13 >> VAR_8) & VAR_4;

 VAR_14 = FUNC_4(&VAR_9->regs->mb[VAR_7].dlc);
 VAR_11->can_dlc = FUNC_2(VAR_14);
 if (VAR_13 & VAR_6) {
  VAR_11->can_id |= VAR_3;
 } else {
  for (VAR_14 = 0; VAR_14 < VAR_11->can_dlc; VAR_14++)
   VAR_11->data[VAR_14] =
   FUNC_4(&VAR_9->regs->mb[VAR_7].data[VAR_14]);
 }

 FUNC_1(VAR_9->ndev, VAR_2);

 VAR_10->rx_bytes += VAR_11->can_dlc;
 VAR_10->rx_packets++;
 FUNC_3(VAR_12);
}
