
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct lpfc_hba* sli3_ring; } ;
struct TYPE_3__ {struct lpfc_hba* hdwq; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_2__ sli; int brd_no; TYPE_1__ sli4_hba; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct lpfc_hba*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct lpfc_hba *VAR_2)
{
 if (VAR_2->sli_rev == VAR_0)
  FUNC_1(VAR_2->sli4_hba.hdwq);


 FUNC_0(&VAR_1, VAR_2->brd_no);


 FUNC_1(VAR_2->sli.sli3_ring);
 VAR_2->sli.sli3_ring = ((void*)0);

 FUNC_1(VAR_2);
 return;
}
