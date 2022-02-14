
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct bcmgenet_priv {int crc_fwd_en; TYPE_1__* hw_params; struct net_device* dev; } ;
typedef enum bcmgenet_power_mode { ____Placeholder_bcmgenet_power_mode } bcmgenet_power_mode ;
struct TYPE_2__ {int flags; } ;


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
 int FUNC_0 (struct bcmgenet_priv*,int ) ;
 int FUNC_1 (struct bcmgenet_priv*,int ,int ) ;
 int FUNC_2 (struct bcmgenet_priv*) ;
 int FUNC_3 (struct bcmgenet_priv*,int ) ;
 int FUNC_4 (struct bcmgenet_priv*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct bcmgenet_priv*,int ,struct net_device*,char*,int) ;
 int FUNC_7 (struct bcmgenet_priv*,int ,struct net_device*,char*,int) ;
 int VAR_10 ;

int FUNC_8(struct bcmgenet_priv *VAR_11,
    enum bcmgenet_power_mode VAR_12)
{
 struct net_device *VAR_13 = VAR_11->dev;
 int VAR_14 = 0;
 u32 VAR_15;

 if (VAR_12 != VAR_6) {
  FUNC_7(VAR_11, VAR_10, VAR_13, "unsupported mode: %d\n", VAR_12);
  return -VAR_2;
 }


 VAR_15 = FUNC_3(VAR_11, VAR_8);
 VAR_15 &= ~VAR_1;
 FUNC_4(VAR_11, VAR_15, VAR_8);
 FUNC_5(10);

 VAR_15 = FUNC_3(VAR_11, VAR_9);
 VAR_15 |= VAR_7;
 FUNC_4(VAR_11, VAR_15, VAR_9);


 VAR_14 = FUNC_2(VAR_11);
 if (VAR_14 < 0) {
  VAR_15 = FUNC_3(VAR_11, VAR_9);
  VAR_15 &= ~VAR_7;
  FUNC_4(VAR_11, VAR_15, VAR_9);
  return VAR_14;
 }

 FUNC_6(VAR_11, VAR_10, VAR_13, "MPD WOL-ready status set after %d msec\n",
    VAR_14);


 VAR_15 = FUNC_3(VAR_11, VAR_8);
 VAR_11->crc_fwd_en = 1;
 VAR_15 |= VAR_0;


 VAR_15 |= VAR_1;
 FUNC_4(VAR_11, VAR_15, VAR_8);

 if (VAR_11->hw_params->flags & VAR_5) {
  VAR_15 = FUNC_0(VAR_11, VAR_4);
  VAR_15 &= ~VAR_3;
  FUNC_1(VAR_11, VAR_15, VAR_4);
 }

 return 0;
}
