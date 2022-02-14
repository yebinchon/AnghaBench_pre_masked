
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xcan_priv {int (* read_reg ) (struct xcan_priv*,int) ;} ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_packets; int rx_bytes; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct canfd_frame {int len; int can_id; int data; } ;
struct can_frame {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sk_buff* FUNC_3 (struct net_device*,struct can_frame**) ;
 struct sk_buff* FUNC_4 (struct net_device*,struct canfd_frame**) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 struct xcan_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct xcan_priv*,int) ;
 int FUNC_11 (struct xcan_priv*,int) ;
 int FUNC_12 (struct xcan_priv*,int) ;
 int FUNC_13 (struct xcan_priv*,int) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_13, int VAR_14)
{
 struct xcan_priv *VAR_15 = FUNC_8(VAR_13);
 struct net_device_stats *VAR_16 = &VAR_13->stats;
 struct canfd_frame *VAR_17;
 struct sk_buff *VAR_18;
 u32 VAR_19, VAR_20, VAR_21[2] = {0, 0}, VAR_22 = 0, VAR_23, VAR_24;

 VAR_19 = VAR_15->read_reg(VAR_15, FUNC_2(VAR_14));
 VAR_20 = VAR_15->read_reg(VAR_15, FUNC_1(VAR_14));
 if (VAR_20 & VAR_5)
  VAR_18 = FUNC_4(VAR_13, &VAR_17);
 else
  VAR_18 = FUNC_3(VAR_13, (struct can_frame **)&VAR_17);

 if (FUNC_14(!VAR_18)) {
  VAR_16->rx_dropped++;
  return 0;
 }




 if (VAR_20 & VAR_5)
  VAR_17->len = FUNC_5((VAR_20 & VAR_3) >>
      VAR_4);
 else
  VAR_17->len = FUNC_7((VAR_20 & VAR_3) >>
       VAR_4);


 if (VAR_19 & VAR_10) {

  VAR_17->can_id = (VAR_19 & VAR_6) >> 3;
  VAR_17->can_id |= (VAR_19 & VAR_8) >>
    VAR_9;
  VAR_17->can_id |= VAR_0;
  if (VAR_19 & VAR_11)
   VAR_17->can_id |= VAR_1;
 } else {

  VAR_17->can_id = (VAR_19 & VAR_6) >>
    VAR_7;
  if (!(VAR_20 & VAR_5) && (VAR_19 &
     VAR_12))
   VAR_17->can_id |= VAR_1;
 }


 if (VAR_20 & VAR_5) {
  for (VAR_23 = 0; VAR_23 < VAR_17->len; VAR_23 += 4) {
   VAR_24 = FUNC_0(VAR_14) +
     (VAR_22 * VAR_2);
   VAR_21[0] = VAR_15->read_reg(VAR_15, VAR_24);
   *(__be32 *)(VAR_17->data + VAR_23) = FUNC_6(VAR_21[0]);
   VAR_22++;
  }
 } else {
  for (VAR_23 = 0; VAR_23 < VAR_17->len; VAR_23 += 4) {
   VAR_24 = FUNC_0(VAR_14);
   VAR_21[0] = VAR_15->read_reg(VAR_15, VAR_24 + VAR_23);
   *(__be32 *)(VAR_17->data + VAR_23) = FUNC_6(VAR_21[0]);
  }
 }
 VAR_16->rx_bytes += VAR_17->len;
 VAR_16->rx_packets++;
 FUNC_9(VAR_18);

 return 1;
}
