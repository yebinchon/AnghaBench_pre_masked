
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int reset_n_io; scalar_t__ hci_muxed; } ;
struct nfcmrvl_private {int phy; TYPE_1__ config; int ndev; struct device* dev; struct nfcmrvl_if_ops* if_ops; void* drv_data; } ;
struct nfcmrvl_platform_data {int dummy; } ;
struct nfcmrvl_if_ops {int dummy; } ;
struct device {int dummy; } ;
typedef enum nfcmrvl_phy { ____Placeholder_nfcmrvl_phy } nfcmrvl_phy ;


 int VAR_0 ;
 int VAR_1 ;
 struct nfcmrvl_private* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (struct nfcmrvl_private*) ;
 struct nfcmrvl_private* FUNC_5 (int,int ) ;
 int FUNC_6 (TYPE_1__*,struct nfcmrvl_platform_data*,int) ;
 int FUNC_7 (int *,int,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,struct nfcmrvl_private*) ;
 int FUNC_11 (struct device*,char*,...) ;
 int FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct nfcmrvl_private*) ;
 int FUNC_14 (struct nfcmrvl_private*) ;
 int FUNC_15 (struct nfcmrvl_private*) ;
 int VAR_14 ;

struct nfcmrvl_private *FUNC_16(enum nfcmrvl_phy VAR_15,
    void *VAR_16,
    struct nfcmrvl_if_ops *VAR_17,
    struct device *VAR_18,
    struct nfcmrvl_platform_data *VAR_19)
{
 struct nfcmrvl_private *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;
 u32 VAR_24;

 VAR_20 = FUNC_5(sizeof(*VAR_20), VAR_2);
 if (!VAR_20)
  return FUNC_0(-VAR_1);

 VAR_20->drv_data = VAR_16;
 VAR_20->if_ops = VAR_17;
 VAR_20->dev = VAR_18;
 VAR_20->phy = VAR_15;

 FUNC_6(&VAR_20->config, VAR_19, sizeof(*VAR_19));

 if (FUNC_2(VAR_20->config.reset_n_io)) {
  VAR_21 = FUNC_3(VAR_20->config.reset_n_io,
          VAR_3,
          "nfcmrvl_reset_n");
  if (VAR_21 < 0) {
   VAR_20->config.reset_n_io = -VAR_0;
   FUNC_11(VAR_18, "failed to request reset_n io\n");
  }
 }

 if (VAR_15 == VAR_6) {
  VAR_22 = VAR_4;
  VAR_23 = 1;
 } else
  VAR_22 = VAR_23 = 0;

 if (VAR_20->config.hci_muxed)
  VAR_22 += VAR_5;

 VAR_24 = VAR_11
  | VAR_12
  | VAR_7
  | VAR_9
  | VAR_8
  | VAR_10
  | VAR_13;

 VAR_20->ndev = FUNC_7(&VAR_14, VAR_24,
      VAR_22, VAR_23);
 if (!VAR_20->ndev) {
  FUNC_11(VAR_18, "nci_allocate_device failed\n");
  VAR_21 = -VAR_1;
  goto error_free_gpio;
 }

 VAR_21 = FUNC_15(VAR_20);
 if (VAR_21) {
  FUNC_11(VAR_18, "failed to initialize FW download %d\n", VAR_21);
  goto error_free_dev;
 }

 FUNC_10(VAR_20->ndev, VAR_20);

 VAR_21 = FUNC_9(VAR_20->ndev);
 if (VAR_21) {
  FUNC_11(VAR_18, "nci_register_device failed %d\n", VAR_21);
  goto error_fw_dnld_deinit;
 }


 FUNC_13(VAR_20);

 FUNC_12(VAR_18, "registered with nci successfully\n");
 return VAR_20;

error_fw_dnld_deinit:
 FUNC_14(VAR_20);
error_free_dev:
 FUNC_8(VAR_20->ndev);
error_free_gpio:
 if (FUNC_2(VAR_20->config.reset_n_io))
  FUNC_1(VAR_20->config.reset_n_io);
 FUNC_4(VAR_20);
 return FUNC_0(VAR_21);
}
