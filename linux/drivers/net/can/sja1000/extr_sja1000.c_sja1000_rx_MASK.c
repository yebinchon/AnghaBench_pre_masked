
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sk_buff {int dummy; } ;
struct sja1000_priv {int (* read_reg ) (struct sja1000_priv*,int ) ;} ;
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int) ;
 struct sja1000_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sja1000_priv*,int ) ;
 int FUNC_6 (struct sja1000_priv*,int ) ;
 int FUNC_7 (struct sja1000_priv*,int ) ;
 int FUNC_8 (struct sja1000_priv*,int ) ;
 int FUNC_9 (struct sja1000_priv*,int ) ;
 int FUNC_10 (struct sja1000_priv*,int ) ;
 int FUNC_11 (struct sja1000_priv*,int ) ;
 int FUNC_12 (struct sja1000_priv*,int ) ;
 int FUNC_13 (struct sja1000_priv*,int ) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_13)
{
 struct sja1000_priv *VAR_14 = FUNC_3(VAR_13);
 struct net_device_stats *VAR_15 = &VAR_13->stats;
 struct can_frame *VAR_16;
 struct sk_buff *VAR_17;
 uint8_t VAR_18;
 uint8_t VAR_19;
 canid_t VAR_20;
 int VAR_21;


 VAR_17 = FUNC_0(VAR_13, &VAR_16);
 if (VAR_17 == ((void*)0))
  return;

 VAR_18 = VAR_14->read_reg(VAR_14, VAR_5);

 if (VAR_18 & VAR_6) {

  VAR_19 = VAR_4;
  VAR_20 = (VAR_14->read_reg(VAR_14, VAR_8) << 21)
      | (VAR_14->read_reg(VAR_14, VAR_9) << 13)
      | (VAR_14->read_reg(VAR_14, VAR_10) << 5)
      | (VAR_14->read_reg(VAR_14, VAR_11) >> 3);
  VAR_20 |= VAR_0;
 } else {

  VAR_19 = VAR_12;
  VAR_20 = (VAR_14->read_reg(VAR_14, VAR_8) << 3)
      | (VAR_14->read_reg(VAR_14, VAR_9) >> 5);
 }

 VAR_16->can_dlc = FUNC_2(VAR_18 & 0x0F);
 if (VAR_18 & VAR_7) {
  VAR_20 |= VAR_2;
 } else {
  for (VAR_21 = 0; VAR_21 < VAR_16->can_dlc; VAR_21++)
   VAR_16->data[VAR_21] = VAR_14->read_reg(VAR_14, VAR_19++);
 }

 VAR_16->can_id = VAR_20;


 FUNC_5(VAR_14, VAR_3);

 VAR_15->rx_packets++;
 VAR_15->rx_bytes += VAR_16->can_dlc;
 FUNC_4(VAR_17);

 FUNC_1(VAR_13, VAR_1);
}
