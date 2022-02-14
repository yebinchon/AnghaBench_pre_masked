
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ cfg_XLanePriority; scalar_t__ cfg_oas_priority; int cfg_fof; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned long*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_2);
 struct lpfc_hba *VAR_7 = ((struct lpfc_vport *)VAR_6->hostdata)->phba;
 unsigned int VAR_8 = VAR_5;
 unsigned long VAR_9;
 int VAR_10;

 if (!VAR_7->cfg_fof)
  return -VAR_1;


 if (VAR_4[VAR_8-1] == '\n')
  VAR_8--;

 VAR_10 = FUNC_1(VAR_4, 0, &VAR_9);
 if (VAR_10 || (VAR_9 > 0x7f))
  return -VAR_0;

 if (VAR_9)
  VAR_7->cfg_oas_priority = (uint8_t)VAR_9;
 else
  VAR_7->cfg_oas_priority = VAR_7->cfg_XLanePriority;
 return VAR_5;
}
