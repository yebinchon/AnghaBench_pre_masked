
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct nvme_iod {int meta_dma; TYPE_1__* nvmeq; } ;
struct nvme_dev {int dev; } ;
struct TYPE_4__ {int bv_len; } ;
struct TYPE_3__ {struct nvme_dev* dev; } ;


 scalar_t__ FUNC_0 (struct request*) ;
 struct nvme_iod* FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 int FUNC_6 (struct nvme_dev*,struct request*) ;
 int FUNC_7 (struct request*) ;
 TYPE_2__* FUNC_8 (struct request*) ;

__attribute__((used)) static void FUNC_9(struct request *VAR_0)
{
 struct nvme_iod *VAR_1 = FUNC_1(VAR_0);
 struct nvme_dev *VAR_2 = VAR_1->nvmeq->dev;

 FUNC_4(VAR_0);
 if (FUNC_0(VAR_0))
  FUNC_3(VAR_2->dev, VAR_1->meta_dma,
          FUNC_8(VAR_0)->bv_len, FUNC_7(VAR_0));
 if (FUNC_2(VAR_0))
  FUNC_6(VAR_2, VAR_0);
 FUNC_5(VAR_0);
}
