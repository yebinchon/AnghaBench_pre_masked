
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ sli_rev; char* OptionROMVersion; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct lpfc_hba*,char*,int) ;
 int FUNC_2 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_3, struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_3);
 struct lpfc_vport *VAR_7 = (struct lpfc_vport *) VAR_6->hostdata;
 struct lpfc_hba *VAR_8 = VAR_7->phba;
 char VAR_9[VAR_0];

 if (VAR_8->sli_rev < VAR_1)
  return FUNC_2(VAR_5, VAR_2, "%s\n",
    VAR_8->OptionROMVersion);

 FUNC_1(VAR_8, VAR_9, 1);
 return FUNC_2(VAR_5, VAR_2, "%s\n", VAR_9);
}
