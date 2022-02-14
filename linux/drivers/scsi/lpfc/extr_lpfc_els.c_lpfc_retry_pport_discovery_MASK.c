
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_nodelist {int nlp_last_elscmd; int nlp_flag; int nlp_delayfunc; } ;
struct lpfc_hba {TYPE_1__* pport; } ;
struct Scsi_Host {int host_lock; } ;
struct TYPE_3__ {int port_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct lpfc_hba*) ;
 struct lpfc_nodelist* FUNC_1 (TYPE_1__*,int ) ;
 struct Scsi_Host* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct lpfc_hba *VAR_5)
{
 struct lpfc_nodelist *VAR_6;
 struct Scsi_Host *VAR_7;


 FUNC_0(VAR_5);


 VAR_6 = FUNC_1(VAR_5->pport, VAR_1);
 if (!VAR_6)
  return;

 VAR_7 = FUNC_2(VAR_5->pport);
 FUNC_3(&VAR_6->nlp_delayfunc, VAR_4 + FUNC_4(1000));
 FUNC_5(VAR_7->host_lock);
 VAR_6->nlp_flag |= VAR_3;
 FUNC_6(VAR_7->host_lock);
 VAR_6->nlp_last_elscmd = VAR_0;
 VAR_5->pport->port_state = VAR_2;
 return;
}
