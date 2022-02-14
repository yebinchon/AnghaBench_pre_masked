
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct fw_fcoe_els_ct_wr {int rsp_dmaaddr; void* rsp_dmalen; int r_id; int l_id; void* tmo_val; int fl_to_sp; int iqid; int cookie; scalar_t__ cp_en_class; scalar_t__ ctl_pri; void* els_ct_type; void* flowid_len16; void* op_immdlen; } ;
struct TYPE_4__ {int len; int paddr; } ;
struct csio_ioreq {TYPE_2__ dma_buf; scalar_t__ tmo; int iq_idx; TYPE_1__* lnode; int fw_handle; } ;
typedef int __be32 ;
struct TYPE_3__ {int hwp; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_13(struct csio_ioreq *VAR_1, uint32_t VAR_2,
        uint32_t VAR_3, uint8_t VAR_4, uint32_t VAR_5,
        uint32_t VAR_6, uint32_t VAR_7, uint8_t *VAR_8)
{
 struct fw_fcoe_els_ct_wr *VAR_9;
 __be32 VAR_10;

 VAR_9 = (struct fw_fcoe_els_ct_wr *)VAR_8;
 VAR_9->op_immdlen = FUNC_8(FUNC_5(VAR_0) |
         FUNC_1(VAR_3));

 VAR_2 = FUNC_0(VAR_2, 16);
 VAR_9->flowid_len16 = FUNC_8(FUNC_3(VAR_7) |
           FUNC_4(VAR_2));
 VAR_9->els_ct_type = VAR_4;
 VAR_9->ctl_pri = 0;
 VAR_9->cp_en_class = 0;
 VAR_9->cookie = VAR_1->fw_handle;
 VAR_9->iqid = FUNC_7(FUNC_10(
     VAR_1->lnode->hwp, VAR_1->iq_idx));
 VAR_9->fl_to_sp = FUNC_2(1);
 VAR_9->tmo_val = (uint8_t) VAR_1->tmo;
 VAR_10 = FUNC_11(VAR_5);
 FUNC_12(VAR_9->l_id, FUNC_6(VAR_10), 3);
 VAR_10 = FUNC_11(VAR_6);
 FUNC_12(VAR_9->r_id, FUNC_6(VAR_10), 3);


 VAR_9->rsp_dmalen = FUNC_8(VAR_1->dma_buf.len);
 VAR_9->rsp_dmaaddr = FUNC_9(VAR_1->dma_buf.paddr);
 return 0;
}
