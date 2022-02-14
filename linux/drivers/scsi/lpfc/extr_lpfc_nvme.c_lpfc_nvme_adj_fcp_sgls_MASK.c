
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sli4_sge {int addr_lo; int word2; void* sge_len; void* addr_hi; } ;
struct TYPE_7__ {int bdeSize; int bdeFlags; } ;
struct TYPE_8__ {TYPE_2__ f; } ;
struct TYPE_9__ {int addrLow; void* addrHigh; TYPE_3__ tus; } ;
struct TYPE_10__ {struct sli4_sge wqe_com; TYPE_4__ bde; } ;
union lpfc_wqe128 {TYPE_5__ generic; int * words; } ;
typedef int uint32_t ;
struct nvmefc_fcp_req {int cmdlen; int rsplen; scalar_t__ sg_cnt; int rspdma; int cmddma; scalar_t__ cmdaddr; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct TYPE_6__ {union lpfc_wqe128 wqe; } ;
struct lpfc_io_buf {struct sli4_sge* dma_sgl; TYPE_1__ cur_iocbq; } ;
struct lpfc_hba {scalar_t__ cfg_nvme_embed_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sli4_sge*,int) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void
FUNC_5(struct lpfc_vport *VAR_5,
         struct lpfc_io_buf *VAR_6,
         struct nvmefc_fcp_req *VAR_7)
{
 struct lpfc_hba *VAR_8 = VAR_5->phba;
 struct sli4_sge *VAR_9;
 union lpfc_wqe128 *VAR_10;
 uint32_t *VAR_11, *VAR_12;







 VAR_10 = &VAR_6->cur_iocbq.wqe;
 VAR_9 = VAR_6->dma_sgl;
 VAR_9->sge_len = FUNC_1(VAR_7->cmdlen);
 if (VAR_8->cfg_nvme_embed_cmd) {
  VAR_9->addr_hi = 0;
  VAR_9->addr_lo = 0;


  VAR_10->generic.bde.tus.f.bdeFlags = VAR_1;
  VAR_10->generic.bde.tus.f.bdeSize = 56;
  VAR_10->generic.bde.addrHigh = 0;
  VAR_10->generic.bde.addrLow = 64;
  VAR_11 = &VAR_10->words[16];
  VAR_12 = (uint32_t *)VAR_7->cmdaddr;
  VAR_12++;

  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  VAR_12 += 8;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11++ = *VAR_12++;
  *VAR_11 = *VAR_12;
 } else {
  VAR_9->addr_hi = FUNC_1(FUNC_3(VAR_7->cmddma));
  VAR_9->addr_lo = FUNC_1(FUNC_4(VAR_7->cmddma));


  VAR_10->generic.bde.tus.f.bdeFlags = VAR_0;
  VAR_10->generic.bde.tus.f.bdeSize = VAR_7->cmdlen;
  VAR_10->generic.bde.addrHigh = VAR_9->addr_hi;
  VAR_10->generic.bde.addrLow = VAR_9->addr_lo;


  FUNC_0(VAR_3, &VAR_10->generic.wqe_com, 1);
  FUNC_0(VAR_4, &VAR_10->generic.wqe_com, 0);
 }

 VAR_9++;


 VAR_9->addr_hi = FUNC_1(FUNC_3(VAR_7->rspdma));
 VAR_9->addr_lo = FUNC_1(FUNC_4(VAR_7->rspdma));
 VAR_9->word2 = FUNC_2(VAR_9->word2);
 if (VAR_7->sg_cnt)
  FUNC_0(VAR_2, VAR_9, 0);
 else
  FUNC_0(VAR_2, VAR_9, 1);
 VAR_9->word2 = FUNC_1(VAR_9->word2);
 VAR_9->sge_len = FUNC_1(VAR_7->rsplen);
}
