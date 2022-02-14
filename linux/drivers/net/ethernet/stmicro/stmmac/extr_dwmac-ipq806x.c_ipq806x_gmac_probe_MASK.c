
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_resources {int mac; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct plat_stmmacenet_data {int has_gmac; int fix_mac_speed; struct ipq806x_gmac* bsp_priv; } ;
struct ipq806x_gmac {int phy_mode; int id; int qsgmii_csr; int nss_common; struct platform_device* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct plat_stmmacenet_data*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int FUNC_6 (struct plat_stmmacenet_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_7 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_8 (struct device*,char*,...) ;
 struct ipq806x_gmac* FUNC_9 (struct device*,int,int ) ;
 int VAR_21 ;
 int FUNC_10 (struct ipq806x_gmac*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,int ,int*) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (struct device*,struct plat_stmmacenet_data*,struct stmmac_resources*) ;
 int FUNC_15 (struct platform_device*,struct stmmac_resources*) ;
 struct plat_stmmacenet_data* FUNC_16 (struct platform_device*,int *) ;
 int FUNC_17 (struct platform_device*,struct plat_stmmacenet_data*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_22)
{
 struct plat_stmmacenet_data *VAR_23;
 struct stmmac_resources VAR_24;
 struct device *VAR_25 = &VAR_22->dev;
 struct ipq806x_gmac *VAR_26;
 int VAR_27;
 int VAR_28;

 VAR_27 = FUNC_15(VAR_22, &VAR_24);
 if (VAR_27)
  return VAR_27;

 VAR_23 = FUNC_16(VAR_22, &VAR_24.mac);
 if (FUNC_0(VAR_23))
  return FUNC_6(VAR_23);

 VAR_26 = FUNC_9(VAR_25, sizeof(*VAR_26), VAR_2);
 if (!VAR_26) {
  VAR_28 = -VAR_1;
  goto err_remove_config_dt;
 }

 VAR_26->pdev = VAR_22;

 VAR_28 = FUNC_10(VAR_26);
 if (VAR_28) {
  FUNC_8(VAR_25, "device tree parsing error\n");
  goto err_remove_config_dt;
 }

 FUNC_13(VAR_26->qsgmii_csr, VAR_9,
       VAR_10);


 VAR_27 = 12 << VAR_7 |
       12 << VAR_6;

 VAR_27 |= VAR_5;
 switch (VAR_26->phy_mode) {
 case 129:
  VAR_27 |= VAR_8;
  break;
 case 128:
  VAR_27 &= ~VAR_8;
  break;
 default:
  FUNC_8(&VAR_22->dev, "Unsupported PHY mode: \"%s\"\n",
   FUNC_11(VAR_26->phy_mode));
  VAR_28 = -VAR_0;
  goto err_remove_config_dt;
 }
 FUNC_13(VAR_26->nss_common, FUNC_5(VAR_26->id), VAR_27);


 FUNC_12(VAR_26->nss_common, VAR_4, &VAR_27);
 VAR_27 &= ~(1 << FUNC_2(VAR_26->id));
 switch (VAR_26->phy_mode) {
 case 129:
  VAR_27 |= FUNC_3(VAR_26->id) <<
   FUNC_2(VAR_26->id);
  break;
 case 128:
  VAR_27 |= FUNC_4(VAR_26->id) <<
   FUNC_2(VAR_26->id);
  break;
 default:
  FUNC_8(&VAR_22->dev, "Unsupported PHY mode: \"%s\"\n",
   FUNC_11(VAR_26->phy_mode));
  VAR_28 = -VAR_0;
  goto err_remove_config_dt;
 }
 FUNC_13(VAR_26->nss_common, VAR_4, VAR_27);


 FUNC_12(VAR_26->nss_common, VAR_3, &VAR_27);
 VAR_27 |= FUNC_1(VAR_26->id);
 FUNC_13(VAR_26->nss_common, VAR_3, VAR_27);

 if (VAR_26->phy_mode == 128) {
  FUNC_13(VAR_26->qsgmii_csr, FUNC_7(VAR_26->id),
        VAR_11 |
        VAR_16 |
        VAR_18 |
        VAR_19 |
        VAR_14 |
        0x4ul << VAR_13 |
        0x3ul << VAR_15 |
        0x1ul << VAR_17 |
        0x2ul << VAR_12 |
        0xCul << VAR_20);
 }

 VAR_23->has_gmac = 1;
 VAR_23->bsp_priv = VAR_26;
 VAR_23->fix_mac_speed = VAR_21;

 VAR_28 = FUNC_14(&VAR_22->dev, VAR_23, &VAR_24);
 if (VAR_28)
  goto err_remove_config_dt;

 return 0;

err_remove_config_dt:
 FUNC_17(VAR_22, VAR_23);

 return VAR_28;
}
