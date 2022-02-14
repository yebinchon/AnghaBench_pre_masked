
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_3__ {scalar_t__ lnk_dv; scalar_t__ lnk_tp; } ;
struct TYPE_4__ {TYPE_1__ lnk_info; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_2__ sli4_hba; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*) ;

__attribute__((used)) static ssize_t
FUNC_2(struct device *VAR_5, struct device_attribute *VAR_6,
   char *VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_0(VAR_5);
 struct lpfc_vport *VAR_9 = (struct lpfc_vport *) VAR_8->hostdata;
 struct lpfc_hba *VAR_10 = VAR_9->phba;

 if (VAR_10->sli_rev < VAR_3)
  return FUNC_1(VAR_7, VAR_4, "fc\n");

 if (VAR_10->sli4_hba.lnk_info.lnk_dv == VAR_0) {
  if (VAR_10->sli4_hba.lnk_info.lnk_tp == VAR_2)
   return FUNC_1(VAR_7, VAR_4, "fcoe\n");
  if (VAR_10->sli4_hba.lnk_info.lnk_tp == VAR_1)
   return FUNC_1(VAR_7, VAR_4, "fc\n");
 }
 return FUNC_1(VAR_7, VAR_4, "unknown\n");
}
