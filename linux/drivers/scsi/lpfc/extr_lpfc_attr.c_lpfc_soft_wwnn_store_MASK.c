
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int brd_no; TYPE_1__* pcidev; int cfg_soft_wwnn; int soft_wwn_enable; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int *,char*,int ) ;
 int FUNC_2 (char const*,unsigned int,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
       const char *VAR_5, size_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_3);
 struct lpfc_hba *VAR_8 = ((struct lpfc_vport *)VAR_7->hostdata)->phba;
 unsigned int VAR_9 = VAR_6;
 u8 VAR_10[VAR_2];
 int VAR_11;


 if (VAR_5[VAR_9-1] == '\n')
  VAR_9--;

 if (!VAR_8->soft_wwn_enable)
  return -VAR_0;

 VAR_11 = FUNC_2(VAR_5, VAR_9, VAR_10);
 if (VAR_11) {



  return VAR_11;
 }

 VAR_8->cfg_soft_wwnn = FUNC_3(VAR_10);

 FUNC_1(VAR_1, &VAR_8->pcidev->dev,
     "lpfc%d: soft_wwnn set. Value will take effect upon "
     "setting of the soft_wwpn\n", VAR_8->brd_no);

 return VAR_6;
}
