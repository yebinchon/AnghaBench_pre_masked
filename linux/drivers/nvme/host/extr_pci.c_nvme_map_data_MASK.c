
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int q; } ;
struct nvme_iod {scalar_t__ use_sgl; int nents; int sg; scalar_t__ dma_len; TYPE_1__* nvmeq; } ;
struct TYPE_4__ {int page_size; int sgls; } ;
struct nvme_dev {int dev; int iod_mempool; TYPE_2__ ctrl; } ;
struct nvme_command {int rw; } ;
struct bio_vec {int bv_offset; int bv_len; int bv_page; } ;
typedef scalar_t__ blk_status_t ;
struct TYPE_3__ {scalar_t__ qid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvme_iod* FUNC_0 (struct request*) ;
 int FUNC_1 (int ,struct request*,int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct nvme_dev*,struct request*,int *) ;
 scalar_t__ FUNC_7 (struct nvme_dev*,struct request*,int *,int) ;
 scalar_t__ FUNC_8 (struct nvme_dev*,struct request*) ;
 scalar_t__ FUNC_9 (struct nvme_dev*,struct request*,int *,struct bio_vec*) ;
 scalar_t__ FUNC_10 (struct nvme_dev*,struct request*,int *,struct bio_vec*) ;
 int FUNC_11 (struct nvme_dev*,struct request*) ;
 int FUNC_12 (int ,int ,int ,int ,int ) ;
 struct bio_vec FUNC_13 (struct request*) ;
 int FUNC_14 (struct request*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static blk_status_t FUNC_17(struct nvme_dev *VAR_4, struct request *VAR_5,
  struct nvme_command *VAR_6)
{
 struct nvme_iod *VAR_7 = FUNC_0(VAR_5);
 blk_status_t VAR_8 = VAR_1;
 int VAR_9;

 if (FUNC_2(VAR_5) == 1) {
  struct bio_vec VAR_10 = FUNC_13(VAR_5);

  if (!FUNC_4(VAR_10.bv_page)) {
   if (VAR_10.bv_offset + VAR_10.bv_len <= VAR_4->ctrl.page_size * 2)
    return FUNC_9(VAR_4, VAR_5,
            &VAR_6->rw, &VAR_10);

   if (VAR_7->nvmeq->qid &&
       VAR_4->ctrl.sgls & ((1 << 0) | (1 << 1)))
    return FUNC_10(VAR_4, VAR_5,
            &VAR_6->rw, &VAR_10);
  }
 }

 VAR_7->dma_len = 0;
 VAR_7->sg = FUNC_5(VAR_4->iod_mempool, VAR_3);
 if (!VAR_7->sg)
  return VAR_1;
 FUNC_15(VAR_7->sg, FUNC_2(VAR_5));
 VAR_7->nents = FUNC_1(VAR_5->q, VAR_5, VAR_7->sg);
 if (!VAR_7->nents)
  goto out;

 if (FUNC_4(FUNC_16(VAR_7->sg)))
  VAR_9 = FUNC_12(VAR_4->dev, VAR_7->sg,
    VAR_7->nents, FUNC_14(VAR_5), VAR_2);
 else
  VAR_9 = FUNC_3(VAR_4->dev, VAR_7->sg, VAR_7->nents,
          FUNC_14(VAR_5), VAR_2);
 if (!VAR_9)
  goto out;

 VAR_7->use_sgl = FUNC_8(VAR_4, VAR_5);
 if (VAR_7->use_sgl)
  VAR_8 = FUNC_7(VAR_4, VAR_5, &VAR_6->rw, VAR_9);
 else
  VAR_8 = FUNC_6(VAR_4, VAR_5, &VAR_6->rw);
out:
 if (VAR_8 != VAR_0)
  FUNC_11(VAR_4, VAR_5);
 return VAR_8;
}
