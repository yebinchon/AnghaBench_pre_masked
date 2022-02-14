
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_4__ {void* prp2; void* prp1; } ;
struct nvme_rw_command {TYPE_2__ dptr; } ;
struct nvme_iod {unsigned int dma_len; scalar_t__ first_dma; } ;
struct TYPE_3__ {int page_size; } ;
struct nvme_dev {int dev; TYPE_1__ ctrl; } ;
struct bio_vec {int bv_offset; unsigned int bv_len; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 struct nvme_iod* FUNC_0 (struct request*) ;
 void* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,struct bio_vec*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct request*) ;

__attribute__((used)) static blk_status_t FUNC_5(struct nvme_dev *VAR_1,
  struct request *VAR_2, struct nvme_rw_command *VAR_3,
  struct bio_vec *VAR_4)
{
 struct nvme_iod *VAR_5 = FUNC_0(VAR_2);
 unsigned int VAR_6 = VAR_4->bv_offset & (VAR_1->ctrl.page_size - 1);
 unsigned int VAR_7 = VAR_1->ctrl.page_size - VAR_6;

 VAR_5->first_dma = FUNC_2(VAR_1->dev, VAR_4, FUNC_4(VAR_2), 0);
 if (FUNC_3(VAR_1->dev, VAR_5->first_dma))
  return VAR_0;
 VAR_5->dma_len = VAR_4->bv_len;

 VAR_3->dptr.prp1 = FUNC_1(VAR_5->first_dma);
 if (VAR_4->bv_len > VAR_7)
  VAR_3->dptr.prp2 = FUNC_1(VAR_5->first_dma + VAR_7);
 return 0;
}
