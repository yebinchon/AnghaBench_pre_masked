
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nfcmrvl_fw_dnld {int state; struct nfcmrvl_fw const* header; int timer; TYPE_2__* binary_config; TYPE_6__* fw; int name; } ;
struct nfcmrvl_private {scalar_t__ phy; struct nfcmrvl_fw_dnld fw_dnld; TYPE_5__* ndev; TYPE_3__* if_ops; int dev; int support_fw_dnld; } ;
struct TYPE_11__ {int config; } ;
struct TYPE_9__ {scalar_t__ offset; } ;
struct nfcmrvl_fw {scalar_t__ magic; scalar_t__ phy; TYPE_4__ bootrom; TYPE_2__ firmware; TYPE_2__ helper; } ;
struct nci_dev {TYPE_1__* nfc_dev; } ;
struct TYPE_13__ {scalar_t__ data; } ;
struct TYPE_12__ {int cmd_cnt; } ;
struct TYPE_10__ {int (* nci_update_config ) (struct nfcmrvl_private*,int *) ;} ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 struct nfcmrvl_private* FUNC_3 (struct nci_dev*) ;
 int FUNC_4 (int ,char*,char const*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct nfcmrvl_private*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__**,char const*,int *) ;
 int FUNC_9 (int ,char const*) ;
 int FUNC_10 (struct nfcmrvl_private*,int *) ;
 int FUNC_11 (int *,int ,int ) ;

int FUNC_12(struct nci_dev *VAR_8, const char *VAR_9)
{
 struct nfcmrvl_private *VAR_10 = FUNC_3(VAR_8);
 struct nfcmrvl_fw_dnld *VAR_11 = &VAR_10->fw_dnld;
 int VAR_12;

 if (!VAR_10->support_fw_dnld)
  return -VAR_2;

 if (!VAR_9 || !VAR_9[0])
  return -VAR_0;

 FUNC_9(VAR_11->name, VAR_9);







 VAR_12 = FUNC_8(&VAR_11->fw, VAR_9,
          &VAR_8->nfc_dev->dev);
 if (VAR_12 < 0) {
  FUNC_4(VAR_10->dev, "failed to retrieve FW %s", VAR_9);
  return -VAR_1;
 }

 VAR_11->header = (const struct nfcmrvl_fw *) VAR_10->fw_dnld.fw->data;

 if (VAR_11->header->magic != VAR_4 ||
     VAR_11->header->phy != VAR_10->phy) {
  FUNC_4(VAR_10->dev, "bad firmware binary %s magic=0x%x phy=%d",
   VAR_9, VAR_11->header->magic,
   VAR_11->header->phy);
  FUNC_7(VAR_11->fw);
  VAR_11->header = ((void*)0);
  return -VAR_0;
 }

 if (VAR_11->header->helper.offset != 0) {
  FUNC_5(VAR_10->dev, "loading helper");
  VAR_11->binary_config = &VAR_11->header->helper;
 } else {
  FUNC_5(VAR_10->dev, "loading firmware");
  VAR_11->binary_config = &VAR_11->header->firmware;
 }


 FUNC_11(&VAR_10->fw_dnld.timer, VAR_6, 0);
 FUNC_1(&VAR_10->fw_dnld.timer,
    VAR_7 + FUNC_2(VAR_3));


 VAR_10->if_ops->nci_update_config(VAR_10,
     &VAR_11->header->bootrom.config);


 FUNC_0(&VAR_10->ndev->cmd_cnt, 1);


 VAR_10->fw_dnld.state = VAR_5;
 FUNC_6(VAR_10);



 return 0;
}
