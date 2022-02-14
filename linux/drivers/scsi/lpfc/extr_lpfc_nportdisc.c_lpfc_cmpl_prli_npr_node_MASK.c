
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; } ;
struct TYPE_4__ {scalar_t__ ulpStatus; } ;
struct TYPE_3__ {struct lpfc_iocbq* rsp_iocb; } ;
struct lpfc_iocbq {TYPE_2__ iocb; TYPE_1__ context_un; } ;
typedef TYPE_2__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_vport *VAR_2, struct lpfc_nodelist *VAR_3,
   void *VAR_4, uint32_t VAR_5)
{
 struct lpfc_iocbq *VAR_6, *VAR_7;
 IOCB_t *VAR_8;

 VAR_6 = (struct lpfc_iocbq *) VAR_4;
 VAR_7 = VAR_6->context_un.rsp_iocb;

 VAR_8 = &VAR_7->iocb;
 if (VAR_8->ulpStatus && (VAR_3->nlp_flag & VAR_0)) {
  FUNC_0(VAR_2, VAR_3);
  return VAR_1;
 }
 return VAR_3->nlp_state;
}
