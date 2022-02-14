
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct ifi_canfd_priv {scalar_t__ base; } ;
struct canfd_frame {int len; int can_id; scalar_t__ data; int flags; } ;
struct can_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int const VAR_23 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 struct sk_buff* FUNC_1 (struct net_device*,struct canfd_frame**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct ifi_canfd_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int const,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_24)
{
 struct net_device_stats *VAR_25 = &VAR_24->stats;
 struct ifi_canfd_priv *VAR_26 = FUNC_5(VAR_24);
 struct canfd_frame *VAR_27;
 struct sk_buff *VAR_28;
 const u32 VAR_29 = VAR_5 |
    VAR_6;
 u32 VAR_30, VAR_31;
 u32 VAR_32, VAR_33;
 int VAR_34;

 VAR_30 = FUNC_7(VAR_26->base + VAR_8);
 if (VAR_30 & VAR_12)
  VAR_28 = FUNC_1(VAR_24, &VAR_27);
 else
  VAR_28 = FUNC_0(VAR_24, (struct can_frame **)&VAR_27);

 if (!VAR_28) {
  VAR_25->rx_dropped++;
  return;
 }

 VAR_32 = (VAR_30 >> VAR_11) &
       VAR_10;
 if (VAR_30 & VAR_12)
  VAR_27->len = FUNC_2(VAR_32);
 else
  VAR_27->len = FUNC_3(VAR_32);

 VAR_31 = FUNC_7(VAR_26->base + VAR_15);
 VAR_33 = (VAR_31 >> VAR_17);
 if (VAR_33 & VAR_16) {
  VAR_33 &= VAR_19;





  VAR_33 = (VAR_33 >> VAR_20) |
       ((VAR_33 & VAR_18) <<
         VAR_21);
  VAR_33 |= VAR_2;
 } else {
  VAR_33 &= VAR_18;
 }
 VAR_27->can_id = VAR_33;

 if (VAR_30 & VAR_13) {
  VAR_27->flags |= VAR_1;
  FUNC_4(VAR_24, "ESI Error\n");
 }

 if (!(VAR_30 & VAR_12) &&
     (VAR_30 & VAR_14)) {
  VAR_27->can_id |= VAR_3;
 } else {
  if (VAR_30 & VAR_9)
   VAR_27->flags |= VAR_0;

  for (VAR_34 = 0; VAR_34 < VAR_27->len; VAR_34 += 4) {
   *(u32 *)(VAR_27->data + VAR_34) =
    FUNC_7(VAR_26->base + VAR_7 + VAR_34);
  }
 }


 FUNC_8(VAR_23, VAR_26->base + VAR_22);
 FUNC_8(VAR_29, VAR_26->base + VAR_4);

 VAR_25->rx_packets++;
 VAR_25->rx_bytes += VAR_27->len;

 FUNC_6(VAR_28);
}
