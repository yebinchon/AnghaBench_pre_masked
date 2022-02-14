
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lpfc_hba {int lpfc_get_iocb_from_iocbq; int __lpfc_sli_release_iocbq; int __lpfc_sli_issue_iocb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;

int
FUNC_1(struct lpfc_hba *VAR_8, uint8_t VAR_9)
{

 switch (VAR_9) {
 case 129:
  VAR_8->__lpfc_sli_issue_iocb = VAR_3;
  VAR_8->__lpfc_sli_release_iocbq = VAR_5;
  break;
 case 128:
  VAR_8->__lpfc_sli_issue_iocb = VAR_4;
  VAR_8->__lpfc_sli_release_iocbq = VAR_6;
  break;
 default:
  FUNC_0(VAR_8, VAR_1, VAR_2,
    "1419 Invalid HBA PCI-device group: 0x%x\n",
    VAR_9);
  return -VAR_0;
  break;
 }
 VAR_8->lpfc_get_iocb_from_iocbq = VAR_7;
 return 0;
}
