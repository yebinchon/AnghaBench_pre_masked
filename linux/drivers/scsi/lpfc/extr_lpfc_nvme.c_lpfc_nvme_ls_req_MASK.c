
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {int bdeSize; scalar_t__ bdeFlags; } ;
struct TYPE_4__ {void* w; TYPE_1__ f; } ;
struct ulp_bde64 {TYPE_2__ tus; void* addrLow; void* addrHigh; } ;
struct nvmefc_ls_req {int rqstaddr; int rspdma; int rqstdma; int rsplen; int rqstlen; } ;
struct nvme_fc_remote_port {int port_id; scalar_t__ private; } ;
struct nvme_fc_local_port {scalar_t__ private; } ;
struct lpfc_vport {int load_flag; int phba; } ;
struct lpfc_nvme_rport {struct lpfc_nodelist* ndlp; } ;
struct lpfc_nvme_lport {int xmt_ls_err; int fc4NvmeLsRequests; struct lpfc_vport* vport; } ;
struct lpfc_nodelist {scalar_t__ nlp_type; scalar_t__ nlp_state; int nlp_DID; } ;
struct lpfc_dmabuf {int phys; scalar_t__ virt; int list; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct lpfc_nodelist*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct lpfc_dmabuf*) ;
 struct lpfc_dmabuf* FUNC_4 (int,int ) ;
 void* FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int VAR_16 ;
 int FUNC_8 (struct lpfc_vport*,struct lpfc_dmabuf*,int ,struct nvmefc_ls_req*,int ,struct lpfc_nodelist*,int,int,int ) ;
 int FUNC_9 (struct lpfc_vport*,int ,int,char*,...) ;
 void* FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13(struct nvme_fc_local_port *VAR_17,
   struct nvme_fc_remote_port *VAR_18,
   struct nvmefc_ls_req *VAR_19)
{
 int VAR_20 = 0;
 struct lpfc_nvme_lport *VAR_21;
 struct lpfc_nvme_rport *VAR_22;
 struct lpfc_vport *VAR_23;
 struct lpfc_nodelist *VAR_24;
 struct ulp_bde64 *VAR_25;
 struct lpfc_dmabuf *VAR_26;
 uint16_t VAR_27, VAR_28;
 VAR_21 = (struct lpfc_nvme_lport *)VAR_17->private;
 VAR_22 = (struct lpfc_nvme_rport *)VAR_18->private;
 if (FUNC_12(!VAR_21) || FUNC_12(!VAR_22))
  return -VAR_1;

 VAR_23 = VAR_21->vport;

 if (VAR_23->load_flag & VAR_3)
  return -VAR_2;


 VAR_24 = VAR_22->ndlp;
 if (!VAR_24 || !FUNC_1(VAR_24)) {
  FUNC_9(VAR_23, VAR_5, VAR_7 | VAR_9,
     "6051 Remoteport x%px, rport has invalid ndlp. "
     "Failing LS Req\n", VAR_18);
  return -VAR_2;
 }




 VAR_27 = VAR_24->nlp_type;
 VAR_28 = VAR_24->nlp_state;
 if ((VAR_27 & VAR_12 && VAR_28 != VAR_13) ||
     (VAR_27 & VAR_11 && VAR_28 != VAR_14)) {
  FUNC_9(VAR_23, VAR_5, VAR_7 | VAR_9,
     "6088 DID x%06x not ready for "
     "IO. State x%x, Type x%x\n",
     VAR_18->port_id,
     VAR_24->nlp_state, VAR_24->nlp_type);
  return -VAR_2;
 }
 VAR_26 = FUNC_4(sizeof(struct lpfc_dmabuf), VAR_4);
 if (!VAR_26) {

  FUNC_9(VAR_23, VAR_5, VAR_8,
     "6044 Could not find node for DID %x\n",
     VAR_18->port_id);
  return 2;
 }
 FUNC_0(&VAR_26->list);
 VAR_26->virt = FUNC_6(VAR_23->phba, VAR_10, &(VAR_26->phys));
 if (!VAR_26->virt) {
  FUNC_9(VAR_23, VAR_5, VAR_8,
     "6042 Could not find node for DID %x\n",
     VAR_18->port_id);
  FUNC_3(VAR_26);
  return 3;
 }
 VAR_25 = (struct ulp_bde64 *)VAR_26->virt;
 VAR_25->addrHigh = FUNC_5(FUNC_10(VAR_19->rqstdma));
 VAR_25->addrLow = FUNC_5(FUNC_11(VAR_19->rqstdma));
 VAR_25->tus.f.bdeFlags = 0;
 VAR_25->tus.f.bdeSize = VAR_19->rqstlen;
 VAR_25->tus.w = FUNC_5(VAR_25->tus.w);
 VAR_25++;

 VAR_25->addrHigh = FUNC_5(FUNC_10(VAR_19->rspdma));
 VAR_25->addrLow = FUNC_5(FUNC_11(VAR_19->rspdma));
 VAR_25->tus.f.bdeFlags = VAR_0;
 VAR_25->tus.f.bdeSize = VAR_19->rsplen;
 VAR_25->tus.w = FUNC_5(VAR_25->tus.w);


 FUNC_9(VAR_23, VAR_6, VAR_8,
    "6149 Issue LS Req to DID 0x%06x lport x%px, "
    "rport x%px lsreq x%px rqstlen:%d rsplen:%d "
    "%pad %pad\n",
    VAR_24->nlp_DID, VAR_17, VAR_18,
    VAR_19, VAR_19->rqstlen,
    VAR_19->rsplen, &VAR_19->rqstdma,
    &VAR_19->rspdma);

 FUNC_2(&VAR_21->fc4NvmeLsRequests);




 VAR_20 = FUNC_8(VAR_23, VAR_26, VAR_19->rqstaddr,
    VAR_19, VAR_16,
    VAR_24, 2, 30, 0);
 if (VAR_20 != VAR_15) {
  FUNC_2(&VAR_21->xmt_ls_err);
  FUNC_9(VAR_23, VAR_5, VAR_8,
     "6052 EXIT. issue ls wqe failed lport x%px, "
     "rport x%px lsreq x%px Status %x DID %x\n",
     VAR_17, VAR_18, VAR_19,
     VAR_20, VAR_24->nlp_DID);
  FUNC_7(VAR_23->phba, VAR_26->virt, VAR_26->phys);
  FUNC_3(VAR_26);
  return VAR_20;
 }


 return VAR_20;
}
