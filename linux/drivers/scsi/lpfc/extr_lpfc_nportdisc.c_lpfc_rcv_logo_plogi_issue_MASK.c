
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {TYPE_2__* phba; } ;
struct lpfc_nodelist {int nlp_state; int nlp_rpi; } ;
struct TYPE_3__ {int ulpIoTag; } ;
struct lpfc_iocbq {TYPE_1__ iocb; } ;
struct TYPE_4__ {scalar_t__ sli_rev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct lpfc_vport *VAR_2, struct lpfc_nodelist *VAR_3,
     void *VAR_4, uint32_t VAR_5)
{
 struct lpfc_iocbq *VAR_6 = (struct lpfc_iocbq *) VAR_4;


 if (VAR_2->phba->sli_rev == VAR_1)
  VAR_3->nlp_rpi = VAR_6->iocb.ulpIoTag;

 FUNC_0(VAR_2->phba, VAR_3);

 FUNC_1(VAR_2, VAR_3, VAR_6, VAR_0);
 return VAR_3->nlp_state;
}
