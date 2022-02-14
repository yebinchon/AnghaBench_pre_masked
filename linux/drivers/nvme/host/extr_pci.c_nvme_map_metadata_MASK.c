
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_iod {int meta_dma; } ;
struct nvme_dev {int dev; } ;
struct TYPE_2__ {int metadata; } ;
struct nvme_command {TYPE_1__ rw; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 struct nvme_iod* FUNC_0 (struct request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;

__attribute__((used)) static blk_status_t FUNC_6(struct nvme_dev *VAR_1, struct request *VAR_2,
  struct nvme_command *VAR_3)
{
 struct nvme_iod *VAR_4 = FUNC_0(VAR_2);

 VAR_4->meta_dma = FUNC_2(VAR_1->dev, FUNC_5(VAR_2),
   FUNC_4(VAR_2), 0);
 if (FUNC_3(VAR_1->dev, VAR_4->meta_dma))
  return VAR_0;
 VAR_3->rw.metadata = FUNC_1(VAR_4->meta_dma);
 return 0;
}
