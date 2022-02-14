
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_7__ {void* opaque; scalar_t__* reserved_zero; } ;
struct TYPE_8__ {TYPE_3__ iscsi_opaque; } ;
struct TYPE_6__ {void* lo; void* hi; } ;
struct scsi_bd {TYPE_4__ opaque; TYPE_2__ address; } ;
struct qedi_ctx {int bdq_prod_idx; int rq_num_entries; int bdq_secondary_prod; int bdq_primary_prod; int dbg_ctx; TYPE_1__* bdq; scalar_t__ bdq_pbl; } ;
struct iscsi_cqe_unsolicited {int rqe_opaque; } ;
struct TYPE_5__ {int buf_dma; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct qedi_ctx *VAR_2,
    struct iscsi_cqe_unsolicited *VAR_3,
    int VAR_4)
{
 u16 VAR_5;
 u16 VAR_6 = 0;
 struct scsi_bd *VAR_7;


 VAR_6 = VAR_3->rqe_opaque;
 if (VAR_6 > (VAR_0 - 1)) {
  FUNC_0(&VAR_2->dbg_ctx, VAR_1,
     "wrong idx %d returned by FW, dropping the unsolicited pkt\n",
     VAR_6);
  return;
 }

 VAR_7 = (struct scsi_bd *)VAR_2->bdq_pbl;
 VAR_7 += (VAR_2->bdq_prod_idx % VAR_2->rq_num_entries);
 VAR_7->address.hi = FUNC_3(FUNC_1(VAR_2->bdq[VAR_6].buf_dma));
 VAR_7->address.lo = FUNC_3(FUNC_2(VAR_2->bdq[VAR_6].buf_dma));
 FUNC_0(&VAR_2->dbg_ctx, VAR_1,
    "pbl [0x%p] pbl->address hi [0x%llx] lo [0x%llx] idx [%d]\n",
    VAR_7, VAR_7->address.hi, VAR_7->address.lo, VAR_6);
 VAR_7->opaque.iscsi_opaque.reserved_zero[0] = 0;
 VAR_7->opaque.iscsi_opaque.reserved_zero[1] = 0;
 VAR_7->opaque.iscsi_opaque.reserved_zero[2] = 0;
 VAR_7->opaque.iscsi_opaque.opaque = FUNC_3(VAR_6);


 VAR_2->bdq_prod_idx += VAR_4;

 FUNC_5(VAR_2->bdq_prod_idx, VAR_2->bdq_primary_prod);
 VAR_5 = FUNC_4(VAR_2->bdq_primary_prod);

 FUNC_5(VAR_2->bdq_prod_idx, VAR_2->bdq_secondary_prod);
 VAR_5 = FUNC_4(VAR_2->bdq_secondary_prod);
}
