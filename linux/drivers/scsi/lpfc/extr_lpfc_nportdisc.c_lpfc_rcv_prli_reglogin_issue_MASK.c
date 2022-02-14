
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_6__ {int lsRjtError; TYPE_2__ b; } ;
struct ls_rjt {TYPE_3__ un; } ;
struct lpfc_vport {TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; } ;
struct lpfc_iocbq {int dummy; } ;
struct TYPE_4__ {scalar_t__ nvmet_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_1 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*) ;
 int FUNC_4 (struct ls_rjt*,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_5(struct lpfc_vport *VAR_3,
        struct lpfc_nodelist *VAR_4,
        void *VAR_5,
        uint32_t VAR_6)
{
 struct lpfc_iocbq *VAR_7 = (struct lpfc_iocbq *) VAR_5;
 struct ls_rjt VAR_8;

 if (!FUNC_3(VAR_3, VAR_4, VAR_7)) {
  return VAR_4->nlp_state;
 }
 if (VAR_3->phba->nvmet_support) {




  if (VAR_4->nlp_flag & VAR_2) {
   FUNC_2(VAR_3, VAR_4, VAR_7);
   FUNC_0(VAR_3, VAR_7, VAR_4);
  } else {




   FUNC_4(&VAR_8, 0, sizeof(struct ls_rjt));
   VAR_8.un.b.lsRjtRsnCode = VAR_1;
   VAR_8.un.b.lsRjtRsnCodeExp = VAR_0;
   FUNC_1(VAR_3, VAR_8.un.lsRjtError, VAR_7,
         VAR_4, ((void*)0));
   return VAR_4->nlp_state;
  }
 } else {

  FUNC_0(VAR_3, VAR_7, VAR_4);
 }
 return VAR_4->nlp_state;
}
