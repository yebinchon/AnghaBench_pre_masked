
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_8__ {int opaque; scalar_t__* reserved_zero; } ;
struct TYPE_9__ {TYPE_3__ iscsi_opaque; } ;
struct TYPE_7__ {void* lo; void* hi; } ;
struct scsi_bd {TYPE_4__ opaque; TYPE_2__ address; } ;
struct qedi_ctx {int bdq_pbl_mem_size; int rq_num_entries; int bdq_pbl_dma; int bdq_pbl_list_dma; int bdq_pbl_list_num_entries; void* bdq_pbl_list; int dbg_ctx; TYPE_5__* pdev; TYPE_1__* bdq; void* bdq_pbl; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {int dev; } ;
struct TYPE_6__ {int buf_dma; void* buf_addr; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 void* FUNC_7 (int *,int,int*,int ) ;

__attribute__((used)) static int FUNC_8(struct qedi_ctx *VAR_6)
{
 int VAR_7;
 struct scsi_bd *VAR_8;
 u64 *VAR_9;
 dma_addr_t VAR_10;


 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6->bdq[VAR_7].buf_addr =
    FUNC_7(&VAR_6->pdev->dev,
         VAR_2,
         &VAR_6->bdq[VAR_7].buf_dma,
         VAR_1);
  if (!VAR_6->bdq[VAR_7].buf_addr) {
   FUNC_1(&VAR_6->dbg_ctx,
     "Could not allocate BDQ buffer %d.\n", VAR_7);
   return -VAR_0;
  }
 }


 VAR_6->bdq_pbl_mem_size = VAR_3 * sizeof(struct scsi_bd);
 VAR_6->bdq_pbl_mem_size = FUNC_0(VAR_6->bdq_pbl_mem_size, VAR_5);
 VAR_6->rq_num_entries = VAR_6->bdq_pbl_mem_size / sizeof(struct scsi_bd);

 FUNC_2(&VAR_6->dbg_ctx, VAR_4, "rq_num_entries = %d.\n",
    VAR_6->rq_num_entries);

 VAR_6->bdq_pbl = FUNC_7(&VAR_6->pdev->dev,
        VAR_6->bdq_pbl_mem_size,
        &VAR_6->bdq_pbl_dma, VAR_1);
 if (!VAR_6->bdq_pbl) {
  FUNC_1(&VAR_6->dbg_ctx, "Could not allocate BDQ PBL.\n");
  return -VAR_0;
 }





 VAR_8 = (struct scsi_bd *)VAR_6->bdq_pbl;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_8->address.hi =
    FUNC_6(FUNC_3(VAR_6->bdq[VAR_7].buf_dma));
  VAR_8->address.lo =
    FUNC_6(FUNC_4(VAR_6->bdq[VAR_7].buf_dma));
  FUNC_2(&VAR_6->dbg_ctx, VAR_4,
     "pbl [0x%p] pbl->address hi [0x%llx] lo [0x%llx], idx [%d]\n",
     VAR_8, VAR_8->address.hi, VAR_8->address.lo, VAR_7);
  VAR_8->opaque.iscsi_opaque.reserved_zero[0] = 0;
  VAR_8->opaque.iscsi_opaque.reserved_zero[1] = 0;
  VAR_8->opaque.iscsi_opaque.reserved_zero[2] = 0;
  VAR_8->opaque.iscsi_opaque.opaque = FUNC_5(VAR_7);
  VAR_8++;
 }


 VAR_6->bdq_pbl_list = FUNC_7(&VAR_6->pdev->dev,
      VAR_5,
      &VAR_6->bdq_pbl_list_dma,
      VAR_1);
 if (!VAR_6->bdq_pbl_list) {
  FUNC_1(&VAR_6->dbg_ctx,
    "Could not allocate list of PBL pages.\n");
  return -VAR_0;
 }





 VAR_6->bdq_pbl_list_num_entries = VAR_6->bdq_pbl_mem_size /
      VAR_5;
 VAR_9 = (u64 *)VAR_6->bdq_pbl_list;
 VAR_10 = VAR_6->bdq_pbl_list_dma;
 for (VAR_7 = 0; VAR_7 < VAR_6->bdq_pbl_list_num_entries; VAR_7++) {
  *VAR_9 = VAR_6->bdq_pbl_dma;
  VAR_9++;
  VAR_10 += VAR_5;
 }

 return 0;
}
