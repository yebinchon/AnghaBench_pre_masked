
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct ifi_canfd_priv {scalar_t__ base; TYPE_1__ can; } ;
struct canfd_frame {int can_id; int len; int flags; scalar_t__ data; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct ifi_canfd_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_9(struct sk_buff *VAR_23,
     struct net_device *VAR_24)
{
 struct ifi_canfd_priv *VAR_25 = FUNC_5(VAR_24);
 struct canfd_frame *VAR_26 = (struct canfd_frame *)VAR_23->data;
 u32 VAR_27, VAR_28, VAR_29;
 int VAR_30;

 if (FUNC_0(VAR_24, VAR_23))
  return VAR_22;


 VAR_27 = FUNC_7(VAR_25->base + VAR_18);
 if (VAR_27 & VAR_20) {
  FUNC_6(VAR_24);
  FUNC_4(VAR_24, "BUG! TX FIFO full when queue awake!\n");
  return VAR_21;
 }

 FUNC_6(VAR_24);

 if (VAR_26->can_id & VAR_2) {
  VAR_28 = VAR_26->can_id & VAR_3;






  VAR_28 = (VAR_28 >> VAR_15) |
         ((VAR_28 & VAR_13) <<
           VAR_14);
  VAR_28 |= VAR_12;
 } else {
  VAR_28 = VAR_26->can_id & VAR_5;
 }

 VAR_29 = FUNC_2(VAR_26->len);
 if ((VAR_25->can.ctrlmode & VAR_1) && FUNC_1(VAR_23)) {
  VAR_29 |= VAR_9;
  if (VAR_26->flags & VAR_0)
   VAR_29 |= VAR_8;
 }

 if (VAR_26->can_id & VAR_4)
  VAR_29 |= VAR_10;


 FUNC_8(VAR_28, VAR_25->base + VAR_11);
 FUNC_8(VAR_29, VAR_25->base + VAR_7);

 for (VAR_30 = 0; VAR_30 < VAR_26->len; VAR_30 += 4) {
  FUNC_8(*(u32 *)(VAR_26->data + VAR_30),
         VAR_25->base + VAR_6 + VAR_30);
 }

 FUNC_8(0, VAR_25->base + VAR_16);
 FUNC_8(0, VAR_25->base + VAR_17);

 FUNC_3(VAR_23, VAR_24, 0);


 FUNC_8(VAR_19, VAR_25->base + VAR_18);

 return VAR_22;
}
