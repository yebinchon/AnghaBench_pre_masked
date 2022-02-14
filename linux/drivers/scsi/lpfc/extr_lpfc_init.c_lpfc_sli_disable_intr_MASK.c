
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sli_intr; } ;
struct TYPE_4__ {TYPE_1__ slistat; } ;
struct lpfc_hba {scalar_t__ intr_type; TYPE_2__ sli; int pcidev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct lpfc_hba*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct lpfc_hba *VAR_3)
{
 int VAR_4, VAR_5;

 if (VAR_3->intr_type == VAR_1)
  VAR_4 = VAR_0;
 else
  VAR_4 = 1;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_0(FUNC_2(VAR_3->pcidev, VAR_5), VAR_3);
 FUNC_1(VAR_3->pcidev);


 VAR_3->intr_type = VAR_2;
 VAR_3->sli.slistat.sli_intr = 0;
}
