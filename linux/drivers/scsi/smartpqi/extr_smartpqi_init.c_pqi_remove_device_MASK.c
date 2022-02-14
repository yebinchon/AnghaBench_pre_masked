
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pqi_scsi_dev {int sdev; int scsi_cmds_outstanding; int lun; int target; int bus; } ;
struct pqi_ctrl_info {TYPE_2__* scsi_host; TYPE_1__* pci_dev; } ;
struct TYPE_4__ {int host_no; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,int ,int ,int ,int ) ;
 int FUNC_2 (struct pqi_scsi_dev*) ;
 int FUNC_3 (struct pqi_ctrl_info*,struct pqi_scsi_dev*,int ) ;
 scalar_t__ FUNC_4 (struct pqi_scsi_dev*) ;
 int FUNC_5 (struct pqi_scsi_dev*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(struct pqi_ctrl_info *VAR_1,
 struct pqi_scsi_dev *VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_2);

 VAR_3 = FUNC_3(VAR_1, VAR_2,
  VAR_0);
 if (VAR_3)
  FUNC_1(&VAR_1->pci_dev->dev,
   "scsi %d:%d:%d:%d removing device with %d outstanding commands\n",
   VAR_1->scsi_host->host_no, VAR_2->bus,
   VAR_2->target, VAR_2->lun,
   FUNC_0(&VAR_2->scsi_cmds_outstanding));

 if (FUNC_4(VAR_2))
  FUNC_6(VAR_2->sdev);
 else
  FUNC_5(VAR_2);
}
