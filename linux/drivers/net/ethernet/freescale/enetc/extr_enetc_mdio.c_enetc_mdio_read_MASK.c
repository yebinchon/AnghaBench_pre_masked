
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {int dev; struct enetc_mdio_priv* priv; } ;
struct enetc_mdio_priv {struct enetc_hw* hw; } ;
struct enetc_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int *,char*,int,int,int) ;
 int FUNC_4 (struct enetc_hw*,int ) ;
 int FUNC_5 (struct enetc_hw*) ;
 int FUNC_6 (struct enetc_hw*,int ,int) ;

int FUNC_7(struct mii_bus *VAR_10, int VAR_11, int VAR_12)
{
 struct enetc_mdio_priv *VAR_13 = VAR_10->priv;
 struct enetc_hw *VAR_14 = VAR_13->hw;
 u32 VAR_15, VAR_16;
 u16 VAR_17, VAR_18;
 int VAR_19;

 VAR_16 = FUNC_0(VAR_0) | VAR_4;
 if (VAR_12 & VAR_9) {
  VAR_17 = (VAR_12 >> 16) & 0x1f;
  VAR_16 |= VAR_3;
 } else {
  VAR_17 = VAR_12 & 0x1f;
  VAR_16 &= ~VAR_3;
 }

 FUNC_6(VAR_14, VAR_2, VAR_16);

 VAR_19 = FUNC_5(VAR_14);
 if (VAR_19)
  return VAR_19;


 VAR_15 = FUNC_2(VAR_11) | FUNC_1(VAR_17);
 FUNC_6(VAR_14, VAR_6, VAR_15);


 if (VAR_12 & VAR_9) {
  FUNC_6(VAR_14, VAR_1, VAR_12 & 0xffff);

  VAR_19 = FUNC_5(VAR_14);
  if (VAR_19)
   return VAR_19;
 }


 FUNC_6(VAR_14, VAR_6, VAR_15 | VAR_7);

 VAR_19 = FUNC_5(VAR_14);
 if (VAR_19)
  return VAR_19;


 if (FUNC_4(VAR_14, VAR_2) & VAR_5) {
  FUNC_3(&VAR_10->dev,
   "Error while reading PHY%d reg at %d.%hhu\n",
   VAR_11, VAR_17, VAR_12);
  return 0xffff;
 }

 VAR_18 = FUNC_4(VAR_14, VAR_8) & 0xffff;

 return VAR_18;
}
