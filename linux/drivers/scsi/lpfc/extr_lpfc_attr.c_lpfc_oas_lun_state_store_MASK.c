
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int cfg_oas_lun_state; int cfg_fof; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const*,char*,int*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_2, struct device_attribute *VAR_3,
    const char *VAR_4, size_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_2);
 struct lpfc_hba *VAR_7 = ((struct lpfc_vport *)VAR_6->hostdata)->phba;
 int VAR_8 = 0;

 if (!VAR_7->cfg_fof)
  return -VAR_1;

 if (!FUNC_1(VAR_4[0]))
  return -VAR_0;

 if (FUNC_2(VAR_4, "%i", &VAR_8) != 1)
  return -VAR_0;

 if ((VAR_8 != 0) && (VAR_8 != 1))
  return -VAR_0;

 VAR_7->cfg_oas_lun_state = VAR_8;
 return FUNC_3(VAR_4);
}
