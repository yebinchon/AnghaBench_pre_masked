
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int cfg_topology; scalar_t__ cfg_link_speed; scalar_t__ sli_rev; int fc_topology_changed; int brd_no; int pport; TYPE_1__* pcidev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {scalar_t__ device; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,int ,int) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char const*,char*,int*) ;
 size_t FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_9(struct device *VAR_7, struct device_attribute *VAR_8,
   const char *VAR_9, size_t VAR_10)
{
 struct Scsi_Host *VAR_11 = FUNC_0(VAR_7);
 struct lpfc_vport *VAR_12 = (struct lpfc_vport *) VAR_11->hostdata;
 struct lpfc_hba *VAR_13 = VAR_12->phba;
 int VAR_14 = 0;
 int VAR_15 = 0;
 const char *VAR_16 = VAR_9;
 int VAR_17;
 uint32_t VAR_18;

 if (!FUNC_8(VAR_9, "nolip ", FUNC_7("nolip "))) {
  VAR_15 = 1;
  VAR_16 = &VAR_9[FUNC_7("nolip ")];
 }

 if (!FUNC_1(VAR_16[0]))
  return -VAR_0;
 if (FUNC_6(VAR_16, "%i", &VAR_14) != 1)
  return -VAR_0;

 if (VAR_14 >= 0 && VAR_14 <= 6) {
  VAR_18 = VAR_13->cfg_topology;
  if (VAR_13->cfg_link_speed == VAR_4 &&
   VAR_14 == 4) {
   FUNC_4(VAR_12, VAR_1, VAR_2,
    "3113 Loop mode not supported at speed %d\n",
    VAR_14);
   return -VAR_0;
  }
  if ((VAR_13->pcidev->device == VAR_5 ||
       VAR_13->pcidev->device == VAR_6) &&
      VAR_14 == 4) {
   FUNC_4(VAR_12, VAR_1, VAR_2,
    "3114 Loop mode not supported\n");
   return -VAR_0;
  }
  VAR_13->cfg_topology = VAR_14;
  if (VAR_15)
   return FUNC_7(VAR_9);

  FUNC_4(VAR_12, VAR_1, VAR_2,
   "3054 lpfc_topology changed from %d to %d\n",
   VAR_18, VAR_14);
  if (VAR_18 != VAR_14 && VAR_13->sli_rev == VAR_3)
   VAR_13->fc_topology_changed = 1;
  VAR_17 = FUNC_2(FUNC_5(VAR_13->pport));
  if (VAR_17) {
   VAR_13->cfg_topology = VAR_18;
   return -VAR_0;
  } else
   return FUNC_7(VAR_9);
 }
 FUNC_3(VAR_13, VAR_1, VAR_2,
  "%d:0467 lpfc_topology attribute cannot be set to %d, "
  "allowed range is [0, 6]\n",
  VAR_13->brd_no, VAR_14);
 return -VAR_0;
}
