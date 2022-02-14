
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hpsa_scsi_dev_t {int volume_offline; int lun; int target; int bus; } ;
struct ctlr_info {TYPE_2__* scsi_host; TYPE_1__* pdev; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {int dev; } ;
 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ctlr_info *VAR_1,
 struct hpsa_scsi_dev_t *VAR_2)
{
 if (VAR_2->volume_offline == VAR_0)
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume status is not available through vital product data pages.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
 switch (VAR_2->volume_offline) {
 case 136:
  break;
 case 129:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is undergoing background erase process.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 137:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is waiting for transforming volume.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 128:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is undergoing rapid parity init.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 133:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is queued for rapid parity initialization process.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 138:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is encrypted and cannot be accessed because key is not present.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 132:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is not encrypted and cannot be accessed because controller is in encryption-only mode.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 131:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is undergoing encryption process.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 130:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is undergoing encryption re-keying process.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 139:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is encrypted and cannot be accessed because controller does not have encryption enabled.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 135:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is pending migration to encrypted state, but process has not started.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 case 134:
  FUNC_0(&VAR_1->pdev->dev,
   "C%d:B%d:T%d:L%d Volume is encrypted and is pending encryption rekeying.\n",
   VAR_1->scsi_host->host_no,
   VAR_2->bus, VAR_2->target, VAR_2->lun);
  break;
 }
}
