
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_rpi; int nlp_DID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_vport*,int ,int ,char*,int ,int ,int ,int ,int) ;

__attribute__((used)) static uint32_t
FUNC_1(struct lpfc_vport *VAR_3, struct lpfc_nodelist *VAR_4,
    void *VAR_5, uint32_t VAR_6)
{





 if (!(VAR_4->nlp_flag & VAR_2)) {
  FUNC_0(VAR_3, VAR_0, VAR_1,
    "0272 Illegal State Transition: node x%x "
    "event x%x, state x%x Data: x%x x%x\n",
    VAR_4->nlp_DID, VAR_6, VAR_4->nlp_state, VAR_4->nlp_rpi,
    VAR_4->nlp_flag);
 }
 return VAR_4->nlp_state;
}
