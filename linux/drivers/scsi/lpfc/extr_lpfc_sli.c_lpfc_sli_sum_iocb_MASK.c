
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_iocbq {int dummy; } ;
struct TYPE_2__ {int last_iotag; struct lpfc_iocbq** iocbq_lookup; } ;
struct lpfc_hba {int hbalock; TYPE_1__ sli; } ;
typedef int lpfc_ctx_cmd ;


 scalar_t__ FUNC_0 (struct lpfc_iocbq*,struct lpfc_vport*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct lpfc_vport *VAR_0, uint16_t VAR_1, uint64_t VAR_2,
    lpfc_ctx_cmd VAR_3)
{
 struct lpfc_hba *VAR_4 = VAR_0->phba;
 struct lpfc_iocbq *VAR_5;
 int VAR_6, VAR_7;

 FUNC_1(&VAR_4->hbalock);
 for (VAR_7 = 1, VAR_6 = 0; VAR_7 <= VAR_4->sli.last_iotag; VAR_7++) {
  VAR_5 = VAR_4->sli.iocbq_lookup[VAR_7];

  if (FUNC_0 (VAR_5, VAR_0, VAR_1, VAR_2,
      VAR_3) == 0)
   VAR_6++;
 }
 FUNC_2(&VAR_4->hbalock);

 return VAR_6;
}
