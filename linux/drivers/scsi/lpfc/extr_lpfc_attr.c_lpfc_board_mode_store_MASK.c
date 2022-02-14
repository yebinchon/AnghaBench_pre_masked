
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_1__* pport; int cfg_enable_hba_reset; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct completion {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;
struct TYPE_2__ {int fc_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_vport*,int ,int ,char*,char const*,...) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,char*) ;
 int FUNC_6 (struct lpfc_hba*,int ) ;
 int FUNC_7 (struct lpfc_hba*,int*,struct completion*,int ) ;
 char* FUNC_8 (char const*,char) ;
 int FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char*,int) ;
 int FUNC_11 (struct completion*) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_14, struct device_attribute *VAR_15,
        const char *VAR_16, size_t VAR_17)
{
 struct Scsi_Host *VAR_18 = FUNC_0(VAR_14);
 struct lpfc_vport *VAR_19 = (struct lpfc_vport *) VAR_18->hostdata;
 struct lpfc_hba *VAR_20 = VAR_19->phba;
 struct completion VAR_21;
 char *VAR_22 = ((void*)0);
 int VAR_23 = 0;
 int VAR_24;

 if (!VAR_20->cfg_enable_hba_reset) {
  VAR_23 = -VAR_0;
  goto board_mode_out;
 }

 FUNC_3(VAR_19, VAR_4, VAR_5,
    "3050 lpfc_board_mode set to %s\n", VAR_16);

 FUNC_1(&VAR_21);

 if(FUNC_10(VAR_16, "online", sizeof("online") - 1) == 0) {
  VAR_24 = FUNC_7(VAR_20, &VAR_23, &VAR_21,
          VAR_9);
  if (VAR_24 == 0) {
   VAR_23 = -VAR_3;
   goto board_mode_out;
  }
  FUNC_11(&VAR_21);
  if (VAR_23)
   VAR_23 = -VAR_2;
 } else if (FUNC_10(VAR_16, "offline", sizeof("offline") - 1) == 0)
  VAR_23 = FUNC_2(VAR_20, VAR_8);
 else if (FUNC_10(VAR_16, "warm", sizeof("warm") - 1) == 0)
  if (VAR_20->sli_rev == VAR_13)
   VAR_23 = -VAR_1;
  else
   VAR_23 = FUNC_2(VAR_20, VAR_10);
 else if (FUNC_10(VAR_16, "error", sizeof("error") - 1) == 0)
  if (VAR_20->sli_rev == VAR_13)
   VAR_23 = -VAR_1;
  else
   VAR_23 = FUNC_2(VAR_20, VAR_7);
 else if (FUNC_10(VAR_16, "dump", sizeof("dump") - 1) == 0)
  VAR_23 = FUNC_6(VAR_20, VAR_11);
 else if (FUNC_10(VAR_16, "fw_reset", sizeof("fw_reset") - 1) == 0)
  VAR_23 = FUNC_6(VAR_20, VAR_12);
 else if (FUNC_10(VAR_16, "dv_reset", sizeof("dv_reset") - 1) == 0)
  VAR_23 = FUNC_6(VAR_20, VAR_6);
 else if (FUNC_10(VAR_16, "pci_bus_reset", sizeof("pci_bus_reset") - 1)
   == 0)
  VAR_23 = FUNC_4(VAR_20);
 else if (FUNC_10(VAR_16, "trunk", sizeof("trunk") - 1) == 0)
  VAR_23 = FUNC_5(VAR_20, (char *)VAR_16 + sizeof("trunk"));
 else
  VAR_23 = -VAR_1;

board_mode_out:
 if (!VAR_23)
  return FUNC_9(VAR_16);
 else {
  VAR_22 = FUNC_8(VAR_16, '\n');
  if (VAR_22)
   *VAR_22 = '\0';
  FUNC_3(VAR_19, VAR_4, VAR_5,
     "3097 Failed \"%s\", status(%d), "
     "fc_flag(x%x)\n",
     VAR_16, VAR_23, VAR_20->pport->fc_flag);
  return VAR_23;
 }
}
