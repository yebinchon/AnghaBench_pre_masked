
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_3__ {int type; int length; int addr; } ;
struct TYPE_4__ {TYPE_1__ sgl; } ;
struct nvme_rw_command {TYPE_2__ dptr; int flags; } ;
struct nvme_iod {int dma_len; int first_dma; } ;
struct nvme_dev {int dev; } ;
struct bio_vec {int bv_len; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvme_iod* FUNC_0 (struct request*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct bio_vec*,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct request*) ;

__attribute__((used)) static blk_status_t FUNC_6(struct nvme_dev *VAR_3,
  struct request *VAR_4, struct nvme_rw_command *VAR_5,
  struct bio_vec *VAR_6)
{
 struct nvme_iod *VAR_7 = FUNC_0(VAR_4);

 VAR_7->first_dma = FUNC_3(VAR_3->dev, VAR_6, FUNC_5(VAR_4), 0);
 if (FUNC_4(VAR_3->dev, VAR_7->first_dma))
  return VAR_0;
 VAR_7->dma_len = VAR_6->bv_len;

 VAR_5->flags = VAR_1;
 VAR_5->dptr.sgl.addr = FUNC_2(VAR_7->first_dma);
 VAR_5->dptr.sgl.length = FUNC_1(VAR_7->dma_len);
 VAR_5->dptr.sgl.type = VAR_2 << 4;
 return 0;
}
