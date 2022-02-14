
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {struct enetc_mdio_priv* priv; } ;
struct enetc_mdio_priv {struct enetc_hw* hw; } ;
struct enetc_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_3 ;
 int FUNC_7 (struct enetc_hw*) ;
 int FUNC_8 (struct enetc_hw*,int (*) (int),int) ;

int FUNC_9(struct mii_bus *VAR_4, int VAR_5, int VAR_6, u16 VAR_7)
{
 struct enetc_mdio_priv *VAR_8 = VAR_4->priv;
 struct enetc_hw *VAR_9 = VAR_8->hw;
 u32 VAR_10, VAR_11;
 u16 VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(VAR_0) | VAR_2;
 if (VAR_6 & VAR_3) {
  VAR_12 = (VAR_6 >> 16) & 0x1f;
  VAR_11 |= VAR_1;
 } else {

  VAR_12 = VAR_6 & 0x1f;
  VAR_11 &= ~VAR_1;
 }

 FUNC_8(VAR_9, FUNC_1, VAR_11);

 VAR_13 = FUNC_7(VAR_9);
 if (VAR_13)
  return VAR_13;


 VAR_10 = FUNC_5(VAR_5) | FUNC_4(VAR_12);
 FUNC_8(VAR_9, FUNC_3, VAR_10);


 if (VAR_6 & VAR_3) {
  FUNC_8(VAR_9, FUNC_0, VAR_6 & 0xffff);

  VAR_13 = FUNC_7(VAR_9);
  if (VAR_13)
   return VAR_13;
 }


 FUNC_8(VAR_9, FUNC_6, FUNC_6(VAR_7));

 VAR_13 = FUNC_7(VAR_9);
 if (VAR_13)
  return VAR_13;

 return 0;
}
