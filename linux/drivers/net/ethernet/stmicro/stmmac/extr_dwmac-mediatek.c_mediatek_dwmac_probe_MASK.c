
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stmmac_resources {int mac; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct plat_stmmacenet_data {int has_gmac4; int riwt_off; int exit; int (* init ) (struct platform_device*,struct mediatek_dwmac_plat_data*) ;struct mediatek_dwmac_plat_data* bsp_priv; int maxmtu; scalar_t__ pmt; scalar_t__ has_gmac; int interface; } ;
struct mediatek_dwmac_plat_data {int phy_mode; int np; TYPE_1__* dev; int variant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct mediatek_dwmac_plat_data* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct mediatek_dwmac_plat_data*) ;
 int FUNC_5 (struct mediatek_dwmac_plat_data*) ;
 int VAR_4 ;
 int FUNC_6 (struct platform_device*,struct mediatek_dwmac_plat_data*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_9 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_10 (struct platform_device*,int *) ;
 int FUNC_11 (struct platform_device*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct mediatek_dwmac_plat_data *VAR_6;
 struct plat_stmmacenet_data *VAR_7;
 struct stmmac_resources VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(&VAR_5->dev, sizeof(*VAR_6), VAR_3);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->variant = FUNC_7(&VAR_5->dev);
 if (!VAR_6->variant) {
  FUNC_2(&VAR_5->dev, "Missing dwmac-mediatek variant\n");
  return -VAR_0;
 }

 VAR_6->dev = &VAR_5->dev;
 VAR_6->np = VAR_5->dev.of_node;

 VAR_9 = FUNC_5(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_9(VAR_5, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_7 = FUNC_10(VAR_5, &VAR_8.mac);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7->interface = VAR_6->phy_mode;
 VAR_7->has_gmac4 = 1;
 VAR_7->has_gmac = 0;
 VAR_7->pmt = 0;
 VAR_7->riwt_off = 1;
 VAR_7->maxmtu = VAR_2;
 VAR_7->bsp_priv = VAR_6;
 VAR_7->init = FUNC_6;
 VAR_7->exit = VAR_4;
 FUNC_6(VAR_5, VAR_6);

 VAR_9 = FUNC_8(&VAR_5->dev, VAR_7, &VAR_8);
 if (VAR_9) {
  FUNC_11(VAR_5, VAR_7);
  return VAR_9;
 }

 return 0;
}
