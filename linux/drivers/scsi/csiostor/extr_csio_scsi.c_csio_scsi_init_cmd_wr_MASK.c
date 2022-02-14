
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
struct TYPE_6__ {scalar_t__* r4_lo; scalar_t__ cp_en_class; scalar_t__ ctl_pri; } ;
struct TYPE_7__ {TYPE_2__ fcoe; } ;
struct fw_scsi_cmd_wr {uintptr_t cookie; TYPE_3__ u; scalar_t__ r6; int rsp_dmaaddr; void* rsp_dmalen; int r5; scalar_t__ r3; scalar_t__ tmo_val; int iqid; void* flowid_len16; void* op_immdlen; } ;
struct csio_rnode {int flowid; } ;
struct csio_dma_buf {int len; int paddr; } ;
struct csio_ioreq {struct csio_dma_buf dma_buf; scalar_t__ tmo; int iq_idx; struct csio_rnode* rnode; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
struct TYPE_8__ {scalar_t__ proto_cmd_len; } ;
struct TYPE_5__ {struct csio_hw* hwp; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 TYPE_4__* FUNC_8 (struct csio_hw*) ;
 int FUNC_9 (struct csio_hw*,int ) ;
 int FUNC_10 (struct csio_ioreq*,void*) ;
 int FUNC_11 (int *,int ,int) ;

__attribute__((used)) static inline void
FUNC_12(struct csio_ioreq *VAR_1, void *VAR_2, uint32_t VAR_3)
{
 struct csio_hw *VAR_4 = VAR_1->lnode->hwp;
 struct csio_rnode *VAR_5 = VAR_1->rnode;
 struct fw_scsi_cmd_wr *VAR_6 = (struct fw_scsi_cmd_wr *)VAR_2;
 struct csio_dma_buf *VAR_7;
 uint8_t VAR_8 = FUNC_8(VAR_4)->proto_cmd_len;

 VAR_6->op_immdlen = FUNC_6(FUNC_4(VAR_0) |
       FUNC_1(VAR_8));
 VAR_6->flowid_len16 = FUNC_6(FUNC_2(VAR_5->flowid) |
         FUNC_3(
      FUNC_0(VAR_3, 16)));

 VAR_6->cookie = (uintptr_t) VAR_1;
 VAR_6->iqid = FUNC_5(FUNC_9(VAR_4, VAR_1->iq_idx));
 VAR_6->tmo_val = (uint8_t) VAR_1->tmo;
 VAR_6->r3 = 0;
 FUNC_11(&VAR_6->r5, 0, 8);


 VAR_7 = &VAR_1->dma_buf;


 VAR_6->rsp_dmalen = FUNC_6(VAR_7->len);
 VAR_6->rsp_dmaaddr = FUNC_7(VAR_7->paddr);

 VAR_6->r6 = 0;

 VAR_6->u.fcoe.ctl_pri = 0;
 VAR_6->u.fcoe.cp_en_class = 0;
 VAR_6->u.fcoe.r4_lo[0] = 0;
 VAR_6->u.fcoe.r4_lo[1] = 0;


 FUNC_10(VAR_1, (void *)((uintptr_t)VAR_2 +
        sizeof(struct fw_scsi_cmd_wr)));
}
