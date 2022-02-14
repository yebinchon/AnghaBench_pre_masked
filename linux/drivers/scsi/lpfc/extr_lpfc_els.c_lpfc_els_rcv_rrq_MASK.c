
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nodelist {int dummy; } ;
struct lpfc_iocbq {int dummy; } ;
struct TYPE_2__ {scalar_t__ sli_rev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;

__attribute__((used)) static void
FUNC_2(struct lpfc_vport *VAR_2, struct lpfc_iocbq *VAR_3,
   struct lpfc_nodelist *VAR_4)
{
 FUNC_1(VAR_2, VAR_0, VAR_3, VAR_4, ((void*)0));
 if (VAR_2->phba->sli_rev == VAR_1)
  FUNC_0(VAR_2, VAR_3, VAR_4);
}
