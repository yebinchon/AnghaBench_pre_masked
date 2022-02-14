
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct ulptx_sgl {int dummy; } ;
struct scsi_cmnd {int dummy; } ;
struct TYPE_6__ {scalar_t__* r3_lo; scalar_t__ cp_en_class; scalar_t__ ctl_pri; } ;
struct TYPE_7__ {TYPE_2__ fcoe; } ;
struct fw_scsi_read_wr {uintptr_t cookie; int use_xfer_cnt; TYPE_3__ u; scalar_t__ r4; int rsp_dmaaddr; void* rsp_dmalen; void* ini_xfer_cnt; void* xfer_cnt; scalar_t__ tmo_val; int iqid; void* flowid_len16; void* op_immdlen; } ;
struct csio_rnode {int flowid; } ;
struct csio_dma_buf {int len; int paddr; } ;
struct csio_ioreq {struct csio_dma_buf dma_buf; scalar_t__ tmo; int iq_idx; struct csio_rnode* rnode; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
struct TYPE_8__ {scalar_t__ proto_cmd_len; } ;
struct TYPE_5__ {struct csio_hw* hwp; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (struct csio_hw*) ;
 int FUNC_10 (struct csio_hw*,int ) ;
 struct scsi_cmnd* FUNC_11 (struct csio_ioreq*) ;
 int FUNC_12 (struct csio_ioreq*,void*) ;
 int FUNC_13 (struct csio_hw*,struct csio_ioreq*,struct ulptx_sgl*) ;
 int FUNC_14 (struct scsi_cmnd*) ;

__attribute__((used)) static inline void
FUNC_15(struct csio_ioreq *VAR_1, void *VAR_2, uint32_t VAR_3)
{
 struct csio_hw *VAR_4 = VAR_1->lnode->hwp;
 struct csio_rnode *VAR_5 = VAR_1->rnode;
 struct fw_scsi_read_wr *VAR_6 = (struct fw_scsi_read_wr *)VAR_2;
 struct ulptx_sgl *VAR_7;
 struct csio_dma_buf *VAR_8;
 uint8_t VAR_9 = FUNC_9(VAR_4)->proto_cmd_len;
 struct scsi_cmnd *VAR_10 = FUNC_11(VAR_1);

 VAR_6->op_immdlen = FUNC_7(FUNC_5(VAR_0) |
         FUNC_2(VAR_9));
 VAR_6->flowid_len16 = FUNC_7(FUNC_3(VAR_5->flowid) |
           FUNC_4(FUNC_1(VAR_3, 16)));
 VAR_6->cookie = (uintptr_t)VAR_1;
 VAR_6->iqid = FUNC_6(FUNC_10(VAR_4, VAR_1->iq_idx));
 VAR_6->tmo_val = (uint8_t)(VAR_1->tmo);
 VAR_6->use_xfer_cnt = 1;
 VAR_6->xfer_cnt = FUNC_7(FUNC_14(VAR_10));
 VAR_6->ini_xfer_cnt = FUNC_7(FUNC_14(VAR_10));

 VAR_8 = &VAR_1->dma_buf;


 VAR_6->rsp_dmalen = FUNC_7(VAR_8->len);
 VAR_6->rsp_dmaaddr = FUNC_8(VAR_8->paddr);

 VAR_6->r4 = 0;

 VAR_6->u.fcoe.ctl_pri = 0;
 VAR_6->u.fcoe.cp_en_class = 0;
 VAR_6->u.fcoe.r3_lo[0] = 0;
 VAR_6->u.fcoe.r3_lo[1] = 0;
 FUNC_12(VAR_1, (void *)((uintptr_t)VAR_2 +
     sizeof(struct fw_scsi_read_wr)));


 VAR_7 = (struct ulptx_sgl *)((uintptr_t)VAR_2 +
         sizeof(struct fw_scsi_read_wr) + FUNC_0(VAR_9, 16));


 FUNC_13(VAR_4, VAR_1, VAR_7);
}
