
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct lpfc_mbx_read_top {int eventTag; } ;
struct TYPE_22__ {int topology; int status; int type; int number; int fault; int logical_speed; int speed; int duplex; } ;
struct TYPE_23__ {TYPE_7__ link_state; TYPE_2__* els_wq; int conf_trunk; } ;
struct TYPE_18__ {int link_event; } ;
struct TYPE_19__ {TYPE_3__ slistat; } ;
struct lpfc_hba {int link_flag; int mbox_mem_pool; TYPE_8__ sli4_hba; int pport; TYPE_4__ sli; } ;
struct lpfc_dmabuf {int virt; int phys; } ;
struct lpfc_acqe_fc_la {int event_tag; } ;
struct TYPE_20__ {int varReadTop; } ;
struct TYPE_24__ {TYPE_5__ un; int mbxStatus; } ;
struct TYPE_21__ {TYPE_9__ mb; } ;
struct TYPE_17__ {TYPE_1__* pring; } ;
struct TYPE_16__ {int flag; } ;
struct TYPE_15__ {TYPE_6__ u; int vport; int (* mbox_cmpl ) (struct lpfc_hba*,TYPE_10__*) ;} ;
typedef TYPE_9__ MAILBOX_t ;
typedef TYPE_10__ LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,struct lpfc_acqe_fc_la*) ;
 int FUNC_1 (int ,struct lpfc_mbx_read_top*,int) ;
 int FUNC_2 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_3 (int,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (struct lpfc_hba*) ;
 int FUNC_5 (struct lpfc_hba*,int ,int *) ;
 int FUNC_6 (struct lpfc_hba*,TYPE_10__*) ;
 int VAR_24 ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,...) ;
 int FUNC_8 (struct lpfc_hba*,TYPE_10__*,struct lpfc_dmabuf*) ;
 int FUNC_9 (struct lpfc_hba*,void*) ;
 int FUNC_10 (struct lpfc_hba*,int ,int) ;
 int FUNC_11 (struct lpfc_hba*,TYPE_10__*,int ) ;
 int VAR_25 ;
 int FUNC_12 (struct lpfc_hba*,struct lpfc_acqe_fc_la*) ;
 scalar_t__ FUNC_13 (int ,int ) ;
 int FUNC_14 (TYPE_10__*,int ) ;

__attribute__((used)) static void
FUNC_15(struct lpfc_hba *VAR_26, struct lpfc_acqe_fc_la *VAR_27)
{
 struct lpfc_dmabuf *VAR_28;
 LPFC_MBOXQ_t *VAR_29;
 MAILBOX_t *VAR_30;
 struct lpfc_mbx_read_top *VAR_31;
 int VAR_32;

 if (FUNC_0(VAR_25, VAR_27) !=
     VAR_5) {
  FUNC_7(VAR_26, VAR_1, VAR_3,
    "2895 Non FC link Event detected.(%d)\n",
    FUNC_0(VAR_25, VAR_27));
  return;
 }

 if (FUNC_0(VAR_17, VAR_27) ==
     VAR_8) {
  FUNC_12(VAR_26, VAR_27);
  return;
 }


 VAR_26->sli4_hba.link_state.speed =
   FUNC_10(VAR_26, VAR_11,
    FUNC_0(VAR_21, VAR_27));
 VAR_26->sli4_hba.link_state.duplex = VAR_4;
 VAR_26->sli4_hba.link_state.topology =
    FUNC_0(VAR_22, VAR_27);
 VAR_26->sli4_hba.link_state.status =
    FUNC_0(VAR_17, VAR_27);
 VAR_26->sli4_hba.link_state.type =
    FUNC_0(VAR_20, VAR_27);
 VAR_26->sli4_hba.link_state.number =
    FUNC_0(VAR_19, VAR_27);
 VAR_26->sli4_hba.link_state.fault =
    FUNC_0(VAR_23, VAR_27);

 if (FUNC_0(VAR_17, VAR_27) ==
     VAR_6)
  VAR_26->sli4_hba.link_state.logical_speed = 0;
 else if (!VAR_26->sli4_hba.conf_trunk)
  VAR_26->sli4_hba.link_state.logical_speed =
    FUNC_0(VAR_18, VAR_27) * 10;

 FUNC_7(VAR_26, VAR_2, VAR_3,
   "2896 Async FC event - Speed:%dGBaud Topology:x%x "
   "LA Type:x%x Port Type:%d Port Number:%d Logical speed:"
   "%dMbps Fault:%d\n",
   VAR_26->sli4_hba.link_state.speed,
   VAR_26->sli4_hba.link_state.topology,
   VAR_26->sli4_hba.link_state.status,
   VAR_26->sli4_hba.link_state.type,
   VAR_26->sli4_hba.link_state.number,
   VAR_26->sli4_hba.link_state.logical_speed,
   VAR_26->sli4_hba.link_state.fault);
 VAR_29 = (LPFC_MBOXQ_t *)FUNC_13(VAR_26->mbox_mem_pool, VAR_0);
 if (!VAR_29) {
  FUNC_7(VAR_26, VAR_1, VAR_3,
    "2897 The mboxq allocation failed\n");
  return;
 }
 VAR_28 = FUNC_3(sizeof(struct lpfc_dmabuf), VAR_0);
 if (!VAR_28) {
  FUNC_7(VAR_26, VAR_1, VAR_3,
    "2898 The lpfc_dmabuf allocation failed\n");
  goto out_free_pmb;
 }
 VAR_28->virt = FUNC_5(VAR_26, 0, &VAR_28->phys);
 if (!VAR_28->virt) {
  FUNC_7(VAR_26, VAR_1, VAR_3,
    "2899 The mbuf allocation failed\n");
  goto out_free_dmabuf;
 }


 FUNC_4(VAR_26);


 VAR_26->sli4_hba.els_wq->pring->flag |= VAR_10;


 VAR_26->sli.slistat.link_event++;


 FUNC_8(VAR_26, VAR_29, VAR_28);
 VAR_29->mbox_cmpl = FUNC_6;
 VAR_29->vport = VAR_26->pport;

 if (VAR_26->sli4_hba.link_state.status != VAR_7) {
  VAR_26->link_flag &= ~(VAR_12 | VAR_13);

  switch (VAR_26->sli4_hba.link_state.status) {
  case 129:
   VAR_26->link_flag |= VAR_12;
   break;
  case 128:
   VAR_26->link_flag |= VAR_13;
   break;
  default:
   break;
  }


  VAR_30 = &VAR_29->u.mb;
  VAR_30->mbxStatus = VAR_16;


  FUNC_9(VAR_26, (void *)VAR_27);


  VAR_31 = (struct lpfc_mbx_read_top *)&VAR_29->u.mb.un.varReadTop;
  VAR_31->eventTag = VAR_27->event_tag;

  if (VAR_26->sli4_hba.link_state.status ==
      VAR_9) {
   FUNC_1(VAR_24, VAR_31,
          VAR_9);
  } else {
   FUNC_1(VAR_24, VAR_31,
          VAR_6);
  }

  FUNC_6(VAR_26, VAR_29);

  return;
 }

 VAR_32 = FUNC_11(VAR_26, VAR_29, VAR_15);
 if (VAR_32 == VAR_14)
  goto out_free_dmabuf;
 return;

out_free_dmabuf:
 FUNC_2(VAR_28);
out_free_pmb:
 FUNC_14(VAR_29, VAR_26->mbox_mem_pool);
}
