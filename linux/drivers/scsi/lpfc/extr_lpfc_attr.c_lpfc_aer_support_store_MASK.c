
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_hba {int hba_flag; int cfg_aer_support; int hbalock; int pcidev; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,char*,int*) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct Scsi_Host *VAR_7 = FUNC_0(VAR_3);
 struct lpfc_vport *VAR_8 = (struct lpfc_vport *)VAR_7->hostdata;
 struct lpfc_hba *VAR_9 = VAR_8->phba;
 int VAR_10 = 0, VAR_11 = -VAR_0;

 if (!FUNC_1(VAR_5[0]))
  return -VAR_0;
 if (FUNC_6(VAR_5, "%i", &VAR_10) != 1)
  return -VAR_0;

 switch (VAR_10) {
 case 0:
  if (VAR_9->hba_flag & VAR_2) {
   VAR_11 = FUNC_2(VAR_9->pcidev);
   if (!VAR_11) {
    FUNC_4(&VAR_9->hbalock);
    VAR_9->hba_flag &= ~VAR_2;
    FUNC_5(&VAR_9->hbalock);
    VAR_9->cfg_aer_support = 0;
    VAR_11 = FUNC_7(VAR_5);
   } else
    VAR_11 = -VAR_1;
  } else {
   VAR_9->cfg_aer_support = 0;
   VAR_11 = FUNC_7(VAR_5);
  }
  break;
 case 1:
  if (!(VAR_9->hba_flag & VAR_2)) {
   VAR_11 = FUNC_3(VAR_9->pcidev);
   if (!VAR_11) {
    FUNC_4(&VAR_9->hbalock);
    VAR_9->hba_flag |= VAR_2;
    FUNC_5(&VAR_9->hbalock);
    VAR_9->cfg_aer_support = 1;
    VAR_11 = FUNC_7(VAR_5);
   } else
     VAR_11 = -VAR_1;
  } else {
   VAR_9->cfg_aer_support = 1;
   VAR_11 = FUNC_7(VAR_5);
  }
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }
 return VAR_11;
}
