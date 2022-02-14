
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sun4ican_priv {scalar_t__ base; } ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct can_frame {int can_dlc; int* data; int can_id; } ;
typedef int canid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int) ;
 struct sun4ican_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct sun4ican_priv*,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_12)
{
 struct sun4ican_priv *VAR_13 = FUNC_3(VAR_12);
 struct net_device_stats *VAR_14 = &VAR_12->stats;
 struct can_frame *VAR_15;
 struct sk_buff *VAR_16;
 u8 VAR_17;
 u32 VAR_18;
 canid_t VAR_19;
 int VAR_20;


 VAR_16 = FUNC_0(VAR_12, &VAR_15);
 if (!VAR_16)
  return;

 VAR_17 = FUNC_5(VAR_13->base + VAR_6);
 VAR_15->can_dlc = FUNC_2(VAR_17 & 0x0F);
 if (VAR_17 & VAR_4) {
  VAR_18 = VAR_11;
  VAR_19 = (FUNC_5(VAR_13->base + VAR_7) << 21) |
       (FUNC_5(VAR_13->base + VAR_8) << 13) |
       (FUNC_5(VAR_13->base + VAR_9) << 5) |
      ((FUNC_5(VAR_13->base + VAR_10) >> 3) & 0x1f);
  VAR_19 |= VAR_0;
 } else {
  VAR_18 = VAR_9;
  VAR_19 = (FUNC_5(VAR_13->base + VAR_7) << 3) |
      ((FUNC_5(VAR_13->base + VAR_8) >> 5) & 0x7);
 }


 if (VAR_17 & VAR_5)
  VAR_19 |= VAR_2;
 else
  for (VAR_20 = 0; VAR_20 < VAR_15->can_dlc; VAR_20++)
   VAR_15->data[VAR_20] = FUNC_5(VAR_13->base + VAR_18 + VAR_20 * 4);

 VAR_15->can_id = VAR_19;

 FUNC_6(VAR_13, VAR_3);

 VAR_14->rx_packets++;
 VAR_14->rx_bytes += VAR_15->can_dlc;
 FUNC_4(VAR_16);

 FUNC_1(VAR_12, VAR_1);
}
