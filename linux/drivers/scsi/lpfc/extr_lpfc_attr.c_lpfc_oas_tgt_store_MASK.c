
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_2__ {int oas_next_lun; int oas_next_tgt_wwpn; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; int cfg_oas_flags; int cfg_oas_tgt_wwpn; int cfg_fof; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,unsigned int,int *) ;
 int FUNC_2 (int ,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_5, struct device_attribute *VAR_6,
     const char *VAR_7, size_t VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_0(VAR_5);
 struct lpfc_hba *VAR_10 = ((struct lpfc_vport *)VAR_9->hostdata)->phba;
 unsigned int VAR_11 = VAR_8;
 uint8_t VAR_12[VAR_4];
 int VAR_13;

 if (!VAR_10->cfg_fof)
  return -VAR_0;


 if (VAR_7[VAR_11-1] == '\n')
  VAR_11--;

 VAR_13 = FUNC_1(VAR_7, VAR_11, VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_2(VAR_10->cfg_oas_tgt_wwpn, VAR_12, (8 * sizeof(uint8_t)));
 FUNC_2(VAR_10->sli4_hba.oas_next_tgt_wwpn, VAR_12, (8 * sizeof(uint8_t)));
 if (FUNC_3(VAR_12) == 0)
  VAR_10->cfg_oas_flags |= VAR_2;
 else
  VAR_10->cfg_oas_flags &= ~VAR_2;
 VAR_10->cfg_oas_flags &= ~VAR_3;
 VAR_10->sli4_hba.oas_next_lun = VAR_1;
 return VAR_8;
}
