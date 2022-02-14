
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int ctrlmode; scalar_t__ state; } ;
struct rcar_canfd_channel {int channel; size_t tx_head; size_t tx_tail; int tx_lock; int base; int * tx_len; TYPE_1__ can; } ;
struct net_device {int dummy; } ;
struct canfd_frame {int can_id; int flags; int len; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int,int ) ;
 size_t VAR_14 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*,struct net_device*,size_t) ;
 struct rcar_canfd_channel* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct rcar_canfd_channel*,struct canfd_frame*,int ) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int *,unsigned long) ;
 int FUNC_18 (int *,unsigned long) ;

__attribute__((used)) static netdev_tx_t FUNC_19(struct sk_buff *VAR_15,
      struct net_device *VAR_16)
{
 struct rcar_canfd_channel *VAR_17 = FUNC_13(VAR_16);
 struct canfd_frame *VAR_18 = (struct canfd_frame *)VAR_15->data;
 u32 VAR_19 = 0, VAR_20, VAR_21;
 unsigned long VAR_22;
 u32 VAR_23 = VAR_17->channel;

 if (FUNC_9(VAR_16, VAR_15))
  return VAR_7;

 if (VAR_18->can_id & VAR_2) {
  VAR_20 = VAR_18->can_id & VAR_3;
  VAR_20 |= VAR_12;
 } else {
  VAR_20 = VAR_18->can_id & VAR_5;
 }

 if (VAR_18->can_id & VAR_4)
  VAR_20 |= VAR_13;

 VAR_21 = FUNC_1(FUNC_11(VAR_18->len));

 if (VAR_17->can.ctrlmode & VAR_1) {
  FUNC_16(VAR_17->base,
     FUNC_7(VAR_23, VAR_11), VAR_20);
  FUNC_16(VAR_17->base,
     FUNC_8(VAR_23, VAR_11), VAR_21);

  if (FUNC_10(VAR_15)) {

   VAR_19 |= VAR_10;
   if (VAR_18->flags & VAR_0)
    VAR_19 |= VAR_8;

   if (VAR_17->can.state == VAR_6)
    VAR_19 |= VAR_9;
  }

  FUNC_16(VAR_17->base,
     FUNC_6(VAR_23, VAR_11), VAR_19);

  FUNC_15(VAR_17, VAR_18,
        FUNC_5(VAR_23, VAR_11, 0));
 } else {
  FUNC_16(VAR_17->base,
     FUNC_3(VAR_23, VAR_11), VAR_20);
  FUNC_16(VAR_17->base,
     FUNC_4(VAR_23, VAR_11), VAR_21);
  FUNC_15(VAR_17, VAR_18,
        FUNC_2(VAR_23, VAR_11, 0));
 }

 VAR_17->tx_len[VAR_17->tx_head % VAR_14] = VAR_18->len;
 FUNC_12(VAR_15, VAR_16, VAR_17->tx_head % VAR_14);

 FUNC_17(&VAR_17->tx_lock, VAR_22);
 VAR_17->tx_head++;


 if (VAR_17->tx_head - VAR_17->tx_tail >= VAR_14)
  FUNC_14(VAR_16);




 FUNC_16(VAR_17->base,
    FUNC_0(VAR_23, VAR_11), 0xff);

 FUNC_18(&VAR_17->tx_lock, VAR_22);
 return VAR_7;
}
