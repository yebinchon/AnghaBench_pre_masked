
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {int host; struct pqi_scsi_dev* hostdata; } ;
struct pqi_scsi_dev {int device_offline; int lun; int target; int bus; } ;
struct pqi_ctrl_info {TYPE_1__* scsi_host; TYPE_2__* pci_dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int host_no; } ;


 int FUNC_0 (int *,char*,char*,int ,int ,int ,int ) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;
 struct pqi_ctrl_info* FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct scsi_device *VAR_0, char *VAR_1)
{
 struct pqi_ctrl_info *VAR_2;
 struct pqi_scsi_dev *VAR_3;

 VAR_3 = VAR_0->hostdata;
 if (VAR_3->device_offline)
  return;

 VAR_3->device_offline = 1;
 VAR_2 = FUNC_2(VAR_0->host);
 FUNC_1(VAR_2);
 FUNC_0(&VAR_2->pci_dev->dev, "re-scanning %s scsi %d:%d:%d:%d\n",
  VAR_1, VAR_2->scsi_host->host_no, VAR_3->bus,
  VAR_3->target, VAR_3->lun);
}
