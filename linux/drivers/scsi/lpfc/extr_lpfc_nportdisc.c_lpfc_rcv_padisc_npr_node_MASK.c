
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_nodelist {int nlp_flag; int nlp_state; int nlp_DID; void* nlp_prev_state; } ;
struct lpfc_iocbq {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_1 (struct lpfc_vport*,int ,int ) ;
 int FUNC_2 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*) ;

__attribute__((used)) static uint32_t
FUNC_4(struct lpfc_vport *VAR_6, struct lpfc_nodelist *VAR_7,
    void *VAR_8, uint32_t VAR_9)
{
 struct lpfc_iocbq *VAR_10 = (struct lpfc_iocbq *) VAR_8;

 FUNC_3(VAR_6, VAR_7, VAR_10);





 if (!(VAR_7->nlp_flag & VAR_0) &&
     !(VAR_7->nlp_flag & VAR_1)) {
  if (VAR_7->nlp_flag & VAR_2) {
   VAR_7->nlp_flag &= ~VAR_2;
   VAR_7->nlp_prev_state = VAR_4;
   FUNC_2(VAR_6, VAR_7, VAR_3);
   FUNC_0(VAR_6, VAR_7, 0);
  } else {
   VAR_7->nlp_prev_state = VAR_4;
   FUNC_2(VAR_6, VAR_7, VAR_5);
   FUNC_1(VAR_6, VAR_7->nlp_DID, 0);
  }
 }
 return VAR_7->nlp_state;
}
