
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int cfg_oas_flags; int cfg_oas_priority; int cfg_oas_lun_status; int cfg_oas_tgt_wwpn; int cfg_oas_vpt_wwpn; int cfg_fof; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct lpfc_hba*,int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (char*,scalar_t__,char*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_7, struct device_attribute *VAR_8,
    char *VAR_9)
{
 struct Scsi_Host *VAR_10 = FUNC_0(VAR_7);
 struct lpfc_hba *VAR_11 = ((struct lpfc_vport *)VAR_10->hostdata)->phba;

 uint64_t VAR_12;
 int VAR_13 = 0;

 if (!VAR_11->cfg_fof)
  return -VAR_1;

 if (FUNC_3(VAR_11->cfg_oas_vpt_wwpn) == 0)
  if (!(VAR_11->cfg_oas_flags & VAR_4))
   return -VAR_0;

 if (FUNC_3(VAR_11->cfg_oas_tgt_wwpn) == 0)
  if (!(VAR_11->cfg_oas_flags & VAR_3))
   return -VAR_0;

 VAR_12 = FUNC_1(VAR_11, VAR_11->cfg_oas_vpt_wwpn,
     VAR_11->cfg_oas_tgt_wwpn,
     &VAR_11->cfg_oas_lun_status,
     &VAR_11->cfg_oas_priority);
 if (VAR_12 != VAR_2)
  VAR_11->cfg_oas_flags |= VAR_5;

 VAR_13 += FUNC_2(VAR_9 + VAR_13, VAR_6-VAR_13, "0x%llx", VAR_12);

 return VAR_13;
}
