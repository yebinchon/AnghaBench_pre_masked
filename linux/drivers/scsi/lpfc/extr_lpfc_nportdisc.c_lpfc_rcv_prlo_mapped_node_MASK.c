
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_state; int nlp_sid; } ;
struct lpfc_iocbq {int dummy; } ;
struct TYPE_2__ {int * sli3_ring; } ;
struct lpfc_hba {TYPE_1__ sli; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*,int ) ;
 int FUNC_1 (struct lpfc_vport*,int *,int ,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct lpfc_vport *VAR_3, struct lpfc_nodelist *VAR_4,
     void *VAR_5, uint32_t VAR_6)
{
 struct lpfc_hba *VAR_7 = VAR_3->phba;
 struct lpfc_iocbq *VAR_8 = (struct lpfc_iocbq *) VAR_5;


 FUNC_1(VAR_3, &VAR_7->sli.sli3_ring[VAR_2],
       VAR_4->nlp_sid, 0, VAR_1);


 FUNC_0(VAR_3, VAR_4, VAR_8, VAR_0);
 return VAR_4->nlp_state;
}
