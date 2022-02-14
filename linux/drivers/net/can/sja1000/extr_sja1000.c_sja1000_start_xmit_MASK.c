
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct sja1000_priv {TYPE_1__ can; int (* write_reg ) (struct sja1000_priv*,int ,int) ;} ;
struct net_device {int dummy; } ;
struct can_frame {int can_dlc; int can_id; int* data; } ;
typedef int netdev_tx_t ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ) ;
 struct sja1000_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sja1000_priv*,int) ;
 int FUNC_5 (struct sja1000_priv*,int ,int) ;
 int FUNC_6 (struct sja1000_priv*,int ,int) ;
 int FUNC_7 (struct sja1000_priv*,int ,int) ;
 int FUNC_8 (struct sja1000_priv*,int ,int) ;
 int FUNC_9 (struct sja1000_priv*,int ,int) ;
 int FUNC_10 (struct sja1000_priv*,int ,int) ;
 int FUNC_11 (struct sja1000_priv*,int ,int) ;
 int FUNC_12 (struct sja1000_priv*,int ,int) ;
 int FUNC_13 (struct sja1000_priv*,int ,int) ;

__attribute__((used)) static netdev_tx_t FUNC_14(struct sk_buff *VAR_17,
         struct net_device *VAR_18)
{
 struct sja1000_priv *VAR_19 = FUNC_2(VAR_18);
 struct can_frame *VAR_20 = (struct can_frame *)VAR_17->data;
 uint8_t VAR_21;
 uint8_t VAR_22;
 canid_t VAR_23;
 uint8_t VAR_24;
 u8 VAR_25 = 0x00;
 int VAR_26;

 if (FUNC_0(VAR_18, VAR_17))
  return VAR_7;

 FUNC_3(VAR_18);

 VAR_21 = VAR_22 = VAR_20->can_dlc;
 VAR_23 = VAR_20->can_id;

 if (VAR_23 & VAR_3)
  VAR_21 |= VAR_11;

 if (VAR_23 & VAR_2) {
  VAR_21 |= VAR_10;
  VAR_24 = VAR_8;
  VAR_19->write_reg(VAR_19, VAR_9, VAR_21);
  VAR_19->write_reg(VAR_19, VAR_12, (VAR_23 & 0x1fe00000) >> 21);
  VAR_19->write_reg(VAR_19, VAR_13, (VAR_23 & 0x001fe000) >> 13);
  VAR_19->write_reg(VAR_19, VAR_14, (VAR_23 & 0x00001fe0) >> 5);
  VAR_19->write_reg(VAR_19, VAR_15, (VAR_23 & 0x0000001f) << 3);
 } else {
  VAR_24 = VAR_16;
  VAR_19->write_reg(VAR_19, VAR_9, VAR_21);
  VAR_19->write_reg(VAR_19, VAR_12, (VAR_23 & 0x000007f8) >> 3);
  VAR_19->write_reg(VAR_19, VAR_13, (VAR_23 & 0x00000007) << 5);
 }

 for (VAR_26 = 0; VAR_26 < VAR_22; VAR_26++)
  VAR_19->write_reg(VAR_19, VAR_24++, VAR_20->data[VAR_26]);

 FUNC_1(VAR_17, VAR_18, 0);

 if (VAR_19->can.ctrlmode & VAR_1)
  VAR_25 |= VAR_4;

 if (VAR_19->can.ctrlmode & VAR_0)
  VAR_25 |= VAR_5;
 else
  VAR_25 |= VAR_6;

 FUNC_4(VAR_19, VAR_25);

 return VAR_7;
}
