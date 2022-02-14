
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phy_device {int speed; scalar_t__ duplex; scalar_t__ link; } ;
struct cpsw_slave {int mac_control; int mac_sl; struct phy_device* phy; int slave_num; } ;
struct cpsw_priv {scalar_t__ shp_cfg_speed; int dev; scalar_t__ tx_pause; scalar_t__ rx_pause; struct cpsw_common* cpsw; } ;
struct cpsw_common {int ale; } ;


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
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cpsw_priv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (struct phy_device*) ;
 int FUNC_8 (struct phy_device*) ;

__attribute__((used)) static void FUNC_9(struct cpsw_slave *VAR_10,
         struct cpsw_priv *VAR_11, bool *VAR_12)
{
 struct phy_device *VAR_13 = VAR_10->phy;
 u32 VAR_14 = 0;
 u32 VAR_15;
 struct cpsw_common *VAR_16 = VAR_11->cpsw;

 if (!VAR_13)
  return;

 VAR_15 = FUNC_1(VAR_10->slave_num);

 if (VAR_13->link) {
  VAR_14 = VAR_6;

  if (VAR_13->speed == 1000)
   VAR_14 |= VAR_5;
  if (VAR_13->duplex)
   VAR_14 |= VAR_4;


  if (VAR_13->speed == 100)
   VAR_14 |= VAR_7;

  else if ((VAR_13->speed == 10) && FUNC_7(VAR_13))
   VAR_14 |= VAR_3;

  if (VAR_11->rx_pause)
   VAR_14 |= VAR_8;

  if (VAR_11->tx_pause)
   VAR_14 |= VAR_9;

  if (VAR_14 != VAR_10->mac_control)
   FUNC_4(VAR_10->mac_sl, VAR_14);


  FUNC_0(VAR_16->ale, VAR_15,
         VAR_0, VAR_2);

  *VAR_12 = 1;

  if (VAR_11->shp_cfg_speed &&
      VAR_11->shp_cfg_speed != VAR_10->phy->speed &&
      !FUNC_2(VAR_11))
   FUNC_6(VAR_11->dev,
     "Speed was changed, CBS shaper speeds are changed!");
 } else {
  VAR_14 = 0;

  FUNC_0(VAR_16->ale, VAR_15,
         VAR_0, VAR_1);

  FUNC_5(VAR_10->mac_sl, 100);

  FUNC_3(VAR_10->mac_sl);
 }

 if (VAR_14 != VAR_10->mac_control)
  FUNC_8(VAR_13);

 VAR_10->mac_control = VAR_14;
}
