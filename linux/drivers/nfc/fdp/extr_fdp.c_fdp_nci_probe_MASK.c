
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nfc_phy_ops {int dummy; } ;
struct nci_dev {int dummy; } ;
struct fdp_nci_info {int clock_freq; struct nci_dev* ndev; int setup_wq; int * fw_vsc_cfg; int clock_type; struct nfc_phy_ops* phy_ops; struct fdp_i2c_phy* phy; } ;
struct fdp_i2c_phy {TYPE_1__* i2c_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct fdp_nci_info* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (int *) ;
 struct nci_dev* FUNC_2 (int *,int,int,int) ;
 int FUNC_3 (struct nci_dev*) ;
 int VAR_9 ;
 int FUNC_4 (struct nci_dev*) ;
 int FUNC_5 (struct nci_dev*,struct fdp_nci_info*) ;
 int FUNC_6 (struct device*,char*) ;

int FUNC_7(struct fdp_i2c_phy *VAR_10, struct nfc_phy_ops *VAR_11,
   struct nci_dev **VAR_12, int VAR_13,
   int VAR_14, u8 VAR_15, u32 VAR_16,
   u8 *VAR_17)
{
 struct device *VAR_18 = &VAR_10->i2c_dev->dev;
 struct fdp_nci_info *VAR_19;
 struct nci_dev *VAR_20;
 u32 VAR_21;
 int VAR_22;

 VAR_19 = FUNC_0(VAR_18, sizeof(struct fdp_nci_info), VAR_1);
 if (!VAR_19)
  return -VAR_0;

 VAR_19->phy = VAR_10;
 VAR_19->phy_ops = VAR_11;
 VAR_19->clock_type = VAR_15;
 VAR_19->clock_freq = VAR_16;
 VAR_19->fw_vsc_cfg = VAR_17;

 FUNC_1(&VAR_19->setup_wq);

 VAR_21 = VAR_6 |
      VAR_7 |
      VAR_2 |
      VAR_4 |
      VAR_3 |
      VAR_8 |
      VAR_5;

 VAR_20 = FUNC_2(&VAR_9, VAR_21, VAR_13,
       VAR_14);
 if (!VAR_20) {
  FUNC_6(VAR_18, "Cannot allocate nfc ndev\n");
  return -VAR_0;
 }

 VAR_22 = FUNC_4(VAR_20);
 if (VAR_22)
  goto err_regdev;

 *VAR_12 = VAR_20;
 VAR_19->ndev = VAR_20;

 FUNC_5(VAR_20, VAR_19);

 return 0;

err_regdev:
 FUNC_3(VAR_20);
 return VAR_22;
}
