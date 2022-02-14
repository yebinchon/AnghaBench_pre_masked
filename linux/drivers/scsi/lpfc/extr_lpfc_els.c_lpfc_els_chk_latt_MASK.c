
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {scalar_t__ port_state; int fc_flag; struct lpfc_hba* phba; } ;
struct lpfc_hba {scalar_t__ link_state; scalar_t__ sli_rev; TYPE_1__* pport; int HAregaddr; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_2__ {int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct lpfc_hba*,struct lpfc_vport*) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 struct Scsi_Host* FUNC_3 (struct lpfc_vport*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

int
FUNC_6(struct lpfc_vport *VAR_8)
{
 struct Scsi_Host *VAR_9 = FUNC_3(VAR_8);
 struct lpfc_hba *VAR_10 = VAR_8->phba;
 uint32_t VAR_11;

 if (VAR_8->port_state >= VAR_7 ||
     VAR_10->link_state == VAR_5 ||
     VAR_10->sli_rev > VAR_6)
  return 0;


 if (FUNC_2(VAR_10->HAregaddr, &VAR_11))
  return 1;

 if (!(VAR_11 & VAR_1))
  return 0;


 FUNC_1(VAR_8, VAR_2, VAR_3,
    "0237 Pending Link Event during "
    "Discovery: State x%x\n",
    VAR_10->pport->port_state);







 FUNC_4(VAR_9->host_lock);
 VAR_8->fc_flag |= VAR_0;
 FUNC_5(VAR_9->host_lock);

 if (VAR_10->link_state != VAR_4)
  FUNC_0(VAR_10, VAR_8);

 return 1;
}
