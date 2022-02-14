
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int done; } ;
struct TYPE_9__ {int send_flags; scalar_t__ num_sge; TYPE_1__* wr_cqe; int opcode; } ;
struct ib_reg_wr {int key; int access; TYPE_4__ wr; TYPE_3__* mr; } ;
struct smbd_mr {int need_invalidate; int sgl_count; int dir; int state; int * sgl; TYPE_3__* mr; TYPE_1__ cqe; struct ib_reg_wr wr; } ;
struct smbd_connection {int max_frmr_depth; int wait_for_mr_cleanup; int mr_used_count; TYPE_2__* id; } ;
struct page {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_8__ {int rkey; } ;
struct TYPE_7__ {int device; int qp; } ;


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
 scalar_t__ FUNC_0 (int *) ;
 struct smbd_mr* FUNC_1 (struct smbd_connection*) ;
 int FUNC_2 (int ,int *,int,int) ;
 int FUNC_3 (int ,int *,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_3__*,int *,int,int *,int) ;
 int FUNC_6 (int ,TYPE_4__*,int *) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int VAR_11 ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,struct page*,int,int) ;
 int FUNC_11 (struct smbd_connection*) ;
 int FUNC_12 (int *) ;

struct smbd_mr *FUNC_13(
 struct smbd_connection *VAR_12, struct page *VAR_13[], int VAR_14,
 int VAR_15, int VAR_16, bool VAR_17, bool VAR_18)
{
 struct smbd_mr *VAR_19;
 int VAR_20, VAR_21;
 enum dma_data_direction VAR_22;
 struct ib_reg_wr *VAR_23;

 if (VAR_14 > VAR_12->max_frmr_depth) {
  FUNC_8(VAR_2, "num_pages=%d max_frmr_depth=%d\n",
   VAR_14, VAR_12->max_frmr_depth);
  return ((void*)0);
 }

 VAR_19 = FUNC_1(VAR_12);
 if (!VAR_19) {
  FUNC_8(VAR_2, "get_mr returning NULL\n");
  return ((void*)0);
 }
 VAR_19->need_invalidate = VAR_18;
 VAR_19->sgl_count = VAR_14;
 FUNC_9(VAR_19->sgl, VAR_14);

 FUNC_8(VAR_8, "num_pages=0x%x offset=0x%x tailsz=0x%x\n",
   VAR_14, VAR_15, VAR_16);

 if (VAR_14 == 1) {
  FUNC_10(&VAR_19->sgl[0], VAR_13[0], VAR_16, VAR_15);
  goto skip_multiple_pages;
 }


 FUNC_10(
  &VAR_19->sgl[0], VAR_13[0], VAR_10 - VAR_15, VAR_15);
 VAR_21 = 1;
 while (VAR_21 < VAR_14 - 1) {
  FUNC_10(&VAR_19->sgl[VAR_21], VAR_13[VAR_21], VAR_10, 0);
  VAR_21++;
 }
 FUNC_10(&VAR_19->sgl[VAR_21], VAR_13[VAR_21],
  VAR_16 ? VAR_16 : VAR_10, 0);

skip_multiple_pages:
 VAR_22 = VAR_17 ? VAR_0 : VAR_1;
 VAR_19->dir = VAR_22;
 VAR_20 = FUNC_2(VAR_12->id->device, VAR_19->sgl, VAR_14, VAR_22);
 if (!VAR_20) {
  FUNC_8(VAR_2, "ib_dma_map_sg num_pages=%x dir=%x rc=%x\n",
   VAR_14, VAR_22, VAR_20);
  goto dma_map_error;
 }

 VAR_20 = FUNC_5(VAR_19->mr, VAR_19->sgl, VAR_14,
  ((void*)0), VAR_10);
 if (VAR_20 != VAR_14) {
  FUNC_8(VAR_2,
   "ib_map_mr_sg failed rc = %d num_pages = %x\n",
   VAR_20, VAR_14);
  goto map_mr_error;
 }

 FUNC_7(VAR_19->mr,
  FUNC_4(VAR_19->mr->rkey));
 VAR_23 = &VAR_19->wr;
 VAR_23->wr.opcode = VAR_7;
 VAR_19->cqe.done = VAR_11;
 VAR_23->wr.wr_cqe = &VAR_19->cqe;
 VAR_23->wr.num_sge = 0;
 VAR_23->wr.send_flags = VAR_6;
 VAR_23->mr = VAR_19->mr;
 VAR_23->key = VAR_19->mr->rkey;
 VAR_23->access = VAR_17 ?
   VAR_5 | VAR_3 :
   VAR_4;






 VAR_20 = FUNC_6(VAR_12->id->qp, &VAR_23->wr, ((void*)0));
 if (!VAR_20)
  return VAR_19;

 FUNC_8(VAR_2, "ib_post_send failed rc=%x reg_wr->key=%x\n",
  VAR_20, VAR_23->key);


map_mr_error:
 FUNC_3(VAR_12->id->device, VAR_19->sgl,
  VAR_19->sgl_count, VAR_19->dir);

dma_map_error:
 VAR_19->state = VAR_9;
 if (FUNC_0(&VAR_12->mr_used_count))
  FUNC_12(&VAR_12->wait_for_mr_cleanup);

 FUNC_11(VAR_12);

 return ((void*)0);
}
