
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_priv_data {int regmap_field; } ;
struct stmmac_priv {int device; TYPE_1__* plat; } ;
struct TYPE_2__ {struct sunxi_priv_data* bsp_priv; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct stmmac_priv*) ;
 int FUNC_5 (struct stmmac_priv*) ;
 int FUNC_6 (struct sunxi_priv_data*) ;

__attribute__((used)) static int FUNC_7(int VAR_4, int VAR_5,
         void *VAR_6)
{
 struct stmmac_priv *VAR_7 = VAR_6;
 struct sunxi_priv_data *VAR_8 = VAR_7->plat->bsp_priv;
 u32 VAR_9, VAR_10;
 int VAR_11 = 0;
 bool VAR_12 = 0;

 if (VAR_4 ^ VAR_5) {
  FUNC_2(VAR_8->regmap_field, &VAR_9);
  switch (VAR_5) {
  case 128:
   FUNC_1(VAR_7->device, "Switch mux to internal PHY");
   VAR_10 = (VAR_9 & ~VAR_1) | VAR_2;

   VAR_12 = 1;
   break;
  case 129:
   FUNC_1(VAR_7->device, "Switch mux to external PHY");
   VAR_10 = (VAR_9 & ~VAR_1) | VAR_3;
   VAR_12 = 0;
   break;
  default:
   FUNC_0(VAR_7->device, "Invalid child ID %x\n",
    VAR_5);
   return -VAR_0;
  }
  FUNC_3(VAR_8->regmap_field, VAR_10);
  if (VAR_12) {
   VAR_11 = FUNC_4(VAR_7);
   if (VAR_11)
    return VAR_11;
  } else {
   FUNC_6(VAR_8);
  }



  VAR_11 = FUNC_5(VAR_7);
 }
 return VAR_11;
}
