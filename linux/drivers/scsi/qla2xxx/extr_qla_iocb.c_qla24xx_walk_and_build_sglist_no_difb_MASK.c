
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_cmnd {TYPE_1__* device; } ;
struct scatterlist {int dummy; } ;
struct qla_tc_param {scalar_t__ blk_sz; int* ctx_dsd_alloced; TYPE_5__* ctx; struct scatterlist* prot_sg; int sg; int bufflen; } ;
struct qla_hw_data {int dl_dma_pool; } ;
struct qla2_sgx {scalar_t__ dma_len; scalar_t__ dma_addr; int cur_sg; int tot_bytes; TYPE_6__* sp; } ;
struct dsd_dma {scalar_t__ dsd_list_dma; int list; void* dsd_addr; } ;
struct dsd64 {void* length; scalar_t__ address; } ;
struct TYPE_11__ {TYPE_2__* crc_ctx; } ;
struct TYPE_12__ {TYPE_3__ scmd; } ;
struct TYPE_14__ {int flags; TYPE_4__ u; } ;
typedef TYPE_6__ srb_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_13__ {int dsd_list; } ;
struct TYPE_10__ {int dsd_list; } ;
struct TYPE_9__ {scalar_t__ sector_size; } ;


 int FUNC_0 () ;
 struct scsi_cmnd* FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (scalar_t__) ;
 void* FUNC_3 (int ,int ,scalar_t__*) ;
 int FUNC_4 (struct dsd_dma*) ;
 struct dsd_dma* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct qla2_sgx*,int ,int) ;
 int FUNC_8 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_9 (scalar_t__,struct qla2_sgx*,scalar_t__*) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 struct scatterlist* FUNC_11 (struct scsi_cmnd*) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_13 (struct scatterlist*) ;
 scalar_t__ FUNC_14 (struct scatterlist*) ;
 struct scatterlist* FUNC_15 (struct scatterlist*) ;

int
FUNC_16(struct qla_hw_data *VAR_3, srb_t *VAR_4,
 struct dsd64 *VAR_5, uint16_t VAR_6, struct qla_tc_param *VAR_7)
{
 void *VAR_8;
 uint8_t VAR_9 = 0;
 uint32_t VAR_10;
 struct dsd_dma *VAR_11;
 struct scatterlist *VAR_12;
 struct dsd64 *VAR_13 = VAR_5;
 uint16_t VAR_14 = VAR_6;
 uint32_t VAR_15;
 uint32_t VAR_16;
 struct qla2_sgx VAR_17;
 dma_addr_t VAR_18;
 uint32_t VAR_19, VAR_20 = 0;
 struct scsi_cmnd *VAR_21;

 FUNC_7(&VAR_17, 0, sizeof(struct qla2_sgx));
 if (VAR_4) {
  VAR_21 = FUNC_1(VAR_4);
  VAR_15 = VAR_21->device->sector_size;

  VAR_17.tot_bytes = FUNC_10(VAR_21);
  VAR_17.cur_sg = FUNC_12(VAR_21);
  VAR_17.sp = VAR_4;

  VAR_12 = FUNC_11(VAR_21);
 } else if (VAR_7) {
  VAR_15 = VAR_7->blk_sz;
  VAR_17.tot_bytes = VAR_7->bufflen;
  VAR_17.cur_sg = VAR_7->sg;
  VAR_12 = VAR_7->prot_sg;
 } else {
  FUNC_0();
  return 1;
 }

 while (FUNC_9(VAR_15, &VAR_17, &VAR_16)) {

  VAR_18 = VAR_17.dma_addr;
  VAR_19 = VAR_17.dma_len;
alloc_and_fill:

  if (VAR_9 == 0) {
   VAR_9 = (VAR_14 > VAR_1) ?
     VAR_1 : VAR_14;
   VAR_10 = (VAR_9 + 1) * 12;
   VAR_14 -= VAR_9;


   VAR_11 = FUNC_5(sizeof(struct dsd_dma), VAR_0);
   if (!VAR_11)
    return 1;


   VAR_11->dsd_addr = VAR_8 =
       FUNC_3(VAR_3->dl_dma_pool, VAR_0,
    &VAR_11->dsd_list_dma);

   if (!VAR_8) {




    FUNC_4(VAR_11);
    return 1;
   }

   if (VAR_4) {
    FUNC_6(&VAR_11->list,
           &VAR_4->u.scmd.crc_ctx->dsd_list);

    VAR_4->flags |= VAR_2;
   } else {
    FUNC_6(&VAR_11->list,
        &(VAR_7->ctx->dsd_list));
    *VAR_7->ctx_dsd_alloced = 1;
   }



   FUNC_8(VAR_11->dsd_list_dma,
        &VAR_13->address);
   VAR_13->length = FUNC_2(VAR_10);
   VAR_13 = VAR_8;
  }
  FUNC_8(VAR_18, &VAR_13->address);
  VAR_13->length = FUNC_2(VAR_19);
  VAR_13++;
  VAR_9--;

  if (VAR_16 == 0) {

   VAR_18 = FUNC_13(VAR_12) + VAR_20;
   VAR_19 = 8;

   VAR_20 += VAR_19;
   if (VAR_20 == FUNC_14(VAR_12)) {
    VAR_20 = 0;
    VAR_12 = FUNC_15(VAR_12);
   }

   VAR_16 = 1;
   goto alloc_and_fill;
  }
 }

 VAR_13->address = 0;
 VAR_13->length = 0;
 VAR_13++;
 return 0;
}
