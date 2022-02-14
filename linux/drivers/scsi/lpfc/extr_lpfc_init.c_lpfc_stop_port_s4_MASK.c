
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ intr_enable; } ;
struct lpfc_hba {TYPE_2__ sli4_hba; TYPE_1__* pport; } ;
struct TYPE_3__ {scalar_t__ work_port_events; } ;


 int FUNC_0 (struct lpfc_hba*) ;

__attribute__((used)) static void
FUNC_1(struct lpfc_hba *VAR_0)
{

 FUNC_0(VAR_0);
 if (VAR_0->pport)
  VAR_0->pport->work_port_events = 0;
 VAR_0->sli4_hba.intr_enable = 0;
}
