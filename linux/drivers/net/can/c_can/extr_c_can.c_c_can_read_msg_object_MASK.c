
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_dlc; int can_id; int* data; } ;
struct c_can_priv {int (* read_reg32 ) (struct c_can_priv*,int) ;scalar_t__ type; int (* read_reg ) (struct c_can_priv*,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_1 (struct net_device*,struct can_frame**) ;
 int FUNC_2 (int) ;
 struct c_can_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct c_can_priv*,int) ;
 int FUNC_6 (struct c_can_priv*,int) ;
 int FUNC_7 (struct c_can_priv*,int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_10, int VAR_11, u32 VAR_12)
{
 struct net_device_stats *VAR_13 = &VAR_10->stats;
 struct c_can_priv *VAR_14 = FUNC_3(VAR_10);
 struct can_frame *VAR_15;
 struct sk_buff *VAR_16;
 u32 VAR_17, VAR_18;

 VAR_16 = FUNC_1(VAR_10, &VAR_15);
 if (!VAR_16) {
  VAR_13->rx_dropped++;
  return -VAR_7;
 }

 VAR_15->can_dlc = FUNC_2(VAR_12 & 0x0F);

 VAR_17 = VAR_14->read_reg32(VAR_14, FUNC_0(VAR_0, VAR_11));

 if (VAR_17 & VAR_8)
  VAR_15->can_id = (VAR_17 & VAR_3) | VAR_2;
 else
  VAR_15->can_id = (VAR_17 >> 18) & VAR_5;

 if (VAR_17 & VAR_9) {
  VAR_15->can_id |= VAR_4;
 } else {
  int VAR_19, VAR_20 = FUNC_0(VAR_6, VAR_11);

  if (VAR_14->type == VAR_1) {
   for (VAR_19 = 0; VAR_19 < VAR_15->can_dlc; VAR_19 += 4, VAR_20 += 2) {
    VAR_18 = VAR_14->read_reg32(VAR_14, VAR_20);
    VAR_15->data[VAR_19] = VAR_18;
    VAR_15->data[VAR_19 + 1] = VAR_18 >> 8;
    VAR_15->data[VAR_19 + 2] = VAR_18 >> 16;
    VAR_15->data[VAR_19 + 3] = VAR_18 >> 24;
   }
  } else {
   for (VAR_19 = 0; VAR_19 < VAR_15->can_dlc; VAR_19 += 2, VAR_20++) {
    VAR_18 = VAR_14->read_reg(VAR_14, VAR_20);
    VAR_15->data[VAR_19] = VAR_18;
    VAR_15->data[VAR_19 + 1] = VAR_18 >> 8;
   }
  }
 }

 VAR_13->rx_packets++;
 VAR_13->rx_bytes += VAR_15->can_dlc;

 FUNC_4(VAR_16);
 return 0;
}
