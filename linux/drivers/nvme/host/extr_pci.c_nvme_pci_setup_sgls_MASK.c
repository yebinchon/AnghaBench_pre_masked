
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct request {int dummy; } ;
struct nvme_sgl_desc {int dummy; } ;
struct TYPE_2__ {struct nvme_sgl_desc sgl; } ;
struct nvme_rw_command {TYPE_1__ dptr; int flags; } ;
struct nvme_iod {int npages; int first_dma; struct scatterlist* sg; } ;
struct nvme_dev {struct dma_pool* prp_page_pool; struct dma_pool* prp_small_pool; } ;
struct dma_pool {int dummy; } ;
typedef int dma_addr_t ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nvme_iod* FUNC_0 (struct request*) ;
 struct nvme_sgl_desc* FUNC_1 (struct dma_pool*,int ,int *) ;
 struct nvme_sgl_desc** FUNC_2 (struct request*) ;
 int FUNC_3 (struct nvme_sgl_desc*,struct scatterlist*) ;
 int FUNC_4 (struct nvme_sgl_desc*,int ,int) ;
 struct scatterlist* FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static blk_status_t FUNC_6(struct nvme_dev *VAR_5,
  struct request *VAR_6, struct nvme_rw_command *VAR_7, int VAR_8)
{
 struct nvme_iod *VAR_9 = FUNC_0(VAR_6);
 struct dma_pool *VAR_10;
 struct nvme_sgl_desc *VAR_11;
 struct scatterlist *VAR_12 = VAR_9->sg;
 dma_addr_t VAR_13;
 int VAR_14 = 0;


 VAR_7->flags = VAR_3;

 if (VAR_8 == 1) {
  FUNC_3(&VAR_7->dptr.sgl, VAR_12);
  return VAR_0;
 }

 if (VAR_8 <= (256 / sizeof(struct nvme_sgl_desc))) {
  VAR_10 = VAR_5->prp_small_pool;
  VAR_9->npages = 0;
 } else {
  VAR_10 = VAR_5->prp_page_pool;
  VAR_9->npages = 1;
 }

 VAR_11 = FUNC_1(VAR_10, VAR_2, &VAR_13);
 if (!VAR_11) {
  VAR_9->npages = -1;
  return VAR_1;
 }

 FUNC_2(VAR_6)[0] = VAR_11;
 VAR_9->first_dma = VAR_13;

 FUNC_4(&VAR_7->dptr.sgl, VAR_13, VAR_8);

 do {
  if (VAR_14 == VAR_4) {
   struct nvme_sgl_desc *VAR_15 = VAR_11;
   struct nvme_sgl_desc *VAR_16 = &VAR_15[VAR_14 - 1];

   VAR_11 = FUNC_1(VAR_10, VAR_2, &VAR_13);
   if (!VAR_11)
    return VAR_1;

   VAR_14 = 0;
   FUNC_2(VAR_6)[VAR_9->npages++] = VAR_11;
   VAR_11[VAR_14++] = *VAR_16;
   FUNC_4(VAR_16, VAR_13, VAR_8);
  }

  FUNC_3(&VAR_11[VAR_14++], VAR_12);
  VAR_12 = FUNC_5(VAR_12);
 } while (--VAR_8 > 0);

 return VAR_0;
}
