
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_2__ {int sli_intf; } ;
struct lpfc_hba {int hba_flag; scalar_t__ cfg_link_speed; int lmt; scalar_t__ fc_topology; int pport; TYPE_1__ sli4_hba; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
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
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct Scsi_Host* FUNC_1 (struct device*) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_5 (struct lpfc_vport*,int ,int ,char*,scalar_t__,int,char*) ;
 int FUNC_6 (int ) ;
 int VAR_17 ;
 int FUNC_7 (char const*,char*,int*) ;
 size_t FUNC_8 (char const*) ;
 int FUNC_9 (char const*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_10(struct device *VAR_18, struct device_attribute *VAR_19,
  const char *VAR_20, size_t VAR_21)
{
 struct Scsi_Host *VAR_22 = FUNC_1(VAR_18);
 struct lpfc_vport *VAR_23 = (struct lpfc_vport *) VAR_22->hostdata;
 struct lpfc_hba *VAR_24 = VAR_23->phba;
 int VAR_25 = 128;
 int VAR_26 = 0;
 const char *VAR_27 = VAR_20;
 int VAR_28;
 uint32_t VAR_29, VAR_30;

 VAR_30 = FUNC_0(VAR_17, &VAR_24->sli4_hba.sli_intf);
 if (VAR_30 >= VAR_14 &&
     VAR_24->hba_flag & VAR_2)
  return -VAR_1;

 if (!FUNC_9(VAR_20, "nolip ", FUNC_8("nolip "))) {
  VAR_26 = 1;
  VAR_27 = &VAR_20[FUNC_8("nolip ")];
 }

 if (!FUNC_2(VAR_27[0]))
  return -VAR_0;
 if (FUNC_7(VAR_27, "%i", &VAR_25) != 1)
  return -VAR_0;

 FUNC_5(VAR_23, VAR_3, VAR_12,
  "3055 lpfc_link_speed changed from %d to %d %s\n",
  VAR_24->cfg_link_speed, VAR_25, VAR_26 ? "(nolip)" : "(lip)");

 if (((VAR_25 == 134) && !(VAR_24->lmt & VAR_6)) ||
     ((VAR_25 == 133) && !(VAR_24->lmt & VAR_7)) ||
     ((VAR_25 == 131) && !(VAR_24->lmt & VAR_9)) ||
     ((VAR_25 == 129) && !(VAR_24->lmt & VAR_11)) ||
     ((VAR_25 == VAR_16) && !(VAR_24->lmt & VAR_4)) ||
     ((VAR_25 == 135) && !(VAR_24->lmt & VAR_5)) ||
     ((VAR_25 == 132) && !(VAR_24->lmt & VAR_8)) ||
     ((VAR_25 == 130) && !(VAR_24->lmt & VAR_10))) {
  FUNC_4(VAR_24, VAR_3, VAR_12,
    "2879 lpfc_link_speed attribute cannot be set "
    "to %d. Speed is not supported by this port.\n",
    VAR_25);
  return -VAR_0;
 }
 if (VAR_25 >= 135 &&
     VAR_24->fc_topology == VAR_15) {
  FUNC_4(VAR_24, VAR_3, VAR_12,
    "3112 lpfc_link_speed attribute cannot be set "
    "to %d. Speed is not supported in loop mode.\n",
    VAR_25);
  return -VAR_0;
 }

 switch (VAR_25) {
 case 128:
 case 134:
 case 133:
 case 131:
 case 129:
 case 135:
 case 132:
 case 130:
  VAR_29 = VAR_24->cfg_link_speed;
  VAR_24->cfg_link_speed = VAR_25;
  if (VAR_26)
   return FUNC_8(VAR_20);

  VAR_28 = FUNC_3(FUNC_6(VAR_24->pport));
  if (VAR_28) {
   VAR_24->cfg_link_speed = VAR_29;
   return -VAR_0;
  }
  return FUNC_8(VAR_20);
 default:
  break;
 }

 FUNC_4(VAR_24, VAR_3, VAR_12,
   "0469 lpfc_link_speed attribute cannot be set to %d, "
   "allowed values are [%s]\n",
   VAR_25, VAR_13);
 return -VAR_0;

}
