
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct stmmac_resources {int mac; } ;
struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct plat_stmmacenet_data {struct meson8b_dwmac* bsp_priv; } ;
struct meson8b_dwmac_data {int (* set_phy_mode ) (struct meson8b_dwmac*) ;} ;
struct meson8b_dwmac {int tx_delay_ns; struct meson8b_dwmac_data const* data; scalar_t__ phy_mode; TYPE_1__* dev; struct plat_stmmacenet_data* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int FUNC_1 (struct plat_stmmacenet_data*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct meson8b_dwmac* FUNC_3 (TYPE_1__*,int,int ) ;
 struct plat_stmmacenet_data* FUNC_4 (struct platform_device*,int) ;
 int FUNC_5 (struct meson8b_dwmac*) ;
 int FUNC_6 (struct meson8b_dwmac*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,char*,int*) ;
 int FUNC_10 (TYPE_1__*,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_11 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_12 (struct platform_device*,int *) ;
 int FUNC_13 (struct platform_device*,struct plat_stmmacenet_data*) ;
 int FUNC_14 (struct meson8b_dwmac*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_3)
{
 struct plat_stmmacenet_data *VAR_4;
 struct stmmac_resources VAR_5;
 struct meson8b_dwmac *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_11(VAR_3, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_4 = FUNC_12(VAR_3, &VAR_5.mac);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_3(&VAR_3->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_7 = -VAR_1;
  goto err_remove_config_dt;
 }

 VAR_6->data = (const struct meson8b_dwmac_data *)
  FUNC_7(&VAR_3->dev);
 if (!VAR_6->data) {
  VAR_7 = -VAR_0;
  goto err_remove_config_dt;
 }
 VAR_6->regs = FUNC_4(VAR_3, 1);
 if (FUNC_0(VAR_6->regs)) {
  VAR_7 = FUNC_1(VAR_6->regs);
  goto err_remove_config_dt;
 }

 VAR_6->dev = &VAR_3->dev;
 VAR_6->phy_mode = FUNC_8(VAR_3->dev.of_node);
 if ((int)VAR_6->phy_mode < 0) {
  FUNC_2(&VAR_3->dev, "missing phy-mode property\n");
  VAR_7 = -VAR_0;
  goto err_remove_config_dt;
 }


 if (FUNC_9(VAR_3->dev.of_node, "amlogic,tx-delay-ns",
     &VAR_6->tx_delay_ns))
  VAR_6->tx_delay_ns = 2;

 VAR_7 = FUNC_6(VAR_6);
 if (VAR_7)
  goto err_remove_config_dt;

 VAR_7 = VAR_6->data->set_phy_mode(VAR_6);
 if (VAR_7)
  goto err_remove_config_dt;

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7)
  goto err_remove_config_dt;

 VAR_4->bsp_priv = VAR_6;

 VAR_7 = FUNC_10(&VAR_3->dev, VAR_4, &VAR_5);
 if (VAR_7)
  goto err_remove_config_dt;

 return 0;

err_remove_config_dt:
 FUNC_13(VAR_3, VAR_4);

 return VAR_7;
}
