
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ cfg_oas_priority; scalar_t__ cfg_XLanePriority; int cfg_oas_lun_state; int cfg_oas_tgt_wwpn; int cfg_oas_vpt_wwpn; int cfg_fof; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const) ;
 size_t FUNC_2 (struct lpfc_hba*,int ,int ,int ,int ,scalar_t__) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,scalar_t__,scalar_t__,int ,scalar_t__,int ) ;
 int FUNC_4 (char const*,char*,int *) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_5, struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_5);
 struct lpfc_hba *VAR_10 = ((struct lpfc_vport *)VAR_9->hostdata)->phba;
 uint64_t VAR_11;
 uint32_t VAR_12;
 ssize_t VAR_13;

 if (!VAR_10->cfg_fof)
  return -VAR_2;

 if (FUNC_5(VAR_10->cfg_oas_vpt_wwpn) == 0)
  return -VAR_0;

 if (FUNC_5(VAR_10->cfg_oas_tgt_wwpn) == 0)
  return -VAR_0;

 if (!FUNC_1(VAR_7[0]))
  return -VAR_1;

 if (FUNC_4(VAR_7, "0x%llx", &VAR_11) != 1)
  return -VAR_1;

 VAR_12 = VAR_10->cfg_oas_priority;
 if (VAR_12 == 0)
  VAR_12 = VAR_10->cfg_XLanePriority;

 FUNC_3(VAR_10, VAR_3, VAR_4,
   "3372 Try to set vport 0x%llx target 0x%llx lun:0x%llx "
   "priority 0x%x with oas state %d\n",
   FUNC_5(VAR_10->cfg_oas_vpt_wwpn),
   FUNC_5(VAR_10->cfg_oas_tgt_wwpn), VAR_11,
   VAR_12, VAR_10->cfg_oas_lun_state);

 VAR_13 = FUNC_2(VAR_10, VAR_10->cfg_oas_vpt_wwpn,
           VAR_10->cfg_oas_tgt_wwpn, VAR_11,
           VAR_10->cfg_oas_lun_state, VAR_12);
 if (VAR_13)
  return VAR_13;

 return VAR_8;
}
