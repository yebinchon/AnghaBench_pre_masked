
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int uint32_t ;
typedef int u64 ;
struct scsi_cmnd {int result; int* cmnd; unsigned char* host_scribble; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_13__* request; TYPE_10__* device; } ;
struct lpfc_vport {int fc_myDID; struct lpfc_hba* phba; } ;
struct TYPE_20__ {int control_requests; int input_requests; int output_requests; } ;
struct lpfc_sli4_hdw_queue {TYPE_4__ scsi_cstat; int * cpucheck_xmt_io; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct TYPE_24__ {int * wwn; } ;
struct TYPE_25__ {TYPE_8__ u; } ;
struct TYPE_22__ {int * wwn; } ;
struct TYPE_23__ {TYPE_6__ u; } ;
struct lpfc_nodelist {scalar_t__ cmd_qdepth; int nlp_DID; TYPE_9__ nlp_portname; TYPE_7__ nlp_nodename; int cmd_pending; int nlp_sid; } ;
struct TYPE_17__ {int ulpTimeout; int ulpIoTag; int ulpContext; } ;
struct TYPE_15__ {int sli4_xritag; TYPE_1__ iocb; } ;
struct lpfc_io_buf {size_t hdwq_no; TYPE_3__* fcp_cmnd; TYPE_11__ cur_iocbq; struct lpfc_nodelist* ndlp; struct lpfc_rport_data* rdata; struct scsi_cmnd* pCmd; } ;
struct TYPE_21__ {struct lpfc_sli4_hdw_queue* hdwq; } ;
struct TYPE_18__ {int * sli3_ring; } ;
struct lpfc_hba {int sli3_options; int cpucheck_on; scalar_t__ sli_rev; int cfg_poll; TYPE_5__ sli4_hba; scalar_t__ cfg_xri_rebalancing; TYPE_2__ sli; scalar_t__ cfg_enable_bg; } ;
struct fc_rport {int dummy; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
struct TYPE_19__ {int fcpCntl3; } ;
struct TYPE_16__ {int timeout; } ;
struct TYPE_14__ {int id; int lun; } ;


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
 size_t VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct lpfc_nodelist*) ;

 int VAR_15 ;
 int VAR_16 ;
 size_t VAR_17 ;
 int VAR_18 ;

 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_13__*) ;
 int * VAR_19 ;
 int FUNC_3 (struct fc_rport*) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 struct lpfc_io_buf* FUNC_5 (struct lpfc_hba*,struct lpfc_nodelist*,struct scsi_cmnd*) ;
 int FUNC_6 (struct lpfc_hba*,size_t) ;
 scalar_t__ FUNC_7 (struct lpfc_hba*,struct lpfc_nodelist*) ;
 int FUNC_8 (struct lpfc_hba*) ;
 int FUNC_9 (struct lpfc_hba*,int ,int ,char*,int,size_t,int ) ;
 int FUNC_10 (struct lpfc_vport*,int ,int ,char*,...) ;
 int FUNC_11 (struct lpfc_hba*) ;
 int FUNC_12 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 struct lpfc_rport_data* FUNC_13 (TYPE_10__*) ;
 int FUNC_14 (struct lpfc_vport*,struct lpfc_io_buf*,struct lpfc_nodelist*) ;
 int FUNC_15 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_16 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_17 (struct lpfc_hba*,int *,int ) ;
 int FUNC_18 (struct lpfc_hba*,size_t,TYPE_11__*,int ) ;
 int FUNC_19 () ;
 scalar_t__ FUNC_20 (struct scsi_cmnd*) ;
 size_t FUNC_21 (struct scsi_cmnd*) ;
 int FUNC_22 (TYPE_10__*) ;
 struct fc_rport* FUNC_23 (int ) ;
 int FUNC_24 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_25 (int) ;

__attribute__((used)) static int
FUNC_26(struct Scsi_Host *VAR_20, struct scsi_cmnd *VAR_21)
{
 struct lpfc_vport *VAR_22 = (struct lpfc_vport *) VAR_20->hostdata;
 struct lpfc_hba *VAR_23 = VAR_22->phba;
 struct lpfc_rport_data *VAR_24;
 struct lpfc_nodelist *VAR_25;
 struct lpfc_io_buf *VAR_26;
 struct fc_rport *VAR_27 = FUNC_23(FUNC_22(VAR_21->device));
 int VAR_28, VAR_29;




 VAR_24 = FUNC_13(VAR_21->device);


 if (FUNC_25(!VAR_24) || FUNC_25(!VAR_27))
  goto out_fail_command;

 VAR_28 = FUNC_3(VAR_27);
 if (VAR_28) {
  VAR_21->result = VAR_28;
  goto out_fail_command;
 }
 VAR_25 = VAR_24->pnode;

 if ((FUNC_21(VAR_21) != VAR_17) &&
  (!(VAR_23->sli3_options & VAR_13))) {

  FUNC_9(VAR_23, VAR_4, VAR_6,
    "9058 BLKGRD: ERROR: rcvd protected cmd:%02x"
    " op:%02x str=%s without registering for"
    " BlockGuard - Rejecting command\n",
    VAR_21->cmnd[0], FUNC_21(VAR_21),
    VAR_19[FUNC_21(VAR_21)]);
  goto out_fail_command;
 }





 if (!VAR_25 || !FUNC_0(VAR_25))
  goto out_tgt_busy;
 if (FUNC_7(VAR_23, VAR_25)) {
  if (FUNC_1(&VAR_25->cmd_pending) >= VAR_25->cmd_qdepth) {
   FUNC_10(VAR_22, VAR_5, VAR_8,
      "3377 Target Queue Full, scsi Id:%d "
      "Qdepth:%d Pending command:%d"
      " WWNN:%02x:%02x:%02x:%02x:"
      "%02x:%02x:%02x:%02x, "
      " WWPN:%02x:%02x:%02x:%02x:"
      "%02x:%02x:%02x:%02x",
      VAR_25->nlp_sid, VAR_25->cmd_qdepth,
      FUNC_1(&VAR_25->cmd_pending),
      VAR_25->nlp_nodename.u.wwn[0],
      VAR_25->nlp_nodename.u.wwn[1],
      VAR_25->nlp_nodename.u.wwn[2],
      VAR_25->nlp_nodename.u.wwn[3],
      VAR_25->nlp_nodename.u.wwn[4],
      VAR_25->nlp_nodename.u.wwn[5],
      VAR_25->nlp_nodename.u.wwn[6],
      VAR_25->nlp_nodename.u.wwn[7],
      VAR_25->nlp_portname.u.wwn[0],
      VAR_25->nlp_portname.u.wwn[1],
      VAR_25->nlp_portname.u.wwn[2],
      VAR_25->nlp_portname.u.wwn[3],
      VAR_25->nlp_portname.u.wwn[4],
      VAR_25->nlp_portname.u.wwn[5],
      VAR_25->nlp_portname.u.wwn[6],
      VAR_25->nlp_portname.u.wwn[7]);
   goto out_tgt_busy;
  }
 }

 VAR_26 = FUNC_5(VAR_23, VAR_25, VAR_21);
 if (VAR_26 == ((void*)0)) {
  FUNC_11(VAR_23);

  FUNC_10(VAR_22, VAR_5, VAR_8,
     "0707 driver's buffer pool is empty, "
     "IO busied\n");
  goto out_host_busy;
 }





 VAR_26->pCmd = VAR_21;
 VAR_26->rdata = VAR_24;
 VAR_26->ndlp = VAR_25;
 VAR_21->host_scribble = (unsigned char *)VAR_26;

 if (FUNC_21(VAR_21) != VAR_17) {
  if (VAR_22->phba->cfg_enable_bg) {
   FUNC_10(VAR_22,
      VAR_5, VAR_9,
      "9033 BLKGRD: rcvd %s cmd:x%x "
      "sector x%llx cnt %u pt %x\n",
      VAR_19[FUNC_21(VAR_21)],
      VAR_21->cmnd[0],
      (unsigned long long)FUNC_20(VAR_21),
      FUNC_2(VAR_21->request),
      (VAR_21->cmnd[1]>>5));
  }
  VAR_28 = FUNC_4(VAR_23, VAR_26);
 } else {
  if (VAR_22->phba->cfg_enable_bg) {
   FUNC_10(VAR_22,
      VAR_5, VAR_9,
      "9038 BLKGRD: rcvd PROT_NORMAL cmd: "
      "x%x sector x%llx cnt %u pt %x\n",
      VAR_21->cmnd[0],
      (unsigned long long)FUNC_20(VAR_21),
      FUNC_2(VAR_21->request),
      (VAR_21->cmnd[1]>>5));
  }
  VAR_28 = FUNC_15(VAR_23, VAR_26);
 }

 if (VAR_28 == 2) {
  VAR_21->result = VAR_0 << 16;
  goto out_fail_command_release_buf;
 } else if (VAR_28) {
  goto out_host_busy_free_buf;
 }

 FUNC_14(VAR_22, VAR_26, VAR_25);
 VAR_28 = FUNC_18(VAR_23, VAR_12,
      &VAR_26->cur_iocbq, VAR_18);
 if (VAR_28) {
  FUNC_10(VAR_22, VAR_5, VAR_7,
     "3376 FCP could not issue IOCB err %x"
     "FCP cmd x%x <%d/%llu> "
     "sid: x%x did: x%x oxid: x%x "
     "Data: x%x x%x x%x x%x\n",
     VAR_28, VAR_21->cmnd[0],
     VAR_21->device ? VAR_21->device->id : 0xffff,
     VAR_21->device ? VAR_21->device->lun : (u64) -1,
     VAR_22->fc_myDID, VAR_25->nlp_DID,
     VAR_23->sli_rev == VAR_14 ?
     VAR_26->cur_iocbq.sli4_xritag : 0xffff,
     VAR_26->cur_iocbq.iocb.ulpContext,
     VAR_26->cur_iocbq.iocb.ulpIoTag,
     VAR_26->cur_iocbq.iocb.ulpTimeout,
     (uint32_t)
     (VAR_21->request->timeout / 1000));

  goto out_host_busy_free_buf;
 }
 if (VAR_23->cfg_poll & VAR_2) {
  FUNC_17(VAR_23,
   &VAR_23->sli.sli3_ring[VAR_12], VAR_3);

  if (VAR_23->cfg_poll & VAR_1)
   FUNC_8(VAR_23);
 }

 if (VAR_23->cfg_xri_rebalancing)
  FUNC_6(VAR_23, VAR_26->hdwq_no);

 return 0;

 out_host_busy_free_buf:
 VAR_29 = VAR_26->hdwq_no;
 FUNC_16(VAR_23, VAR_26);
 if (VAR_23->sli4_hba.hdwq) {
  switch (VAR_26->fcp_cmnd->fcpCntl3) {
  case 128:
   VAR_23->sli4_hba.hdwq[VAR_29].scsi_cstat.output_requests--;
   break;
  case 129:
   VAR_23->sli4_hba.hdwq[VAR_29].scsi_cstat.input_requests--;
   break;
  default:
   VAR_23->sli4_hba.hdwq[VAR_29].scsi_cstat.control_requests--;
  }
 }
 FUNC_12(VAR_23, VAR_26);
 out_host_busy:
 return VAR_15;

 out_tgt_busy:
 return VAR_16;

 out_fail_command_release_buf:
 FUNC_12(VAR_23, VAR_26);

 out_fail_command:
 VAR_21->scsi_done(VAR_21);
 return 0;
}
