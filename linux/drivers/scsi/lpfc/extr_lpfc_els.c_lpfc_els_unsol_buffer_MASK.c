
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_28__ {void* lsRjtRsnCodeExp; void* lsRjtRsnCode; } ;
struct TYPE_29__ {int lsRjtError; TYPE_5__ b; } ;
struct ls_rjt {TYPE_6__ un; } ;
struct lpfc_vport {int load_flag; int fc_flag; int port_state; int rcv_flogi_cnt; int fc_prevDID; int fc_myDID; } ;
struct lpfc_sli_ring {int dummy; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_flag; int nlp_type; } ;
struct TYPE_24__ {int remoteID; int parmRo; } ;
struct TYPE_20__ {int* ulpWord; TYPE_1__ rcvels; } ;
struct TYPE_26__ {int acc_len; } ;
struct TYPE_27__ {TYPE_3__ rcvsli3; } ;
struct TYPE_23__ {int ulpStatus; int ulpTimeout; TYPE_11__ un; TYPE_4__ unsli3; } ;
struct lpfc_iocbq {struct lpfc_nodelist* context1; TYPE_14__ iocb; struct lpfc_vport* vport; scalar_t__ context2; } ;
struct TYPE_21__ {int elsRcvDrop; int elsRcvECHO; int elsRcvRRQ; int elsRcvRTV; int elsRcvRNID; int elsRcvRPL; int elsRcvRPS; int elsRcvRLS; int elsRcvLIRR; int elsRcvPRLI; int elsRcvFAN; int elsRcvFARP; int elsRcvFARPR; int elsRcvPDISC; int elsRcvADISC; int elsRcvRSCN; int elsRcvRDP; int elsRcvLCB; int elsRcvPRLO; int elsRcvLOGO; int elsRcvFLOGI; int elsRcvPLOGI; int elsRcvFrame; } ;
struct lpfc_hba {int sli3_options; TYPE_12__ fc_stat; int mbox_mem_pool; int cfg_link_speed; int cfg_topology; TYPE_2__* pport; int sli_rev; } ;
struct lpfc_dmabuf {int* virt; } ;
struct Scsi_Host {int host_lock; } ;
typedef int stat ;
struct TYPE_30__ {scalar_t__ lipsr_AL_PA; } ;
struct TYPE_31__ {TYPE_7__ varInitLnk; } ;
struct TYPE_32__ {TYPE_8__ un; } ;
struct TYPE_25__ {int fc_flag; } ;
struct TYPE_19__ {TYPE_9__ mb; } ;
struct TYPE_22__ {struct lpfc_vport* vport; int mbox_cmpl; TYPE_10__ u; } ;
typedef TYPE_13__ LPFC_MBOXQ_t ;
typedef TYPE_14__ IOCB_t ;
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
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 void* VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int FUNC_1 (struct Scsi_Host*,int ,char*) ;
 int FUNC_2 (struct lpfc_vport*,int ,char*,int,int,int) ;
 int FUNC_3 (struct lpfc_vport*,struct lpfc_nodelist*,struct lpfc_iocbq*,int ) ;
 scalar_t__ FUNC_4 (struct lpfc_vport*) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_6 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_7 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_9 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_10 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_11 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_12 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_13 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_14 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_15 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_16 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_17 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_18 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_19 (struct lpfc_vport*,struct lpfc_iocbq*,struct lpfc_nodelist*) ;
 int FUNC_20 (struct lpfc_vport*,int ,struct lpfc_iocbq*,struct lpfc_nodelist*,int *) ;
 struct lpfc_nodelist* FUNC_21 (struct lpfc_vport*,struct lpfc_nodelist*,scalar_t__) ;
 struct lpfc_nodelist* FUNC_22 (struct lpfc_vport*,int) ;
 int FUNC_23 (struct lpfc_hba*,TYPE_13__*,int ,int ) ;
 int FUNC_24 (struct lpfc_hba*) ;
 void* FUNC_25 (struct lpfc_nodelist*) ;
 struct lpfc_nodelist* FUNC_26 (struct lpfc_vport*,int) ;
 int FUNC_27 (struct lpfc_nodelist*) ;
 int FUNC_28 (struct lpfc_vport*,struct lpfc_nodelist*,int ) ;
 struct lpfc_nodelist* FUNC_29 (struct lpfc_hba*,int*,struct lpfc_nodelist*) ;
 int FUNC_30 (struct lpfc_hba*,struct lpfc_sli_ring*,int) ;
 int FUNC_31 (struct lpfc_vport*,int ,int ,char*,int,int,...) ;
 int FUNC_32 (struct lpfc_vport*,struct lpfc_nodelist*,int*) ;
 struct Scsi_Host* FUNC_33 (struct lpfc_vport*) ;
 int VAR_35 ;
 scalar_t__ FUNC_34 (struct lpfc_hba*,TYPE_13__*,int ) ;
 TYPE_13__* FUNC_35 (int ,int ) ;
 int FUNC_36 (TYPE_13__*,int ) ;
 int FUNC_37 (struct ls_rjt*,int ,int) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ) ;

__attribute__((used)) static void
FUNC_40(struct lpfc_hba *VAR_36, struct lpfc_sli_ring *VAR_37,
        struct lpfc_vport *VAR_38, struct lpfc_iocbq *VAR_39)
{
 struct Scsi_Host *VAR_40;
 struct lpfc_nodelist *VAR_41;
 struct ls_rjt VAR_42;
 uint32_t *VAR_43;
 uint32_t VAR_44, VAR_45, VAR_46;
 uint8_t VAR_47, VAR_48 = 0, VAR_49 = 0;
 IOCB_t *VAR_50 = &VAR_39->iocb;
 LPFC_MBOXQ_t *VAR_51;

 if (!VAR_38 || !(VAR_39->context2))
  goto dropit;

 VAR_46 = 0;
 VAR_43 = ((struct lpfc_dmabuf *)VAR_39->context2)->virt;
 VAR_44 = *VAR_43;
 if ((VAR_36->sli3_options & VAR_15) == 0)
  FUNC_30(VAR_36, VAR_37, 1);

 VAR_45 = VAR_50->un.rcvels.remoteID;
 if (VAR_50->ulpStatus) {
  FUNC_2(VAR_38, VAR_12,
   "RCV Unsol ELS:  status:x%x/x%x did:x%x",
   VAR_50->ulpStatus, VAR_50->un.ulpWord[4], VAR_45);
  goto dropit;
 }


 if (FUNC_4(VAR_38))
  goto dropit;


 if (VAR_38->load_flag & VAR_5)
  goto dropit;


 if ((VAR_38->fc_flag & VAR_1) &&
   (VAR_44 != 139))
  goto dropit;

 VAR_41 = FUNC_22(VAR_38, VAR_45);
 if (!VAR_41) {

  VAR_41 = FUNC_26(VAR_38, VAR_45);
  if (!VAR_41)
   goto dropit;
  FUNC_28(VAR_38, VAR_41, VAR_32);
  VAR_46 = 1;
  if ((VAR_45 & VAR_6) == VAR_6)
   VAR_41->nlp_type |= VAR_30;
 } else if (!FUNC_0(VAR_41)) {
  VAR_41 = FUNC_21(VAR_38, VAR_41,
     VAR_33);
  if (!VAR_41)
   goto dropit;
  FUNC_28(VAR_38, VAR_41, VAR_32);
  VAR_46 = 1;
  if ((VAR_45 & VAR_6) == VAR_6)
   VAR_41->nlp_type |= VAR_30;
 } else if (VAR_41->nlp_state == VAR_33) {

  VAR_41 = FUNC_25(VAR_41);
  if (!VAR_41)
   goto dropit;
  FUNC_28(VAR_38, VAR_41, VAR_32);
  VAR_46 = 1;
 }

 VAR_36->fc_stat.elsRcvFrame++;





 VAR_40 = FUNC_33(VAR_38);
 FUNC_38(VAR_40->host_lock);
 if (VAR_41->nlp_flag & VAR_31) {
  FUNC_39(VAR_40->host_lock);
  goto dropit;
 }
 FUNC_39(VAR_40->host_lock);

 VAR_39->context1 = FUNC_25(VAR_41);
 VAR_39->vport = VAR_38;

 if ((VAR_44 & VAR_0) == 129) {
  VAR_44 &= VAR_0;
 }

 FUNC_31(VAR_38, VAR_9, VAR_10,
    "0112 ELS command x%x received from NPORT x%x "
    "Data: x%x x%x x%x x%x\n",
   VAR_44, VAR_45, VAR_38->port_state, VAR_38->fc_flag,
   VAR_38->fc_myDID, VAR_38->fc_prevDID);


 if ((VAR_38->port_state < VAR_13) &&
     (VAR_44 != 146) &&
     !((VAR_44 == 139) && (VAR_38->fc_flag & VAR_3))) {
  VAR_48 = VAR_20;
  VAR_47 = VAR_18;
  goto lsrjt;
 }

 switch (VAR_44) {
 case 139:
  FUNC_2(VAR_38, VAR_12,
   "RCV PLOGI:       did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvPLOGI++;
  VAR_41 = FUNC_29(VAR_36, VAR_43, VAR_41);
  if (VAR_36->sli_rev == VAR_16 &&
      (VAR_36->pport->fc_flag & VAR_3)) {
   VAR_38->fc_prevDID = VAR_38->fc_myDID;




   VAR_38->fc_myDID = VAR_39->iocb.un.rcvels.parmRo;
   FUNC_31(VAR_38, VAR_9, VAR_10,
      "3312 Remote port assigned DID x%x "
      "%x\n", VAR_38->fc_myDID,
      VAR_38->fc_prevDID);
  }

  FUNC_32(VAR_38, VAR_41, VAR_43);


  if (VAR_38->fc_flag & VAR_1) {
   VAR_48 = VAR_21;
   VAR_47 = VAR_18;
   break;
  }

  if (VAR_38->port_state < VAR_11) {
   if (!(VAR_36->pport->fc_flag & VAR_3) ||
    (VAR_36->pport->fc_flag & VAR_4)) {
    VAR_48 = VAR_21;
    VAR_47 = VAR_18;
    break;
   }
  }

  FUNC_38(VAR_40->host_lock);
  VAR_41->nlp_flag &= ~VAR_34;
  FUNC_39(VAR_40->host_lock);

  FUNC_3(VAR_38, VAR_41, VAR_39,
     VAR_27);

  break;
 case 146:
  FUNC_2(VAR_38, VAR_12,
   "RCV FLOGI:       did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvFLOGI++;




  if (VAR_38->port_state >= VAR_14 &&
      VAR_38->fc_flag & VAR_3 &&
      VAR_38->rcv_flogi_cnt >= 1) {
   VAR_48 = VAR_20;
   VAR_47 = VAR_18;
   VAR_49++;
   goto lsrjt;
  }

  FUNC_9(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 142:
  FUNC_2(VAR_38, VAR_12,
   "RCV LOGO:        did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvLOGO++;
  FUNC_32(VAR_38, VAR_41, VAR_43);
  if (VAR_38->port_state < VAR_11) {
   VAR_48 = VAR_21;
   VAR_47 = VAR_18;
   break;
  }
  FUNC_3(VAR_38, VAR_41, VAR_39, VAR_25);
  break;
 case 137:
  FUNC_2(VAR_38, VAR_12,
   "RCV PRLO:        did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvPRLO++;
  FUNC_32(VAR_38, VAR_41, VAR_43);
  if (VAR_38->port_state < VAR_11) {
   VAR_48 = VAR_21;
   VAR_47 = VAR_18;
   break;
  }
  FUNC_3(VAR_38, VAR_41, VAR_39, VAR_29);
  break;
 case 144:
  VAR_36->fc_stat.elsRcvLCB++;
  FUNC_10(VAR_38, VAR_39, VAR_41);
  break;
 case 136:
  VAR_36->fc_stat.elsRcvRDP++;
  FUNC_12(VAR_38, VAR_39, VAR_41);
  break;
 case 129:
  VAR_36->fc_stat.elsRcvRSCN++;
  FUNC_18(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 151:
  FUNC_2(VAR_38, VAR_12,
   "RCV ADISC:       did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  FUNC_32(VAR_38, VAR_41, VAR_43);
  VAR_36->fc_stat.elsRcvADISC++;
  if (VAR_38->port_state < VAR_11) {
   VAR_48 = VAR_21;
   VAR_47 = VAR_18;
   break;
  }
  FUNC_3(VAR_38, VAR_41, VAR_39,
     VAR_24);
  break;
 case 140:
  FUNC_2(VAR_38, VAR_12,
   "RCV PDISC:       did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvPDISC++;
  if (VAR_38->port_state < VAR_11) {
   VAR_48 = VAR_21;
   VAR_47 = VAR_18;
   break;
  }
  FUNC_3(VAR_38, VAR_41, VAR_39,
     VAR_26);
  break;
 case 147:
  FUNC_2(VAR_38, VAR_12,
   "RCV FARPR:       did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvFARPR++;
  FUNC_8(VAR_38, VAR_39, VAR_41);
  break;
 case 148:
  FUNC_2(VAR_38, VAR_12,
   "RCV FARP:        did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvFARP++;
  FUNC_7(VAR_38, VAR_39, VAR_41);
  break;
 case 149:
  FUNC_2(VAR_38, VAR_12,
   "RCV FAN:         did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvFAN++;
  FUNC_6(VAR_38, VAR_39, VAR_41);
  break;
 case 138:
 case 141:
  FUNC_2(VAR_38, VAR_12,
   "RCV PRLI:        did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvPRLI++;
  if ((VAR_38->port_state < VAR_11) &&
      (VAR_38->fc_flag & VAR_2)) {
   VAR_48 = VAR_21;
   VAR_47 = VAR_18;
   break;
  }
  FUNC_3(VAR_38, VAR_41, VAR_39, VAR_28);
  break;
 case 143:
  FUNC_2(VAR_38, VAR_12,
   "RCV LIRR:        did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvLIRR++;
  FUNC_11(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 134:
  FUNC_2(VAR_38, VAR_12,
   "RCV RLS:         did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvRLS++;
  FUNC_13(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 131:
  FUNC_2(VAR_38, VAR_12,
   "RCV RPS:         did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvRPS++;
  FUNC_16(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 132:
  FUNC_2(VAR_38, VAR_12,
   "RCV RPL:         did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvRPL++;
  FUNC_15(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 133:
  FUNC_2(VAR_38, VAR_12,
   "RCV RNID:        did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvRNID++;
  FUNC_14(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 128:
  FUNC_2(VAR_38, VAR_12,
   "RCV RTV:        did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);
  VAR_36->fc_stat.elsRcvRTV++;
  FUNC_19(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 130:
  FUNC_2(VAR_38, VAR_12,
   "RCV RRQ:         did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvRRQ++;
  FUNC_17(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 150:
  FUNC_2(VAR_38, VAR_12,
   "RCV ECHO:        did:x%x/ste:x%x flg:x%x",
   VAR_45, VAR_38->port_state, VAR_41->nlp_flag);

  VAR_36->fc_stat.elsRcvECHO++;
  FUNC_5(VAR_38, VAR_39, VAR_41);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 case 135:

  VAR_48 = VAR_21;
  VAR_47 = VAR_17;
  break;
 case 145:




  FUNC_1(VAR_40, VAR_39->iocb.unsli3.rcvsli3.acc_len,
    (char *)VAR_43);
  break;
 default:
  FUNC_2(VAR_38, VAR_12,
   "RCV ELS cmd:     cmd:x%x did:x%x/ste:x%x",
   VAR_44, VAR_45, VAR_38->port_state);


  VAR_48 = VAR_19;
  VAR_47 = VAR_18;


  FUNC_31(VAR_38, VAR_8, VAR_10,
     "0115 Unknown ELS command x%x "
     "received from NPORT x%x\n", VAR_44, VAR_45);
  if (VAR_46)
   FUNC_27(VAR_41);
  break;
 }

lsrjt:

 if (VAR_48) {
  FUNC_37(&VAR_42, 0, sizeof(VAR_42));
  VAR_42.un.b.lsRjtRsnCode = VAR_48;
  VAR_42.un.b.lsRjtRsnCodeExp = VAR_47;
  FUNC_20(VAR_38, VAR_42.un.lsRjtError, VAR_39, VAR_41,
   ((void*)0));
 }

 FUNC_27(VAR_39->context1);
 VAR_39->context1 = ((void*)0);





 if (VAR_49) {
  VAR_51 = FUNC_35(VAR_36->mbox_mem_pool, VAR_7);
  if (!VAR_51)
   return;
  FUNC_24(VAR_36);
  FUNC_23(VAR_36, VAR_51,
          VAR_36->cfg_topology,
          VAR_36->cfg_link_speed);
  VAR_51->u.mb.un.varInitLnk.lipsr_AL_PA = 0;
  VAR_51->mbox_cmpl = VAR_35;
  VAR_51->vport = VAR_38;
  if (FUNC_34(VAR_36, VAR_51, VAR_23) ==
      VAR_22)
   FUNC_36(VAR_51, VAR_36->mbox_mem_pool);
 }

 return;

dropit:
 if (VAR_38 && !(VAR_38->load_flag & VAR_5))
  FUNC_31(VAR_38, VAR_8, VAR_10,
   "0111 Dropping received ELS cmd "
   "Data: x%x x%x x%x\n",
   VAR_50->ulpStatus, VAR_50->un.ulpWord[4], VAR_50->ulpTimeout);
 VAR_36->fc_stat.elsRcvDrop++;
}
