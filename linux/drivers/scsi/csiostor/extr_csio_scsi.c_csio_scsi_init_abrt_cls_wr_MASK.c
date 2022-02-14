
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct fw_scsi_abrt_cls_wr {uintptr_t cookie; int sub_opcode_to_chk_all_io; uintptr_t t_cookie; scalar_t__* r3; scalar_t__ tmo_val; int iqid; void* flowid_len16; void* op_immdlen; } ;
struct csio_rnode {int flowid; } ;
struct csio_ioreq {scalar_t__ tmo; int iq_idx; struct csio_rnode* rnode; TYPE_1__* lnode; } ;
struct csio_hw {int dummy; } ;
struct TYPE_2__ {struct csio_hw* hwp; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (struct csio_hw*,int ) ;

__attribute__((used)) static inline void
FUNC_9(struct csio_ioreq *VAR_1, void *VAR_2, uint32_t VAR_3,
      bool VAR_4)
{
 struct csio_hw *VAR_5 = VAR_1->lnode->hwp;
 struct csio_rnode *VAR_6 = VAR_1->rnode;
 struct fw_scsi_abrt_cls_wr *VAR_7 = (struct fw_scsi_abrt_cls_wr *)VAR_2;

 VAR_7->op_immdlen = FUNC_7(FUNC_5(VAR_0));
 VAR_7->flowid_len16 = FUNC_7(FUNC_3(VAR_6->flowid) |
         FUNC_4(
      FUNC_0(VAR_3, 16)));

 VAR_7->cookie = (uintptr_t) VAR_1;
 VAR_7->iqid = FUNC_6(FUNC_8(VAR_5, VAR_1->iq_idx));
 VAR_7->tmo_val = (uint8_t) VAR_1->tmo;

 VAR_7->sub_opcode_to_chk_all_io =
    (FUNC_2(VAR_4) |
     FUNC_1(0));
 VAR_7->r3[0] = 0;
 VAR_7->r3[1] = 0;
 VAR_7->r3[2] = 0;
 VAR_7->r3[3] = 0;

 VAR_7->t_cookie = (uintptr_t) VAR_1;
}
