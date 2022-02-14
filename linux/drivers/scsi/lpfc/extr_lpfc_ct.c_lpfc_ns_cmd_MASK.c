
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
typedef struct TYPE_23__ TYPE_16__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
struct TYPE_22__ {int fbits; void* type_code; void* PortId; } ;
struct TYPE_19__ {void* port_id; } ;
struct TYPE_18__ {int symbname; int len; int wwnn; } ;
struct TYPE_17__ {int symbname; int len; void* PortId; } ;
struct TYPE_32__ {int wwnn; void* PortId; } ;
struct TYPE_31__ {int fcpReg; void** rsvd; void* PortId; } ;
struct TYPE_30__ {void* PortId; } ;
struct TYPE_29__ {void* PortId; } ;
struct TYPE_28__ {void* PortType; void* Fc4Type; } ;
struct TYPE_23__ {TYPE_15__ rff; TYPE_12__ da_id; TYPE_11__ rsnn; TYPE_10__ rspn; TYPE_9__ rnn; TYPE_8__ rft; TYPE_7__ gft; TYPE_6__ gff; TYPE_5__ gid; } ;
struct TYPE_20__ {void* CmdRsp; scalar_t__ Size; } ;
struct TYPE_21__ {TYPE_13__ bits; } ;
struct TYPE_26__ {scalar_t__ InId; int Revision; } ;
struct TYPE_27__ {TYPE_3__ bits; } ;
struct TYPE_24__ {void* bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_25__ {void* w; TYPE_1__ f; } ;
struct ulp_bde64 {TYPE_16__ un; TYPE_14__ CommandResponse; int FsSubType; int FsType; TYPE_4__ RevisionId; TYPE_2__ tus; void* addrLow; void* addrHigh; } ;
struct lpfc_vport {int fc_flag; int fc_rscn_id_cnt; void* port_state; void* fc_myDID; int cfg_enable_fc4_type; int ct_flags; int fc_nodename; struct lpfc_hba* phba; } ;
struct lpfc_sli_ct_request {TYPE_16__ un; TYPE_14__ CommandResponse; int FsSubType; int FsType; TYPE_4__ RevisionId; TYPE_2__ tus; void* addrLow; void* addrHigh; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; int nlp_DID; } ;
struct lpfc_name {int dummy; } ;
struct lpfc_hba {int nvmet_support; struct lpfc_vport* pport; } ;
struct lpfc_dmabuf {int phys; void* virt; int list; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 int FUNC_0 (int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 void* VAR_29 ;
 void* VAR_30 ;
 void* VAR_31 ;
 void* VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 void* FUNC_2 (int const) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_5 (int,int ) ;
 void* FUNC_6 (void*) ;
 void FUNC_7 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_8 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_9 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_10 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_11 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_12 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_13 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_14 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_15 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 void FUNC_16 (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*) ;
 int FUNC_17 (struct lpfc_vport*,struct lpfc_dmabuf*,struct lpfc_dmabuf*,struct lpfc_nodelist*,void (*) (struct lpfc_hba*,struct lpfc_iocbq*,struct lpfc_iocbq*),void*,int ) ;
 int FUNC_18 (struct lpfc_vport*,int ,char*,int,int ,int ) ;
 struct lpfc_nodelist* FUNC_19 (struct lpfc_vport*,int ) ;
 void* FUNC_20 (struct lpfc_hba*,int ,int *) ;
 int FUNC_21 (struct lpfc_hba*,void*,int ) ;
 int FUNC_22 (struct lpfc_nodelist*) ;
 int FUNC_23 (struct lpfc_vport*) ;
 int FUNC_24 (struct lpfc_hba*) ;
 int FUNC_25 (struct lpfc_vport*,int ,int ,char*,...) ;
 int FUNC_26 (struct lpfc_vport*) ;
 int FUNC_27 (struct lpfc_vport*,int ,size_t) ;
 int FUNC_28 (struct lpfc_vport*,int ,size_t) ;
 int FUNC_29 (int ,int *,int) ;
 int FUNC_30 (struct ulp_bde64*,int ,int) ;
 void* FUNC_31 (int ) ;
 void* FUNC_32 (int ) ;

int
FUNC_33(struct lpfc_vport *VAR_36, int VAR_37,
     uint8_t VAR_38, uint32_t VAR_39)
{
 struct lpfc_nodelist * VAR_40;
 struct lpfc_hba *VAR_41 = VAR_36->phba;
 struct lpfc_dmabuf *VAR_42, *VAR_43;
 struct lpfc_sli_ct_request *VAR_44;
 struct ulp_bde64 *VAR_45;
 void (*VAR_46) (struct lpfc_hba *, struct lpfc_iocbq *,
        struct lpfc_iocbq *) = ((void*)0);
 uint32_t *VAR_47;
 uint32_t VAR_48 = 1024;
 size_t VAR_49;
 int VAR_50 = 0;

 VAR_40 = FUNC_19(VAR_36, VAR_27);
 if (!VAR_40 || !FUNC_1(VAR_40)
     || VAR_40->nlp_state != VAR_26) {
  VAR_50=1;
  goto ns_cmd_exit;
 }



 VAR_42 = FUNC_5(sizeof(struct lpfc_dmabuf), VAR_13);
 if (!VAR_42) {
  VAR_50=2;
  goto ns_cmd_exit;
 }

 FUNC_0(&VAR_42->list);
 VAR_42->virt = FUNC_20(VAR_41, VAR_25, &(VAR_42->phys));
 if (!VAR_42->virt) {
  VAR_50=3;
  goto ns_cmd_free_mp;
 }


 VAR_43 = FUNC_5(sizeof(struct lpfc_dmabuf), VAR_13);
 if (!VAR_43) {
  VAR_50=4;
  goto ns_cmd_free_mpvirt;
 }

 FUNC_0(&VAR_43->list);
 VAR_43->virt = FUNC_20(VAR_41, VAR_25, &(VAR_43->phys));
 if (!VAR_43->virt) {
  VAR_50=5;
  goto ns_cmd_free_bmp;
 }


 FUNC_25(VAR_36, VAR_17 ,VAR_18,
    "0236 NameServer Req Data: x%x x%x x%x x%x\n",
    VAR_37, VAR_36->fc_flag, VAR_36->fc_rscn_id_cnt,
    VAR_39);

 VAR_45 = (struct ulp_bde64 *) VAR_43->virt;
 FUNC_30(VAR_45, 0, sizeof(struct ulp_bde64));
 VAR_45->addrHigh = FUNC_6(FUNC_31(VAR_42->phys) );
 VAR_45->addrLow = FUNC_6(FUNC_32(VAR_42->phys) );
 VAR_45->tus.f.bdeFlags = 0;
 if (VAR_37 == 134)
  VAR_45->tus.f.bdeSize = VAR_15;
 else if (VAR_37 == 133)
  VAR_45->tus.f.bdeSize = VAR_15;
 else if (VAR_37 == 136)
  VAR_45->tus.f.bdeSize = VAR_12;
 else if (VAR_37 == 135)
  VAR_45->tus.f.bdeSize = VAR_14;
 else if (VAR_37 == 131)
  VAR_45->tus.f.bdeSize = VAR_29;
 else if (VAR_37 == 130)
  VAR_45->tus.f.bdeSize = VAR_30;
 else if (VAR_37 == 128)
  VAR_45->tus.f.bdeSize = VAR_32;
 else if (VAR_37 == 129)
  VAR_45->tus.f.bdeSize = VAR_31;
 else if (VAR_37 == 137)
  VAR_45->tus.f.bdeSize = VAR_0;
 else if (VAR_37 == 132)
  VAR_45->tus.f.bdeSize = VAR_28;
 else
  VAR_45->tus.f.bdeSize = 0;
 VAR_45->tus.w = FUNC_6(VAR_45->tus.w);

 VAR_44 = (struct lpfc_sli_ct_request *) VAR_42->virt;
 FUNC_30(VAR_44, 0, sizeof(struct lpfc_sli_ct_request));
 VAR_44->RevisionId.bits.Revision = VAR_35;
 VAR_44->RevisionId.bits.InId = 0;
 VAR_44->FsType = VAR_34;
 VAR_44->FsSubType = VAR_33;
 VAR_44->CommandResponse.bits.Size = 0;
 switch (VAR_37) {
 case 134:
  VAR_44->CommandResponse.bits.CmdRsp =
      FUNC_2(134);
  VAR_44->un.gid.Fc4Type = VAR_39;

  if (VAR_36->port_state < VAR_24)
   VAR_36->port_state = VAR_24;
  FUNC_26(VAR_36);
  VAR_46 = FUNC_10;
  VAR_48 = VAR_9;
  break;

 case 133:
  VAR_44->CommandResponse.bits.CmdRsp =
      FUNC_2(133);
  VAR_44->un.gid.PortType = VAR_39;

  if (VAR_36->port_state < VAR_24)
   VAR_36->port_state = VAR_24;
  FUNC_26(VAR_36);
  VAR_46 = FUNC_11;
  VAR_48 = VAR_9;
  break;

 case 136:
  VAR_44->CommandResponse.bits.CmdRsp =
   FUNC_2(136);
  VAR_44->un.gff.PortId = FUNC_3(VAR_39);
  VAR_46 = FUNC_8;
  break;

 case 135:
  VAR_44->CommandResponse.bits.CmdRsp =
   FUNC_2(135);
  VAR_44->un.gft.PortId = FUNC_3(VAR_39);
  VAR_46 = FUNC_9;
  break;

 case 131:
  VAR_36->ct_flags &= ~VAR_5;
  VAR_44->CommandResponse.bits.CmdRsp =
      FUNC_2(131);
  VAR_44->un.rft.PortId = FUNC_3(VAR_36->fc_myDID);


  if (VAR_36->cfg_enable_fc4_type == VAR_20 ||
      VAR_36->cfg_enable_fc4_type == VAR_21)
   VAR_44->un.rft.fcpReg = 1;





  if (VAR_36->cfg_enable_fc4_type == VAR_20 ||
      VAR_36->cfg_enable_fc4_type == VAR_22)
   VAR_44->un.rft.rsvd[0] =
    FUNC_3(VAR_23);

  VAR_47 = (uint32_t *)VAR_44;
  FUNC_25(VAR_36, VAR_17, VAR_18,
     "6433 Issue RFT (%s %s): %08x %08x %08x %08x "
     "%08x %08x %08x %08x\n",
     VAR_44->un.rft.fcpReg ? "FCP" : " ",
     VAR_44->un.rft.rsvd[0] ? "NVME" : " ",
     *VAR_47, *(VAR_47 + 1), *(VAR_47 + 2), *(VAR_47 + 3),
     *(VAR_47 + 4), *(VAR_47 + 5),
     *(VAR_47 + 6), *(VAR_47 + 7));
  VAR_46 = FUNC_13;
  break;

 case 130:
  VAR_36->ct_flags &= ~VAR_6;
  VAR_44->CommandResponse.bits.CmdRsp =
      FUNC_2(130);
  VAR_44->un.rnn.PortId = FUNC_3(VAR_36->fc_myDID);
  FUNC_29(VAR_44->un.rnn.wwnn, &VAR_36->fc_nodename,
         sizeof(struct lpfc_name));
  VAR_46 = FUNC_14;
  break;

 case 128:
  VAR_36->ct_flags &= ~VAR_8;
  VAR_44->CommandResponse.bits.CmdRsp =
      FUNC_2(128);
  VAR_44->un.rspn.PortId = FUNC_3(VAR_36->fc_myDID);
  VAR_49 = sizeof(VAR_44->un.rspn.symbname);
  VAR_44->un.rspn.len =
   FUNC_28(VAR_36,
   VAR_44->un.rspn.symbname, VAR_49);
  VAR_46 = FUNC_16;
  break;
 case 129:
  VAR_36->ct_flags &= ~VAR_7;
  VAR_44->CommandResponse.bits.CmdRsp =
      FUNC_2(129);
  FUNC_29(VAR_44->un.rsnn.wwnn, &VAR_36->fc_nodename,
         sizeof(struct lpfc_name));
  VAR_49 = sizeof(VAR_44->un.rsnn.symbname);
  VAR_44->un.rsnn.len =
   FUNC_27(VAR_36,
   VAR_44->un.rsnn.symbname, VAR_49);
  VAR_46 = FUNC_15;
  break;
 case 137:

  VAR_44->CommandResponse.bits.CmdRsp =
   FUNC_2(137);
  VAR_44->un.da_id.port_id = FUNC_3(VAR_36->fc_myDID);
  VAR_46 = FUNC_7;
  break;
 case 132:
  VAR_36->ct_flags &= ~VAR_4;
  VAR_44->CommandResponse.bits.CmdRsp =
      FUNC_2(132);
  VAR_44->un.rff.PortId = FUNC_3(VAR_36->fc_myDID);
  VAR_44->un.rff.fbits = VAR_1;





  if (((VAR_36->cfg_enable_fc4_type == VAR_20) ||
       (VAR_36->cfg_enable_fc4_type == VAR_22)) &&
      (VAR_39 == VAR_11)) {
   if ((VAR_36 == VAR_41->pport) && VAR_41->nvmet_support) {
    VAR_44->un.rff.fbits = (VAR_3 |
     VAR_2);
    FUNC_24(VAR_41);
   } else {
    FUNC_23(VAR_36);
   }
   VAR_44->un.rff.type_code = VAR_39;

  } else if (((VAR_36->cfg_enable_fc4_type == VAR_20) ||
       (VAR_36->cfg_enable_fc4_type == VAR_21)) &&
      (VAR_39 == VAR_10))
   VAR_44->un.rff.type_code = VAR_39;

  else
   goto ns_cmd_free_bmpvirt;

  VAR_47 = (uint32_t *)VAR_44;
  FUNC_25(VAR_36, VAR_17, VAR_18,
     "6434 Issue RFF (%s): %08x %08x %08x %08x "
     "%08x %08x %08x %08x\n",
     (VAR_39 == VAR_11) ? "NVME" : "FCP",
     *VAR_47, *(VAR_47 + 1), *(VAR_47 + 2), *(VAR_47 + 3),
     *(VAR_47 + 4), *(VAR_47 + 5),
     *(VAR_47 + 6), *(VAR_47 + 7));
  VAR_46 = FUNC_12;
  break;
 }



 if (!FUNC_17(VAR_36, VAR_42, VAR_43, VAR_40, VAR_46, VAR_48, VAR_38)) {

  FUNC_18(VAR_36, VAR_19,
   "Issue CT cmd:    cmd:x%x did:x%x",
   VAR_37, VAR_40->nlp_DID, 0);
  return 0;
 }
 VAR_50=6;




 FUNC_22(VAR_40);

ns_cmd_free_bmpvirt:
 FUNC_21(VAR_41, VAR_43->virt, VAR_43->phys);
ns_cmd_free_bmp:
 FUNC_4(VAR_43);
ns_cmd_free_mpvirt:
 FUNC_21(VAR_41, VAR_42->virt, VAR_42->phys);
ns_cmd_free_mp:
 FUNC_4(VAR_42);
ns_cmd_exit:
 FUNC_25(VAR_36, VAR_16, VAR_18,
    "0266 Issue NameServer Req x%x err %d Data: x%x x%x\n",
    VAR_37, VAR_50, VAR_36->fc_flag, VAR_36->fc_rscn_id_cnt);
 return 1;
}
