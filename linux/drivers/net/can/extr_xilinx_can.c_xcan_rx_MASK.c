
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int ) ;} ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_dlc; int can_id; scalar_t__ data; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_4 (struct net_device*,struct can_frame**) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 struct xcan_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct xcan_priv*,int ) ;
 int FUNC_10 (struct xcan_priv*,int ) ;
 int FUNC_11 (struct xcan_priv*,int ) ;
 int FUNC_12 (struct xcan_priv*,int ) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_10, int VAR_11)
{
 struct xcan_priv *VAR_12 = FUNC_7(VAR_10);
 struct net_device_stats *VAR_13 = &VAR_10->stats;
 struct can_frame *VAR_14;
 struct sk_buff *VAR_15;
 u32 VAR_16, VAR_17, VAR_18[2] = {0, 0};

 VAR_15 = FUNC_4(VAR_10, &VAR_14);
 if (FUNC_13(!VAR_15)) {
  VAR_13->rx_dropped++;
  return 0;
 }


 VAR_16 = VAR_12->read_reg(VAR_12, FUNC_3(VAR_11));
 VAR_17 = VAR_12->read_reg(VAR_12, FUNC_0(VAR_11)) >>
       VAR_2;


 VAR_14->can_dlc = FUNC_6(VAR_17);


 if (VAR_16 & VAR_7) {

  VAR_14->can_id = (VAR_16 & VAR_3) >> 3;
  VAR_14->can_id |= (VAR_16 & VAR_5) >>
    VAR_6;
  VAR_14->can_id |= VAR_0;
  if (VAR_16 & VAR_8)
   VAR_14->can_id |= VAR_1;
 } else {

  VAR_14->can_id = (VAR_16 & VAR_3) >>
    VAR_4;
  if (VAR_16 & VAR_9)
   VAR_14->can_id |= VAR_1;
 }


 VAR_18[0] = VAR_12->read_reg(VAR_12, FUNC_1(VAR_11));
 VAR_18[1] = VAR_12->read_reg(VAR_12, FUNC_2(VAR_11));

 if (!(VAR_14->can_id & VAR_1)) {

  if (VAR_14->can_dlc > 0)
   *(__be32 *)(VAR_14->data) = FUNC_5(VAR_18[0]);
  if (VAR_14->can_dlc > 4)
   *(__be32 *)(VAR_14->data + 4) = FUNC_5(VAR_18[1]);
 }

 VAR_13->rx_bytes += VAR_14->can_dlc;
 VAR_13->rx_packets++;
 FUNC_8(VAR_15);

 return 1;
}
