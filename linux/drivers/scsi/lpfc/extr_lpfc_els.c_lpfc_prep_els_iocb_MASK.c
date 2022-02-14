
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_11__ {scalar_t__ bdeFlags; int bdeSize; } ;
struct TYPE_12__ {void* w; TYPE_3__ f; } ;
struct ulp_bde64 {TYPE_4__ tus; void* addrHigh; void* addrLow; } ;
struct lpfc_vport {int fc_flag; size_t vpi; int port_state; int fc_myDID; struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_rpi; int nlp_DID; } ;
struct TYPE_13__ {int bdeSize; void* bdeFlags; void* addrLow; void* addrHigh; } ;
struct TYPE_15__ {int myID; scalar_t__ remoteID; TYPE_5__ bdl; } ;
struct TYPE_9__ {int bdeSize; void* bdeFlags; void* addrLow; void* addrHigh; } ;
struct TYPE_10__ {scalar_t__ xmit_els_remoteID; TYPE_1__ bdl; } ;
struct TYPE_14__ {TYPE_7__ elsreq64; TYPE_2__ xseq64; } ;
struct TYPE_16__ {int ulpTimeout; int ulpBdeCount; int ulpLe; int ulpCt_l; scalar_t__ ulpCt_h; int ulpContext; TYPE_6__ un; int ulpClass; int ulpCommand; } ;
struct lpfc_iocbq {int iocb_flag; int iotag; scalar_t__ drvrTimeout; struct lpfc_vport* vport; scalar_t__ retry; struct lpfc_dmabuf* context3; struct lpfc_dmabuf* context2; int context1; TYPE_8__ iocb; } ;
struct lpfc_hba {int hba_flag; int fc_ratov; int sli3_options; scalar_t__ sli_rev; int * vpi_ids; } ;
struct lpfc_dmabuf {int phys; void* virt; int list; } ;
typedef TYPE_8__ IOCB_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_2 (int,int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct lpfc_hba*) ;
 void* FUNC_6 (struct lpfc_hba*,int ,int *) ;
 int FUNC_7 (struct lpfc_hba*,void*,int ) ;
 int FUNC_8 (struct lpfc_nodelist*) ;
 int FUNC_9 (struct lpfc_vport*,int ,int ,char*,scalar_t__,scalar_t__,int ,int ,int ,int,...) ;
 struct lpfc_iocbq* FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 void* FUNC_12 (int ) ;
 void* FUNC_13 (int ) ;

struct lpfc_iocbq *
FUNC_14(struct lpfc_vport *VAR_23, uint8_t VAR_24,
     uint16_t VAR_25, uint8_t VAR_26,
     struct lpfc_nodelist *VAR_27, uint32_t VAR_28,
     uint32_t VAR_29)
{
 struct lpfc_hba *VAR_30 = VAR_23->phba;
 struct lpfc_iocbq *VAR_31;
 struct lpfc_dmabuf *VAR_32, *VAR_33, *VAR_34;
 struct ulp_bde64 *VAR_35;
 IOCB_t *VAR_36;


 if (!FUNC_5(VAR_30))
  return ((void*)0);


 VAR_31 = FUNC_10(VAR_30);

 if (VAR_31 == ((void*)0))
  return ((void*)0);





 if ((VAR_28 == VAR_9) &&
  (VAR_30->hba_flag & VAR_11) &&
  ((VAR_29 == 129) ||
   (VAR_29 == 130) ||
   (VAR_29 == 128)))
  switch (VAR_29) {
  case 129:
  VAR_31->iocb_flag |=
   ((VAR_16 << VAR_19)
     & VAR_18);
  break;
  case 130:
  VAR_31->iocb_flag |=
   ((VAR_15 << VAR_19)
     & VAR_18);
  break;
  case 128:
  VAR_31->iocb_flag |=
   ((VAR_17 << VAR_19)
     & VAR_18);
  break;
  }
 else
  VAR_31->iocb_flag &= ~VAR_18;

 VAR_36 = &VAR_31->iocb;



 VAR_32 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_10);
 if (VAR_32)
  VAR_32->virt = FUNC_6(VAR_30, VAR_22, &VAR_32->phys);
 if (!VAR_32 || !VAR_32->virt)
  goto els_iocb_free_pcmb_exit;

 FUNC_0(&VAR_32->list);


 if (VAR_24) {
  VAR_33 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_10);
  if (VAR_33)
   VAR_33->virt = FUNC_6(VAR_30, VAR_22,
           &VAR_33->phys);
  if (!VAR_33 || !VAR_33->virt)
   goto els_iocb_free_prsp_exit;
  FUNC_0(&VAR_33->list);
 } else
  VAR_33 = ((void*)0);


 VAR_34 = FUNC_2(sizeof(struct lpfc_dmabuf), VAR_10);
 if (VAR_34)
  VAR_34->virt = FUNC_6(VAR_30, VAR_22,
       &VAR_34->phys);
 if (!VAR_34 || !VAR_34->virt)
  goto els_iocb_free_pbuf_exit;

 FUNC_0(&VAR_34->list);

 if (VAR_24) {
  VAR_36->un.elsreq64.bdl.addrHigh = FUNC_12(VAR_34->phys);
  VAR_36->un.elsreq64.bdl.addrLow = FUNC_13(VAR_34->phys);
  VAR_36->un.elsreq64.bdl.bdeFlags = VAR_1;
  VAR_36->un.elsreq64.bdl.bdeSize = (2 * sizeof(struct ulp_bde64));

  VAR_36->un.elsreq64.remoteID = VAR_28;
  VAR_36->ulpCommand = VAR_3;
  if (VAR_29 == 129)
   VAR_36->ulpTimeout = VAR_8 * 2;
  else if (VAR_29 == 128)
   VAR_36->ulpTimeout = VAR_30->fc_ratov;
  else
   VAR_36->ulpTimeout = VAR_30->fc_ratov * 2;
 } else {
  VAR_36->un.xseq64.bdl.addrHigh = FUNC_12(VAR_34->phys);
  VAR_36->un.xseq64.bdl.addrLow = FUNC_13(VAR_34->phys);
  VAR_36->un.xseq64.bdl.bdeFlags = VAR_1;
  VAR_36->un.xseq64.bdl.bdeSize = sizeof(struct ulp_bde64);
  VAR_36->un.xseq64.xmit_els_remoteID = VAR_28;
  VAR_36->ulpCommand = VAR_4;
 }
 VAR_36->ulpBdeCount = 1;
 VAR_36->ulpLe = 1;
 VAR_36->ulpClass = VAR_2;






 if ((VAR_30->sli3_options & VAR_20) ||
  ((VAR_30->sli_rev == VAR_21) &&
      (VAR_23->fc_flag & VAR_7))) {

  if (VAR_24) {
   VAR_36->un.elsreq64.myID = VAR_23->fc_myDID;


   VAR_36->ulpContext = VAR_30->vpi_ids[VAR_23->vpi];
  }

  VAR_36->ulpCt_h = 0;

  if (VAR_29 == VAR_5)
   VAR_36->ulpCt_l = 0;
  else
   VAR_36->ulpCt_l = 1;
 }

 VAR_35 = (struct ulp_bde64 *) VAR_34->virt;
 VAR_35->addrLow = FUNC_3(FUNC_13(VAR_32->phys));
 VAR_35->addrHigh = FUNC_3(FUNC_12(VAR_32->phys));
 VAR_35->tus.f.bdeSize = VAR_25;
 VAR_35->tus.f.bdeFlags = 0;
 VAR_35->tus.w = FUNC_3(VAR_35->tus.w);

 if (VAR_24) {
  VAR_35++;
  VAR_35->addrLow = FUNC_3(FUNC_13(VAR_33->phys));
  VAR_35->addrHigh = FUNC_3(FUNC_12(VAR_33->phys));
  VAR_35->tus.f.bdeSize = VAR_6;
  VAR_35->tus.f.bdeFlags = VAR_0;
  VAR_35->tus.w = FUNC_3(VAR_35->tus.w);
 }


 VAR_31->context1 = FUNC_8(VAR_27);
 if (!VAR_31->context1)
  goto els_iocb_free_pbuf_exit;
 VAR_31->context2 = VAR_32;
 VAR_31->context3 = VAR_34;
 VAR_31->retry = VAR_26;
 VAR_31->vport = VAR_23;
 VAR_31->drvrTimeout = (VAR_30->fc_ratov << 1) + VAR_14;

 if (VAR_33) {
  FUNC_4(&VAR_33->list, &VAR_32->list);
 }
 if (VAR_24) {

  FUNC_9(VAR_23, VAR_12, VAR_13,
     "0116 Xmit ELS command x%x to remote "
     "NPORT x%x I/O tag: x%x, port state:x%x "
     "rpi x%x fc_flag:x%x\n",
     VAR_29, VAR_28, VAR_31->iotag,
     VAR_23->port_state, VAR_27->nlp_rpi,
     VAR_23->fc_flag);
 } else {

  FUNC_9(VAR_23, VAR_12, VAR_13,
     "0117 Xmit ELS response x%x to remote "
     "NPORT x%x I/O tag: x%x, size: x%x "
     "port_state x%x  rpi x%x fc_flag x%x\n",
     VAR_29, VAR_27->nlp_DID, VAR_31->iotag,
     VAR_25, VAR_23->port_state,
     VAR_27->nlp_rpi, VAR_23->fc_flag);
 }
 return VAR_31;

els_iocb_free_pbuf_exit:
 if (VAR_24)
  FUNC_7(VAR_30, VAR_33->virt, VAR_33->phys);
 FUNC_1(VAR_34);

els_iocb_free_prsp_exit:
 FUNC_7(VAR_30, VAR_32->virt, VAR_32->phys);
 FUNC_1(VAR_33);

els_iocb_free_pcmb_exit:
 FUNC_1(VAR_32);
 FUNC_11(VAR_30, VAR_31);
 return ((void*)0);
}
