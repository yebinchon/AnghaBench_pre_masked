
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_22__ {int vendorVersion; } ;
struct TYPE_17__ {scalar_t__ r_a_tov; } ;
struct TYPE_21__ {scalar_t__ valid_vendor_ver_level; scalar_t__ virtual_fabric_support; TYPE_4__ w2; scalar_t__ e_d_tov; } ;
struct TYPE_20__ {int seqDelivery; } ;
struct TYPE_19__ {int seqDelivery; } ;
struct TYPE_18__ {scalar_t__ classValid; } ;
struct serv_parm {TYPE_9__ un; TYPE_8__ cmn; TYPE_7__ cls3; TYPE_6__ cls2; TYPE_5__ cls1; } ;
struct lpfc_vport {int fc_nodename; int fc_portname; struct lpfc_hba* phba; scalar_t__ fc_myDID; int port_state; } ;
struct lpfc_nodelist {int nlp_DID; } ;
struct TYPE_14__ {int fl; scalar_t__ myID; } ;
struct TYPE_15__ {TYPE_1__ elsreq64; } ;
struct TYPE_13__ {int ulpCt_h; scalar_t__ ulpCt_l; TYPE_2__ un; } ;
struct lpfc_iocbq {int iocb_cmpl; scalar_t__ context2; TYPE_11__ iocb; } ;
struct TYPE_12__ {int elsXmitFDISC; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_10__ fc_stat; TYPE_3__* pport; } ;
struct lpfc_dmabuf {scalar_t__ virt; } ;
struct TYPE_16__ {int fc_sparam; } ;
typedef TYPE_11__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct lpfc_vport*,int ,char*,int,int ,int ) ;
 int FUNC_1 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 struct lpfc_iocbq* FUNC_3 (struct lpfc_vport*,int,int,int ,struct lpfc_nodelist*,int,int ) ;
 int FUNC_4 (struct lpfc_vport*,int ,int ,char*) ;
 int FUNC_5 (struct lpfc_vport*) ;
 int FUNC_6 (struct lpfc_vport*,int ) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_vport *VAR_10, struct lpfc_nodelist *VAR_11,
       uint8_t VAR_12)
{
 struct lpfc_hba *VAR_13 = VAR_10->phba;
 IOCB_t *VAR_14;
 struct lpfc_iocbq *VAR_15;
 struct serv_parm *VAR_16;
 uint8_t *VAR_17;
 uint16_t VAR_18;
 int VAR_19 = VAR_11->nlp_DID;
 int VAR_20;

 VAR_10->port_state = VAR_7;
 VAR_10->fc_myDID = 0;
 VAR_18 = (sizeof(uint32_t) + sizeof(struct serv_parm));
 VAR_15 = FUNC_3(VAR_10, 1, VAR_18, VAR_12, VAR_11, VAR_19,
         VAR_0);
 if (!VAR_15) {
  FUNC_6(VAR_10, VAR_1);
  FUNC_4(VAR_10, VAR_4, VAR_5,
     "0255 Issue FDISC: no IOCB\n");
  return 1;
 }

 VAR_14 = &VAR_15->iocb;
 VAR_14->un.elsreq64.myID = 0;
 VAR_14->un.elsreq64.fl = 1;





 if (VAR_13->sli_rev == VAR_8) {
  VAR_14->ulpCt_h = 1;
  VAR_14->ulpCt_l = 0;
 }

 VAR_17 = (uint8_t *) (((struct lpfc_dmabuf *) VAR_15->context2)->virt);
 *((uint32_t *) (VAR_17)) = VAR_0;
 VAR_17 += sizeof(uint32_t);
 FUNC_7(VAR_17, &VAR_10->phba->pport->fc_sparam, sizeof(struct serv_parm));
 VAR_16 = (struct serv_parm *) VAR_17;

 VAR_16->cmn.e_d_tov = 0;
 VAR_16->cmn.w2.r_a_tov = 0;
 VAR_16->cmn.virtual_fabric_support = 0;
 VAR_16->cls1.classValid = 0;
 VAR_16->cls2.seqDelivery = 1;
 VAR_16->cls3.seqDelivery = 1;

 VAR_17 += sizeof(uint32_t);
 VAR_17 += sizeof(uint32_t);
 VAR_17 += sizeof(uint32_t);
 VAR_17 += sizeof(uint32_t);
 FUNC_7(VAR_17, &VAR_10->fc_portname, 8);
 VAR_17 += sizeof(uint32_t);
 VAR_17 += sizeof(uint32_t);
 FUNC_7(VAR_17, &VAR_10->fc_nodename, 8);
 VAR_16->cmn.valid_vendor_ver_level = 0;
 FUNC_8(VAR_16->un.vendorVersion, 0, sizeof(VAR_16->un.vendorVersion));
 FUNC_5(VAR_10);

 VAR_13->fc_stat.elsXmitFDISC++;
 VAR_15->iocb_cmpl = VAR_9;

 FUNC_0(VAR_10, VAR_6,
  "Issue FDISC:     did:x%x",
  VAR_19, 0, 0);

 VAR_20 = FUNC_2(VAR_13, VAR_15);
 if (VAR_20 == VAR_3) {
  FUNC_1(VAR_13, VAR_15);
  FUNC_6(VAR_10, VAR_1);
  FUNC_4(VAR_10, VAR_4, VAR_5,
     "0256 Issue FDISC: Cannot send IOCB\n");
  return 1;
 }
 FUNC_6(VAR_10, VAR_2);
 return 0;
}
