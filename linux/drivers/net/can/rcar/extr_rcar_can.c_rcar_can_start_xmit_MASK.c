
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {scalar_t__ data; } ;
struct rcar_can_priv {int* tx_dlc; size_t tx_head; size_t tx_tail; TYPE_2__* regs; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; size_t can_dlc; int* data; } ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int tfpcr; TYPE_1__* mb; } ;
struct TYPE_3__ {int dlc; int id; int * data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,size_t) ;
 struct rcar_can_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (size_t,int *) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_10,
           struct net_device *VAR_11)
{
 struct rcar_can_priv *VAR_12 = FUNC_2(VAR_11);
 struct can_frame *VAR_13 = (struct can_frame *)VAR_10->data;
 u32 VAR_14, VAR_15;

 if (FUNC_0(VAR_11, VAR_10))
  return VAR_4;

 if (VAR_13->can_id & VAR_0)
  VAR_14 = (VAR_13->can_id & VAR_1) | VAR_6;
 else
  VAR_14 = (VAR_13->can_id & VAR_3) << VAR_8;

 if (VAR_13->can_id & VAR_2) {
  VAR_14 |= VAR_7;
 } else {
  for (VAR_15 = 0; VAR_15 < VAR_13->can_dlc; VAR_15++)
   FUNC_4(VAR_13->data[VAR_15],
          &VAR_12->regs->mb[VAR_9].data[VAR_15]);
 }

 FUNC_5(VAR_14, &VAR_12->regs->mb[VAR_9].id);

 FUNC_4(VAR_13->can_dlc, &VAR_12->regs->mb[VAR_9].dlc);

 VAR_12->tx_dlc[VAR_12->tx_head % VAR_5] = VAR_13->can_dlc;
 FUNC_1(VAR_10, VAR_11, VAR_12->tx_head % VAR_5);
 VAR_12->tx_head++;




 FUNC_4(0xff, &VAR_12->regs->tfpcr);

 if (VAR_12->tx_head - VAR_12->tx_tail >= VAR_5)
  FUNC_3(VAR_11);

 return VAR_4;
}
