
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct lpfc_vport {int fc_nodename; int fc_portname; int fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_DID; int nlp_nodename; int nlp_portname; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; } ;
struct TYPE_4__ {int elsXmitFARPR; } ;
struct lpfc_hba {TYPE_1__ fc_stat; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_5__ {int Mflags; int OnodeName; int OportName; int RnodeName; int RportName; scalar_t__ Rflags; } ;
typedef TYPE_2__ FARP ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_7 ;
 void* FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,int ,int ,int ) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_nodelist* FUNC_4 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_6 (struct lpfc_vport*,int ) ;
 struct lpfc_nodelist* FUNC_7 (struct lpfc_vport*,int ) ;
 int FUNC_8 (struct lpfc_nodelist*) ;
 struct lpfc_iocbq* FUNC_9 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int ,int ) ;
 scalar_t__ FUNC_10 (struct lpfc_hba*,int ,struct lpfc_iocbq*,int ) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int
FUNC_13(struct lpfc_vport *VAR_9, uint32_t VAR_10, uint8_t VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_9->phba;
 struct lpfc_iocbq *VAR_13;
 FARP *VAR_14;
 uint8_t *VAR_15;
 uint32_t *VAR_16;
 uint16_t VAR_17;
 struct lpfc_nodelist *VAR_18;
 struct lpfc_nodelist *VAR_19;

 VAR_17 = (sizeof(uint32_t) + sizeof(FARP));

 VAR_19 = FUNC_6(VAR_9, VAR_10);
 if (!VAR_19) {
  VAR_19 = FUNC_7(VAR_9, VAR_10);
  if (!VAR_19)
   return 1;
  FUNC_5(VAR_9, VAR_19);
 } else if (!FUNC_0(VAR_19)) {
  VAR_19 = FUNC_4(VAR_9, VAR_19, VAR_7);
  if (!VAR_19)
   return 1;
 }

 VAR_13 = FUNC_9(VAR_9, 1, VAR_17, VAR_11, VAR_19,
         VAR_19->nlp_DID, VAR_1);
 if (!VAR_13) {



  FUNC_8(VAR_19);
  return 1;
 }

 VAR_15 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_13->context2)->virt);

 *((uint32_t *) (VAR_15)) = VAR_0;
 VAR_15 += sizeof(uint32_t);


 VAR_14 = (FARP *) (VAR_15);
 FUNC_12(VAR_14, 0, sizeof(FARP));
 VAR_16 = (uint32_t *) VAR_15;
 *VAR_16++ = FUNC_1(VAR_10);
 *VAR_16++ = FUNC_1(VAR_9->fc_myDID);
 VAR_14->Rflags = 0;
 VAR_14->Mflags = (VAR_3 | VAR_2);

 FUNC_11(&VAR_14->RportName, &VAR_9->fc_portname, sizeof(struct lpfc_name));
 FUNC_11(&VAR_14->RnodeName, &VAR_9->fc_nodename, sizeof(struct lpfc_name));
 VAR_18 = FUNC_6(VAR_9, VAR_10);
 if (VAR_18 && FUNC_0(VAR_18)) {
  FUNC_11(&VAR_14->OportName, &VAR_18->nlp_portname,
         sizeof(struct lpfc_name));
  FUNC_11(&VAR_14->OnodeName, &VAR_18->nlp_nodename,
         sizeof(struct lpfc_name));
 }

 FUNC_2(VAR_9, VAR_5,
  "Issue FARPR:     did:x%x",
  VAR_19->nlp_DID, 0, 0);

 VAR_12->fc_stat.elsXmitFARPR++;
 VAR_13->iocb_cmpl = VAR_8;
 if (FUNC_10(VAR_12, VAR_6, VAR_13, 0) ==
     VAR_4) {




  FUNC_8(VAR_19);
  FUNC_3(VAR_12, VAR_13);
  return 1;
 }



 FUNC_8(VAR_19);
 return 0;
}
