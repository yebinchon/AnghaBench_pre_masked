
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {TYPE_1__* pport; int HAregaddr; int HCregaddr; } ;
struct TYPE_2__ {scalar_t__ work_port_events; } ;


 int FUNC_0 (struct lpfc_hba*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_0)
{

 FUNC_2(0, VAR_0->HCregaddr);
 FUNC_1(VAR_0->HCregaddr);

 FUNC_2(0xffffffff, VAR_0->HAregaddr);
 FUNC_1(VAR_0->HAregaddr);


 FUNC_0(VAR_0);
 VAR_0->pport->work_port_events = 0;
}
