
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int lsRjtRsnCodeExp; int lsRjtRsnCode; } ;
struct TYPE_6__ {int lsRjtError; TYPE_2__ b; } ;
struct ls_rjt {TYPE_3__ un; } ;
struct lpfc_vport {int nvmei_support; TYPE_1__* phba; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_rpi; } ;
struct lpfc_iocbq {scalar_t__ context2; } ;
struct lpfc_dmabuf {scalar_t__* virt; } ;
struct TYPE_4__ {scalar_t__ nvmet_support; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ,char*,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (struct ls_rjt*,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_3(struct lpfc_vport *VAR_6,
       struct lpfc_nodelist *VAR_7,
       struct lpfc_iocbq *VAR_8)
{
 struct ls_rjt VAR_9;
 uint32_t *VAR_10;
 uint32_t VAR_11;

 VAR_10 = ((struct lpfc_dmabuf *)VAR_8->context2)->virt;
 VAR_11 = *VAR_10;
 if (VAR_6->phba->nvmet_support) {

  if (VAR_11 == VAR_1)
   goto out;
 } else {

  if (!VAR_6->nvmei_support && (VAR_11 == VAR_0))
   goto out;
 }
 return 1;
out:
 FUNC_1(VAR_6, VAR_2, VAR_3,
    "6115 Rcv PRLI (%x) check failed: ndlp rpi %d "
    "state x%x flags x%x\n",
    VAR_11, VAR_7->nlp_rpi, VAR_7->nlp_state,
    VAR_7->nlp_flag);
 FUNC_2(&VAR_9, 0, sizeof(struct ls_rjt));
 VAR_9.un.b.lsRjtRsnCode = VAR_5;
 VAR_9.un.b.lsRjtRsnCodeExp = VAR_4;
 FUNC_0(VAR_6, VAR_9.un.lsRjtError, VAR_8,
       VAR_7, ((void*)0));
 return 0;
}
