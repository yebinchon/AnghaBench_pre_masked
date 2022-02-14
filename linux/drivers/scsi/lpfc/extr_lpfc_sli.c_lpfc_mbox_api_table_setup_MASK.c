
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lpfc_hba {int lpfc_sli_brdready; int lpfc_sli_brdrestart; int lpfc_sli_hbq_to_firmware; int lpfc_sli_handle_slow_ring_event; int lpfc_sli_issue_mbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
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

int
FUNC_1(struct lpfc_hba *VAR_13, uint8_t VAR_14)
{

 switch (VAR_14) {
 case 129:
  VAR_13->lpfc_sli_issue_mbox = VAR_11;
  VAR_13->lpfc_sli_handle_slow_ring_event =
    VAR_7;
  VAR_13->lpfc_sli_hbq_to_firmware = VAR_9;
  VAR_13->lpfc_sli_brdrestart = VAR_5;
  VAR_13->lpfc_sli_brdready = VAR_3;
  break;
 case 128:
  VAR_13->lpfc_sli_issue_mbox = VAR_12;
  VAR_13->lpfc_sli_handle_slow_ring_event =
    VAR_8;
  VAR_13->lpfc_sli_hbq_to_firmware = VAR_10;
  VAR_13->lpfc_sli_brdrestart = VAR_6;
  VAR_13->lpfc_sli_brdready = VAR_4;
  break;
 default:
  FUNC_0(VAR_13, VAR_1, VAR_2,
    "1420 Invalid HBA PCI-device group: 0x%x\n",
    VAR_14);
  return -VAR_0;
  break;
 }
 return 0;
}
