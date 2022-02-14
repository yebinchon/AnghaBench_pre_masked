
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct m_can_classdev {int dummy; } ;
struct canfd_frame {int len; int can_id; scalar_t__ data; int flags; } ;
struct can_frame {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct sk_buff* FUNC_1 (struct net_device*,struct can_frame**) ;
 struct sk_buff* FUNC_2 (struct net_device*,struct canfd_frame**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct m_can_classdev*,int,int ) ;
 int FUNC_6 (struct m_can_classdev*,int ,int) ;
 int FUNC_7 (struct net_device*,char*) ;
 struct m_can_classdev* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_16, u32 VAR_17)
{
 struct net_device_stats *VAR_18 = &VAR_16->stats;
 struct m_can_classdev *VAR_19 = FUNC_8(VAR_16);
 struct canfd_frame *VAR_20;
 struct sk_buff *VAR_21;
 u32 VAR_22, VAR_23, VAR_24;
 int VAR_25;


 VAR_23 = (VAR_17 & VAR_9) >> VAR_10;
 VAR_24 = FUNC_5(VAR_19, VAR_23, VAR_6);
 if (VAR_24 & VAR_13)
  VAR_21 = FUNC_2(VAR_16, &VAR_20);
 else
  VAR_21 = FUNC_1(VAR_16, (struct can_frame **)&VAR_20);
 if (!VAR_21) {
  VAR_18->rx_dropped++;
  return;
 }

 if (VAR_24 & VAR_13)
  VAR_20->len = FUNC_3((VAR_24 >> 16) & 0x0F);
 else
  VAR_20->len = FUNC_4((VAR_24 >> 16) & 0x0F);

 VAR_22 = FUNC_5(VAR_19, VAR_23, VAR_7);
 if (VAR_22 & VAR_15)
  VAR_20->can_id = (VAR_22 & VAR_3) | VAR_2;
 else
  VAR_20->can_id = (VAR_22 >> 18) & VAR_5;

 if (VAR_22 & VAR_12) {
  VAR_20->flags |= VAR_1;
  FUNC_7(VAR_16, "ESI Error\n");
 }

 if (!(VAR_24 & VAR_13) && (VAR_22 & VAR_14)) {
  VAR_20->can_id |= VAR_4;
 } else {
  if (VAR_24 & VAR_11)
   VAR_20->flags |= VAR_0;

  for (VAR_25 = 0; VAR_25 < VAR_20->len; VAR_25 += 4)
   *(u32 *)(VAR_20->data + VAR_25) =
    FUNC_5(VAR_19, VAR_23,
      FUNC_0(VAR_25 / 4));
 }


 FUNC_6(VAR_19, VAR_8, VAR_23);

 VAR_18->rx_packets++;
 VAR_18->rx_bytes += VAR_20->len;

 FUNC_9(VAR_21);
}
