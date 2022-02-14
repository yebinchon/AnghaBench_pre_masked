
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ sli_rev; int cfg_poll; int hbalock; int HCregaddr; int fcp_poll_timer; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const) ;
 int FUNC_3 (struct lpfc_hba*) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*,int,int) ;
 scalar_t__ FUNC_5 (int ,int*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char const*,char*,int*) ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_8, struct device_attribute *VAR_9,
  const char *VAR_10, size_t VAR_11)
{
 struct Scsi_Host *VAR_12 = FUNC_0(VAR_8);
 struct lpfc_vport *VAR_13 = (struct lpfc_vport *) VAR_12->hostdata;
 struct lpfc_hba *VAR_14 = VAR_13->phba;
 uint32_t VAR_15;
 uint32_t VAR_16;
 int VAR_17=0;

 if (!FUNC_2(VAR_10[0]))
  return -VAR_1;

 if (FUNC_9(VAR_10, "%i", &VAR_17) != 1)
  return -VAR_1;

 if ((VAR_17 & 0x3) != VAR_17)
  return -VAR_1;

 if (VAR_14->sli_rev == VAR_7)
  VAR_17 = 0;

 FUNC_4(VAR_13, VAR_4, VAR_5,
  "3051 lpfc_poll changed from %d to %d\n",
  VAR_14->cfg_poll, VAR_17);

 FUNC_7(&VAR_14->hbalock);

 VAR_16 = VAR_14->cfg_poll;

 if (VAR_17 & VAR_2) {
  if ((VAR_17 & VAR_0) &&
      !(VAR_16 & VAR_0)) {
   if (FUNC_5(VAR_14->HCregaddr, &VAR_15)) {
    FUNC_8(&VAR_14->hbalock);
    return -VAR_1;
   }
   VAR_15 &= ~(VAR_3 << VAR_6);
   FUNC_11(VAR_15, VAR_14->HCregaddr);
   FUNC_6(VAR_14->HCregaddr);

   FUNC_3(VAR_14);
  }
 } else if (VAR_17 != 0x0) {
  FUNC_8(&VAR_14->hbalock);
  return -VAR_1;
 }

 if (!(VAR_17 & VAR_0) &&
     (VAR_16 & VAR_0))
 {
  FUNC_8(&VAR_14->hbalock);
  FUNC_1(&VAR_14->fcp_poll_timer);
  FUNC_7(&VAR_14->hbalock);
  if (FUNC_5(VAR_14->HCregaddr, &VAR_15)) {
   FUNC_8(&VAR_14->hbalock);
   return -VAR_1;
  }
  VAR_15 |= (VAR_3 << VAR_6);
  FUNC_11(VAR_15, VAR_14->HCregaddr);
  FUNC_6(VAR_14->HCregaddr);
 }

 VAR_14->cfg_poll = VAR_17;

 FUNC_8(&VAR_14->hbalock);

 return FUNC_10(VAR_10);
}
