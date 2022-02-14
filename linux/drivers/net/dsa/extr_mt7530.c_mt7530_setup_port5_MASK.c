
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7530_priv {int p5_intf_sel; int reg_mutex; scalar_t__ p5_interface; int ds; } ;
struct dsa_switch {int dev; struct mt7530_priv* priv; } ;
typedef scalar_t__ phy_interface_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;




 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ,char*,int,int ,int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct mt7530_priv*,int ) ;
 int FUNC_8 (struct mt7530_priv*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct dsa_switch *VAR_13, phy_interface_t VAR_14)
{
 struct mt7530_priv *VAR_15 = VAR_13->priv;
 u8 VAR_16 = 0;
 int VAR_17;

 FUNC_9(&VAR_15->reg_mutex);

 VAR_17 = FUNC_7(VAR_15, VAR_7);

 VAR_17 |= VAR_1 | VAR_3 | VAR_2;
 VAR_17 &= ~VAR_4 & ~VAR_5;

 switch (VAR_15->p5_intf_sel) {
 case 129:

  VAR_17 |= VAR_5;

 case 128:

  VAR_17 &= ~VAR_3 & ~VAR_2;


  FUNC_8(VAR_15, FUNC_1(5), 0x56300);
  break;
 case 130:

  VAR_17 &= ~VAR_2;
  break;
 case 131:
  VAR_14 = VAR_10;
  break;
 default:
  FUNC_5(VAR_13->dev, "Unsupported p5_intf_sel %d\n",
   VAR_15->p5_intf_sel);
  goto unlock_exit;
 }


 if (FUNC_12(VAR_14)) {
  VAR_17 |= VAR_4;


  FUNC_8(VAR_15, VAR_8, VAR_0);


  if (!FUNC_6(VAR_15->ds, 5) &&
      (VAR_14 == VAR_12 ||
       VAR_14 == VAR_11))
   VAR_16 = 4;


  FUNC_8(VAR_15, VAR_9,
        FUNC_0(0x10 + VAR_16));


  FUNC_8(VAR_15, VAR_6,
        FUNC_2(1) | FUNC_3(1));
 }

 FUNC_8(VAR_15, VAR_7, VAR_17);

 FUNC_4(VAR_13->dev, "Setup P5, HWTRAP=0x%x, intf_sel=%s, phy-mode=%s\n",
  VAR_17, FUNC_11(VAR_15->p5_intf_sel), FUNC_13(VAR_14));

 VAR_15->p5_interface = VAR_14;

unlock_exit:
 FUNC_10(&VAR_15->reg_mutex);
}
