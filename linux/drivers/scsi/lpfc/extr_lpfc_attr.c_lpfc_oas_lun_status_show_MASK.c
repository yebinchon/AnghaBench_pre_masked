
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int cfg_oas_flags; int cfg_oas_lun_status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_3, struct device_attribute *VAR_4,
    char *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_3);
 struct lpfc_hba *VAR_7 = ((struct lpfc_vport *)VAR_6->hostdata)->phba;

 if (!(VAR_7->cfg_oas_flags & VAR_1))
  return -VAR_0;

 return FUNC_1(VAR_5, VAR_2, "%d\n", VAR_7->cfg_oas_lun_status);
}
