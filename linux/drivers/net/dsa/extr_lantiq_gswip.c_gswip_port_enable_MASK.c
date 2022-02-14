
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int addr; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct gswip_priv {int dummy; } ;
struct dsa_switch {struct gswip_priv* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 int VAR_10 ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct dsa_switch*,int) ;
 int FUNC_6 (struct dsa_switch*,int) ;
 int FUNC_7 (struct gswip_priv*,int,int) ;
 int FUNC_8 (struct gswip_priv*,int ,int ,int ) ;
 int FUNC_9 (struct gswip_priv*,int,int ) ;
 int FUNC_10 (struct gswip_priv*,int ,int,int ) ;
 int FUNC_11 (struct gswip_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct dsa_switch *VAR_11, int VAR_12,
        struct phy_device *VAR_13)
{
 struct gswip_priv *VAR_14 = VAR_11->priv;
 int VAR_15;

 if (!FUNC_6(VAR_11, VAR_12))
  return 0;

 if (!FUNC_5(VAR_11, VAR_12)) {
  VAR_15 = FUNC_7(VAR_14, VAR_12, 1);
  if (VAR_15)
   return VAR_15;
 }


 FUNC_11(VAR_14, VAR_0, FUNC_1(VAR_12));


 FUNC_10(VAR_14, 0, VAR_1 |
       VAR_2,
    FUNC_2(VAR_12));
 FUNC_10(VAR_14, 0, VAR_10,
     FUNC_4(VAR_12));

 if (!FUNC_5(VAR_11, VAR_12)) {
  u32 VAR_16 = VAR_8 |
         VAR_9 |
         VAR_7 |
         VAR_6 |
         VAR_5 |
         (VAR_13->mdio.addr & VAR_4);

  FUNC_9(VAR_14, VAR_16, FUNC_3(VAR_12));

  FUNC_8(VAR_14, 0, FUNC_0(VAR_12), VAR_3);
 }

 return 0;
}
