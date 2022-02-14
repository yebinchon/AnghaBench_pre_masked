
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sli4_sge {int word2; void* sge_len; void* addr_hi; void* addr_lo; } ;
struct TYPE_9__ {struct sli4_sge wqe_com; } ;
union lpfc_wqe128 {TYPE_4__ generic; int * words; } ;
typedef int uint32_t ;
struct TYPE_7__ {int bdeFlags; int bdeSize; } ;
struct TYPE_8__ {int w; TYPE_2__ f; } ;
struct ulp_bde64 {TYPE_3__ tus; void* addrHigh; void* addrLow; } ;
struct sli4_hybrid_sgl {scalar_t__ dma_sgl; int dma_phys_sgl; } ;
struct scatterlist {int length; int dma_address; } ;
struct nvmefc_fcp_req {int sg_cnt; int payload_length; struct scatterlist* first_sgl; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_6__ {union lpfc_wqe128 wqe; } ;
struct lpfc_io_buf {scalar_t__ seg_cnt; struct sli4_sge* dma_sgl; TYPE_1__ cur_iocbq; struct nvmefc_fcp_req* nvmeCmd; } ;
struct lpfc_hba {int cfg_nvme_seg_cnt; int border_sge_num; int cfg_sg_dma_buf_size; scalar_t__ cfg_enable_pbde; } ;
typedef int dma_addr_t ;
struct TYPE_10__ {scalar_t__ max_sgl_segments; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct sli4_sge*) ;
 int FUNC_1 (int ,struct sli4_sge*,int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (void*) ;
 struct sli4_hybrid_sgl* FUNC_4 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_5 (struct lpfc_vport*,struct lpfc_io_buf*,struct nvmefc_fcp_req*) ;
 TYPE_5__ VAR_5 ;
 int FUNC_6 (struct lpfc_hba*,int ,int ,char*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_12(struct lpfc_vport *VAR_10,
        struct lpfc_io_buf *VAR_11)
{
 struct lpfc_hba *VAR_12 = VAR_10->phba;
 struct nvmefc_fcp_req *VAR_13 = VAR_11->nvmeCmd;
 union lpfc_wqe128 *VAR_14 = &VAR_11->cur_iocbq.wqe;
 struct sli4_sge *VAR_15 = VAR_11->dma_sgl;
 struct sli4_hybrid_sgl *VAR_16 = ((void*)0);
 struct scatterlist *VAR_17;
 struct sli4_sge *VAR_18;
 struct ulp_bde64 *VAR_19;
 dma_addr_t VAR_20 = 0;
 uint32_t VAR_21 = 0;
 uint32_t VAR_22 = 0;
 uint32_t VAR_23 = 0;
 int VAR_24, VAR_25, VAR_26;
 bool VAR_27 = 0;


 FUNC_5(VAR_10, VAR_11, VAR_13);





 if (VAR_13->sg_cnt) {




  VAR_15 += 2;

  VAR_18 = VAR_15;
  VAR_11->seg_cnt = VAR_13->sg_cnt;
  if (VAR_11->seg_cnt > VAR_5.max_sgl_segments) {
   FUNC_6(VAR_12, VAR_1, VAR_2,
     "6058 Too many sg segments from "
     "NVME Transport.  Max %d, "
     "nvmeIO sg_cnt %d\n",
     VAR_12->cfg_nvme_seg_cnt + 1,
     VAR_11->seg_cnt);
   VAR_11->seg_cnt = 0;
   return 1;
  }







  VAR_24 = VAR_13->sg_cnt;
  VAR_17 = VAR_13->first_sgl;


  VAR_26 = 2;
  for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
   if (VAR_17 == ((void*)0)) {
    FUNC_6(VAR_12, VAR_1, VAR_2,
      "6059 dptr err %d, nseg %d\n",
      VAR_25, VAR_24);
    VAR_11->seg_cnt = 0;
    return 1;
   }

   VAR_15->word2 = 0;
   if ((VAR_21 + 1) == VAR_24) {
    FUNC_1(VAR_6, VAR_15, 1);
    FUNC_1(VAR_8, VAR_15,
           VAR_3);
   } else {
    FUNC_1(VAR_6, VAR_15, 0);


    if (!VAR_27 &&
        !((VAR_26 + 1) % VAR_12->border_sge_num) &&
        ((VAR_24 - 1) != VAR_25)) {

     FUNC_1(VAR_8, VAR_15,
            VAR_4);

     VAR_16 = FUNC_4(
       VAR_12, VAR_11);

     if (FUNC_11(!VAR_16)) {
      VAR_11->seg_cnt = 0;
      return 1;
     }
     VAR_15->addr_lo = FUNC_2(FUNC_9(
             VAR_16->dma_phys_sgl));
     VAR_15->addr_hi = FUNC_2(FUNC_8(
             VAR_16->dma_phys_sgl));

    } else {
     FUNC_1(VAR_8, VAR_15,
            VAR_3);
    }
   }

   if (!(FUNC_0(VAR_8, VAR_15) &
         VAR_4)) {
    if ((VAR_24 - 1) == VAR_25)
     FUNC_1(VAR_6, VAR_15, 1);

    VAR_20 = VAR_17->dma_address;
    VAR_22 = VAR_17->length;
    VAR_15->addr_lo = FUNC_2(
        FUNC_9(VAR_20));
    VAR_15->addr_hi = FUNC_2(
       FUNC_8(VAR_20));

    FUNC_1(VAR_7, VAR_15, VAR_23);
    VAR_15->word2 = FUNC_2(VAR_15->word2);
    VAR_15->sge_len = FUNC_2(VAR_22);

    VAR_23 += VAR_22;
    VAR_17 = FUNC_10(VAR_17);

    VAR_15++;

    VAR_27 = 0;
   } else {
    VAR_15->word2 = FUNC_2(VAR_15->word2);

    VAR_15->sge_len = FUNC_2(
           VAR_12->cfg_sg_dma_buf_size);

    VAR_15 = (struct sli4_sge *)VAR_16->dma_sgl;
    VAR_25 = VAR_25 - 1;

    VAR_27 = 1;
   }

   VAR_26++;
  }
  if (VAR_12->cfg_enable_pbde) {


   VAR_19 = (struct ulp_bde64 *)
    &VAR_14->words[13];
   VAR_19->addrLow = VAR_18->addr_lo;
   VAR_19->addrHigh = VAR_18->addr_hi;
   VAR_19->tus.f.bdeSize =
    FUNC_3(VAR_18->sge_len);
   VAR_19->tus.f.bdeFlags = VAR_0;
   VAR_19->tus.w = FUNC_2(VAR_19->tus.w);

  } else {
   FUNC_7(&VAR_14->words[13], 0, (sizeof(uint32_t) * 3));
   FUNC_1(VAR_9, &VAR_14->generic.wqe_com, 0);
  }

 } else {
  VAR_11->seg_cnt = 0;




  if (VAR_13->payload_length != 0) {
   FUNC_6(VAR_12, VAR_1, VAR_2,
     "6063 NVME DMA Prep Err: sg_cnt %d "
     "payload_length x%x\n",
     VAR_13->sg_cnt, VAR_13->payload_length);
   return 1;
  }
 }
 return 0;
}
