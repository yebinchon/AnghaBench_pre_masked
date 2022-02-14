
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;
struct cc770_priv {TYPE_1__* tx_skb; } ;
struct can_frame {int can_dlc; int can_id; int* data; } ;
struct TYPE_4__ {int ctrl0; int ctrl1; int * data; int * id; int config; } ;
struct TYPE_3__ {scalar_t__ data; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct cc770_priv*,int ,int) ;
 TYPE_2__* VAR_22 ;
 struct cc770_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_23, int VAR_24)
{
 struct cc770_priv *VAR_25 = FUNC_1(VAR_23);
 struct can_frame *VAR_26 = (struct can_frame *)VAR_25->tx_skb->data;
 u8 VAR_27, VAR_28;
 u32 VAR_29;
 int VAR_30;

 VAR_27 = VAR_26->can_dlc;
 VAR_29 = VAR_26->can_id;
 VAR_28 = VAR_26->can_id & VAR_2 ? 0 : VAR_8;

 FUNC_0(VAR_25, VAR_22[VAR_24].ctrl0,
   VAR_10 | VAR_18 | VAR_16 | VAR_6);
 FUNC_0(VAR_25, VAR_22[VAR_24].ctrl1,
   VAR_14 | VAR_20 | VAR_5 | VAR_12);

 if (VAR_29 & VAR_0) {
  VAR_29 &= VAR_1;
  FUNC_0(VAR_25, VAR_22[VAR_24].config,
    (VAR_27 << 4) | VAR_28 | VAR_9);
  FUNC_0(VAR_25, VAR_22[VAR_24].id[3], VAR_29 << 3);
  FUNC_0(VAR_25, VAR_22[VAR_24].id[2], VAR_29 >> 5);
  FUNC_0(VAR_25, VAR_22[VAR_24].id[1], VAR_29 >> 13);
  FUNC_0(VAR_25, VAR_22[VAR_24].id[0], VAR_29 >> 21);
 } else {
  VAR_29 &= VAR_3;
  FUNC_0(VAR_25, VAR_22[VAR_24].config, (VAR_27 << 4) | VAR_28);
  FUNC_0(VAR_25, VAR_22[VAR_24].id[0], VAR_29 >> 3);
  FUNC_0(VAR_25, VAR_22[VAR_24].id[1], VAR_29 << 5);
 }

 for (VAR_30 = 0; VAR_30 < VAR_27; VAR_30++)
  FUNC_0(VAR_25, VAR_22[VAR_24].data[VAR_30], VAR_26->data[VAR_30]);

 FUNC_0(VAR_25, VAR_22[VAR_24].ctrl1,
   VAR_15 | VAR_21 | VAR_4 | VAR_13);
 FUNC_0(VAR_25, VAR_22[VAR_24].ctrl0,
   VAR_11 | VAR_19 | VAR_17 | VAR_7);
}
