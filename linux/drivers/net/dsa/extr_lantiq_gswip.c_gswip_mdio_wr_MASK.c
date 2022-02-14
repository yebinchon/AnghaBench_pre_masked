
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mii_bus {int dev; struct gswip_priv* priv; } ;
struct gswip_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct gswip_priv*) ;
 int FUNC_2 (struct gswip_priv*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct mii_bus *VAR_7, int VAR_8, int VAR_9, u16 VAR_10)
{
 struct gswip_priv *VAR_11 = VAR_7->priv;
 int VAR_12;

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12) {
  FUNC_0(&VAR_7->dev, "waiting for MDIO bus busy timed out\n");
  return VAR_12;
 }

 FUNC_2(VAR_11, VAR_10, VAR_6);
 FUNC_2(VAR_11, VAR_1 | VAR_5 |
  ((VAR_8 & VAR_2) << VAR_3) |
  (VAR_9 & VAR_4),
  VAR_0);

 return 0;
}
