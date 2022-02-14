
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_sgl_desc {int addr; } ;
struct nvme_iod {int npages; int sg; scalar_t__ use_sgl; int nents; scalar_t__ dma_len; int first_dma; } ;
struct TYPE_2__ {int page_size; } ;
struct nvme_dev {int iod_mempool; int prp_page_pool; int prp_small_pool; int dev; TYPE_1__ ctrl; } ;
typedef int dma_addr_t ;
typedef int __le64 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct nvme_iod* FUNC_1 (struct request*) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 void** FUNC_8 (struct request*) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (struct request*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct nvme_dev *VAR_1, struct request *VAR_2)
{
 struct nvme_iod *VAR_3 = FUNC_1(VAR_2);
 const int VAR_4 = VAR_1->ctrl.page_size / sizeof(__le64) - 1;
 dma_addr_t VAR_5 = VAR_3->first_dma, VAR_6;
 int VAR_7;

 if (VAR_3->dma_len) {
  FUNC_3(VAR_1->dev, VAR_5, VAR_3->dma_len,
          FUNC_10(VAR_2));
  return;
 }

 FUNC_0(!VAR_3->nents);

 if (FUNC_5(FUNC_11(VAR_3->sg)))
  FUNC_9(VAR_1->dev, VAR_3->sg, VAR_3->nents,
        FUNC_10(VAR_2));
 else
  FUNC_4(VAR_1->dev, VAR_3->sg, VAR_3->nents, FUNC_10(VAR_2));


 if (VAR_3->npages == 0)
  FUNC_2(VAR_1->prp_small_pool, FUNC_8(VAR_2)[0],
   VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_3->npages; VAR_7++) {
  void *VAR_8 = FUNC_8(VAR_2)[VAR_7];

  if (VAR_3->use_sgl) {
   struct nvme_sgl_desc *VAR_9 = VAR_8;

   VAR_6 =
       FUNC_6((VAR_9[VAR_0 - 1]).addr);
  } else {
   __le64 *VAR_10 = VAR_8;

   VAR_6 = FUNC_6(VAR_10[VAR_4]);
  }

  FUNC_2(VAR_1->prp_page_pool, VAR_8, VAR_5);
  VAR_5 = VAR_6;
 }

 FUNC_7(VAR_3->sg, VAR_1->iod_mempool);
}
