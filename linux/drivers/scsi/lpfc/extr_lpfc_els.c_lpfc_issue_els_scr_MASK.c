
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_flag; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; } ;
struct TYPE_3__ {int elsXmitSCR; } ;
struct lpfc_hba {TYPE_1__ fc_stat; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_4__ {int Function; } ;
typedef TYPE_2__ SCR ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_nodelist* FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_5 (struct lpfc_vport*,int ) ;
 struct lpfc_nodelist* FUNC_6 (struct lpfc_vport*,int ) ;
 int FUNC_7 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_8 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 scalar_t__ FUNC_9 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_10 (int *,int ,int) ;

int
FUNC_11(struct lpfc_vport *VAR_8, uint32_t VAR_9, uint8_t VAR_10)
{
 struct lpfc_hba *VAR_11 = VAR_8->phba;
 struct lpfc_iocbq *VAR_12;
 uint8_t *VAR_13;
 uint16_t VAR_14;
 struct lpfc_nodelist *VAR_15;

 VAR_14 = (sizeof(uint32_t) + sizeof(SCR));

 VAR_15 = FUNC_5(VAR_8, VAR_9);
 if (!VAR_15) {
  VAR_15 = FUNC_6(VAR_8, VAR_9);
  if (!VAR_15)
   return 1;
  FUNC_4(VAR_8, VAR_15);
 } else if (!FUNC_0(VAR_15)) {
  VAR_15 = FUNC_3(VAR_8, VAR_15, VAR_5);
  if (!VAR_15)
   return 1;
 }

 VAR_12 = FUNC_8(VAR_8, 1, VAR_14, VAR_10, VAR_15,
         VAR_15->nlp_DID, VAR_0);

 if (!VAR_12) {



  FUNC_7(VAR_15);
  return 1;
 }

 VAR_13 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_12->context2)->virt);

 *((uint32_t *) (VAR_13)) = VAR_0;
 VAR_13 += sizeof(uint32_t);


 FUNC_10(VAR_13, 0, sizeof(SCR));
 ((SCR *) VAR_13)->Function = VAR_6;

 FUNC_1(VAR_8, VAR_3,
  "Issue SCR:       did:x%x",
  VAR_15->nlp_DID, 0, 0);

 VAR_11->fc_stat.elsXmitSCR++;
 VAR_12->iocb_cmpl = VAR_7;
 if (FUNC_9(VAR_11, VAR_4, VAR_12, 0) ==
     VAR_2) {




  FUNC_7(VAR_15);
  FUNC_2(VAR_11, VAR_12);
  return 1;
 }



 if (!(VAR_8->fc_flag & VAR_1))
  FUNC_7(VAR_15);
 return 0;
}
