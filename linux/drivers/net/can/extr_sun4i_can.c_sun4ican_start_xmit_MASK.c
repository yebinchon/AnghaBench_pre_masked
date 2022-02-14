
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ctrlmode; } ;
struct sun4ican_priv {int base; TYPE_1__ can; } ;
struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int* data; } ;
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
 scalar_t__ FUNC_0 (struct net_device*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,struct net_device*,int ) ;
 struct sun4ican_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sun4ican_priv*,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static netdev_tx_t FUNC_6(struct sk_buff *VAR_14, struct net_device *VAR_15)
{
 struct sun4ican_priv *VAR_16 = FUNC_2(VAR_15);
 struct can_frame *VAR_17 = (struct can_frame *)VAR_14->data;
 u8 VAR_18;
 u32 VAR_19, VAR_20;
 canid_t VAR_21;
 int VAR_22;

 if (FUNC_0(VAR_15, VAR_14))
  return VAR_3;

 FUNC_3(VAR_15);

 VAR_21 = VAR_17->can_id;
 VAR_18 = VAR_17->can_dlc;
 VAR_20 = VAR_18;

 if (VAR_21 & VAR_2)
  VAR_20 |= VAR_7;

 if (VAR_21 & VAR_1) {
  VAR_20 |= VAR_6;
  VAR_19 = VAR_13;
  FUNC_5((VAR_21 >> 21) & 0xFF, VAR_16->base + VAR_9);
  FUNC_5((VAR_21 >> 13) & 0xFF, VAR_16->base + VAR_10);
  FUNC_5((VAR_21 >> 5) & 0xFF, VAR_16->base + VAR_11);
  FUNC_5((VAR_21 << 3) & 0xF8, VAR_16->base + VAR_12);
 } else {
  VAR_19 = VAR_11;
  FUNC_5((VAR_21 >> 3) & 0xFF, VAR_16->base + VAR_9);
  FUNC_5((VAR_21 << 5) & 0xE0, VAR_16->base + VAR_10);
 }

 for (VAR_22 = 0; VAR_22 < VAR_18; VAR_22++)
  FUNC_5(VAR_17->data[VAR_22], VAR_16->base + (VAR_19 + VAR_22 * 4));

 FUNC_5(VAR_20, VAR_16->base + VAR_8);

 FUNC_1(VAR_14, VAR_15, 0);

 if (VAR_16->can.ctrlmode & VAR_0)
  FUNC_4(VAR_16, VAR_4);
 else
  FUNC_4(VAR_16, VAR_5);

 return VAR_3;
}
