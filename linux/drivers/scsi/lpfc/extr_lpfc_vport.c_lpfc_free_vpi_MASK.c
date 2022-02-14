
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vpi_used; } ;
struct TYPE_4__ {TYPE_1__ max_cfg_param; } ;
struct lpfc_hba {scalar_t__ sli_rev; int hbalock; TYPE_2__ sli4_hba; int vpi_bmask; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_1, int VAR_2)
{
 if (VAR_2 == 0)
  return;
 FUNC_1(&VAR_1->hbalock);
 FUNC_0(VAR_2, VAR_1->vpi_bmask);
 if (VAR_1->sli_rev == VAR_0)
  VAR_1->sli4_hba.max_cfg_param.vpi_used--;
 FUNC_2(&VAR_1->hbalock);
}
