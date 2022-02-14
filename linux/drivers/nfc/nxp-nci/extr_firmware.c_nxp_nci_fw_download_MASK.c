
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nxp_nci_fw_info {int work; scalar_t__ cmd_result; scalar_t__ frame_size; scalar_t__ written; TYPE_4__* fw; int size; int data; int name; } ;
struct nxp_nci_info {int info_lock; int mode; int phy_id; TYPE_3__* phy_ops; struct nxp_nci_fw_info fw_info; } ;
struct nci_dev {TYPE_2__* nfc_dev; } ;
struct TYPE_9__ {int size; int data; } ;
struct TYPE_8__ {int (* set_mode ) (int ,int ) ;int write; } ;
struct TYPE_6__ {int parent; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nxp_nci_info* FUNC_2 (struct nci_dev*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__**,char const*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct nci_dev *VAR_3, const char *VAR_4)
{
 struct nxp_nci_info *VAR_5 = FUNC_2(VAR_3);
 struct nxp_nci_fw_info *VAR_6 = &VAR_5->fw_info;
 int VAR_7;

 FUNC_0(&VAR_5->info_lock);

 if (!VAR_5->phy_ops->set_mode || !VAR_5->phy_ops->write) {
  VAR_7 = -VAR_1;
  goto fw_download_exit;
 }

 if (!VAR_4 || VAR_4[0] == '\0') {
  VAR_7 = -VAR_0;
  goto fw_download_exit;
 }

 FUNC_6(VAR_6->name, VAR_4);

 VAR_7 = FUNC_4(&VAR_6->fw, VAR_4,
        VAR_3->nfc_dev->dev.parent);
 if (VAR_7 < 0)
  goto fw_download_exit;

 VAR_7 = VAR_5->phy_ops->set_mode(VAR_5->phy_id, VAR_2);
 if (VAR_7 < 0) {
  FUNC_3(VAR_6->fw);
  goto fw_download_exit;
 }

 VAR_5->mode = VAR_2;

 VAR_6->data = VAR_6->fw->data;
 VAR_6->size = VAR_6->fw->size;
 VAR_6->written = 0;
 VAR_6->frame_size = 0;
 VAR_6->cmd_result = 0;

 FUNC_5(&VAR_6->work);

fw_download_exit:
 FUNC_1(&VAR_5->info_lock);
 return VAR_7;
}
