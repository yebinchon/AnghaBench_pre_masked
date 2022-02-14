
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvumi_sgl {int baseaddr_h; scalar_t__ baseaddr_l; } ;
struct mvumi_hba {unsigned int ib_max_size; TYPE_1__* pdev; } ;
struct mvumi_cmd {int frame_phys; TYPE_2__* frame; TYPE_2__* data_buf; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int * payload; scalar_t__ sg_counts; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,unsigned int,TYPE_2__*,int) ;
 int FUNC_1 (struct mvumi_cmd*) ;
 int FUNC_2 (struct mvumi_hba*,struct mvumi_sgl*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct mvumi_hba *VAR_0,
      struct mvumi_cmd *VAR_1)
{
 struct mvumi_sgl *VAR_2;
 unsigned int VAR_3;
 dma_addr_t VAR_4;

 if (VAR_1 && VAR_1->frame) {
  if (VAR_1->frame->sg_counts) {
   VAR_2 = (struct mvumi_sgl *) &VAR_1->frame->payload[0];
   FUNC_2(VAR_0, VAR_2, VAR_3);

   VAR_4 = (dma_addr_t) VAR_2->baseaddr_l |
    (dma_addr_t) ((VAR_2->baseaddr_h << 16) << 16);

   FUNC_0(&VAR_0->pdev->dev, VAR_3, VAR_1->data_buf,
        VAR_4);
  }
  FUNC_0(&VAR_0->pdev->dev, VAR_0->ib_max_size,
    VAR_1->frame, VAR_1->frame_phys);
  FUNC_1(VAR_1);
 }
}
