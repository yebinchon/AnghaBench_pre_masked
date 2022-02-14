
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int clean_address_bit; } ;
struct serv_parm {TYPE_1__ cmn; int nodeName; int portName; } ;
struct lpfc_vport {scalar_t__ fc_prevDID; scalar_t__ fc_myDID; int vport_flag; int fc_flag; int fabric_nodename; int fabric_portname; struct lpfc_hba* phba; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {scalar_t__ cfg_delay_discovery; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct Scsi_Host* FUNC_0 (struct lpfc_vport*) ;
 scalar_t__ FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint8_t
FUNC_4(struct lpfc_vport *VAR_2,
  struct serv_parm *VAR_3)
{
 struct lpfc_hba *VAR_4 = VAR_2->phba;
 uint8_t VAR_5 = 0;
 struct Scsi_Host *VAR_6 = FUNC_0(VAR_2);

 if ((VAR_2->fc_prevDID != VAR_2->fc_myDID) ||
  FUNC_1(&VAR_2->fabric_portname, &VAR_3->portName,
   sizeof(struct lpfc_name)) ||
  FUNC_1(&VAR_2->fabric_nodename, &VAR_3->nodeName,
   sizeof(struct lpfc_name)) ||
  (VAR_2->vport_flag & VAR_0)) {
  VAR_5 = 1;
  VAR_2->vport_flag &= ~VAR_0;
 }
 if (VAR_5 && !VAR_3->cmn.clean_address_bit &&
     (VAR_2->fc_prevDID || VAR_4->cfg_delay_discovery)) {
  FUNC_2(VAR_6->host_lock);
  VAR_2->fc_flag |= VAR_1;
  FUNC_3(VAR_6->host_lock);
 }

 return VAR_5;
}
