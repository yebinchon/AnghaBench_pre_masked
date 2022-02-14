
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_flag; int nlp_rpi; int nlp_DID; } ;
struct lpfc_hba {TYPE_1__* pport; } ;
struct TYPE_7__ {int * varWords; } ;
struct TYPE_8__ {TYPE_2__ un; int mbxStatus; } ;
struct TYPE_9__ {TYPE_3__ mb; } ;
struct TYPE_10__ {TYPE_4__ u; } ;
struct TYPE_6__ {int load_flag; } ;
typedef TYPE_5__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*,int ,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_vport*,struct lpfc_nodelist*,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(struct lpfc_vport *VAR_4, struct lpfc_nodelist *VAR_5,
    void *VAR_6, uint32_t VAR_7)
{
 struct lpfc_hba *VAR_8;
 LPFC_MBOXQ_t *VAR_9 = (LPFC_MBOXQ_t *) VAR_6;
 uint16_t VAR_10;

 VAR_8 = VAR_4->phba;

 if (!(VAR_8->pport->load_flag & VAR_0) &&
  (VAR_7 == VAR_3) &&
  (!VAR_9->u.mb.mbxStatus)) {
  VAR_10 = VAR_9->u.mb.un.varWords[0];
  FUNC_1(VAR_8, VAR_4, VAR_5, VAR_10);
 }
 FUNC_0(VAR_4, VAR_1, VAR_2,
    "0271 Illegal State Transition: node x%x "
    "event x%x, state x%x Data: x%x x%x\n",
    VAR_5->nlp_DID, VAR_7, VAR_5->nlp_state, VAR_5->nlp_rpi,
    VAR_5->nlp_flag);
 return VAR_5->nlp_state;
}
