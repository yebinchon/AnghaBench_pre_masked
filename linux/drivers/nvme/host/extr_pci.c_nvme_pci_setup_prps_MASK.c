
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct request {int dummy; } ;
struct TYPE_4__ {void* prp2; void* prp1; } ;
struct nvme_rw_command {TYPE_2__ dptr; } ;
struct nvme_iod {int first_dma; int npages; int nents; struct scatterlist* sg; } ;
struct TYPE_3__ {int page_size; } ;
struct nvme_dev {struct dma_pool* prp_page_pool; struct dma_pool* prp_small_pool; TYPE_1__ ctrl; } ;
struct dma_pool {int dummy; } ;
typedef int dma_addr_t ;
typedef int blk_status_t ;
typedef void* __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,struct scatterlist*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,int,int ) ;
 struct nvme_iod* FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 void* FUNC_5 (int) ;
 void** FUNC_6 (struct dma_pool*,int ,int*) ;
 void** FUNC_7 (struct request*) ;
 int VAR_4 ;
 int FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;
 struct scatterlist* FUNC_10 (struct scatterlist*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static blk_status_t FUNC_12(struct nvme_dev *VAR_5,
  struct request *VAR_6, struct nvme_rw_command *VAR_7)
{
 struct nvme_iod *VAR_8 = FUNC_3(VAR_6);
 struct dma_pool *VAR_9;
 int VAR_10 = FUNC_4(VAR_6);
 struct scatterlist *VAR_11 = VAR_8->sg;
 int VAR_12 = FUNC_9(VAR_11);
 u64 VAR_13 = FUNC_8(VAR_11);
 u32 VAR_14 = VAR_5->ctrl.page_size;
 int VAR_15 = VAR_13 & (VAR_14 - 1);
 __le64 *VAR_16;
 void **VAR_17 = FUNC_7(VAR_6);
 dma_addr_t VAR_18;
 int VAR_19, VAR_20;

 VAR_10 -= (VAR_14 - VAR_15);
 if (VAR_10 <= 0) {
  VAR_8->first_dma = 0;
  goto done;
 }

 VAR_12 -= (VAR_14 - VAR_15);
 if (VAR_12) {
  VAR_13 += (VAR_14 - VAR_15);
 } else {
  VAR_11 = FUNC_10(VAR_11);
  VAR_13 = FUNC_8(VAR_11);
  VAR_12 = FUNC_9(VAR_11);
 }

 if (VAR_10 <= VAR_14) {
  VAR_8->first_dma = VAR_13;
  goto done;
 }

 VAR_19 = FUNC_0(VAR_10, VAR_14);
 if (VAR_19 <= (256 / 8)) {
  VAR_9 = VAR_5->prp_small_pool;
  VAR_8->npages = 0;
 } else {
  VAR_9 = VAR_5->prp_page_pool;
  VAR_8->npages = 1;
 }

 VAR_16 = FUNC_6(VAR_9, VAR_3, &VAR_18);
 if (!VAR_16) {
  VAR_8->first_dma = VAR_13;
  VAR_8->npages = -1;
  return VAR_2;
 }
 VAR_17[0] = VAR_16;
 VAR_8->first_dma = VAR_18;
 VAR_20 = 0;
 for (;;) {
  if (VAR_20 == VAR_14 >> 3) {
   __le64 *VAR_21 = VAR_16;
   VAR_16 = FUNC_6(VAR_9, VAR_3, &VAR_18);
   if (!VAR_16)
    return VAR_2;
   VAR_17[VAR_8->npages++] = VAR_16;
   VAR_16[0] = VAR_21[VAR_20 - 1];
   VAR_21[VAR_20 - 1] = FUNC_5(VAR_18);
   VAR_20 = 1;
  }
  VAR_16[VAR_20++] = FUNC_5(VAR_13);
  VAR_12 -= VAR_14;
  VAR_13 += VAR_14;
  VAR_10 -= VAR_14;
  if (VAR_10 <= 0)
   break;
  if (VAR_12 > 0)
   continue;
  if (FUNC_11(VAR_12 < 0))
   goto bad_sgl;
  VAR_11 = FUNC_10(VAR_11);
  VAR_13 = FUNC_8(VAR_11);
  VAR_12 = FUNC_9(VAR_11);
 }

done:
 VAR_7->dptr.prp1 = FUNC_5(FUNC_8(VAR_8->sg));
 VAR_7->dptr.prp2 = FUNC_5(VAR_8->first_dma);

 return VAR_1;

 bad_sgl:
 FUNC_2(FUNC_1(VAR_4, VAR_8->sg, VAR_8->nents),
   "Invalid SGL for payload:%d nents:%d\n",
   FUNC_4(VAR_6), VAR_8->nents);
 return VAR_0;
}
