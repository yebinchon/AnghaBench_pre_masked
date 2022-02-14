
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvumi_sgl {unsigned int flags; void* baseaddr_h; void* baseaddr_l; } ;
struct mvumi_hba {unsigned int eot_flag; TYPE_1__* pdev; } ;
struct mvumi_cmd {void* data_buf; TYPE_2__* frame; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int sg_counts; int * payload; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int) ;
 void* FUNC_1 (int *,unsigned int,int *,int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct mvumi_hba*,struct mvumi_sgl*,void*) ;
 unsigned int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mvumi_hba *VAR_1, struct mvumi_cmd *VAR_2,
       unsigned int VAR_3)
{
 struct mvumi_sgl *VAR_4;
 void *VAR_5;
 dma_addr_t VAR_6;

 if (VAR_3 == 0)
  return 0;

 VAR_5 = FUNC_1(&VAR_1->pdev->dev, VAR_3, &VAR_6,
           VAR_0);
 if (!VAR_5)
  return -1;

 VAR_4 = (struct mvumi_sgl *) &VAR_2->frame->payload[0];
 VAR_2->frame->sg_counts = 1;
 VAR_2->data_buf = VAR_5;

 VAR_4->baseaddr_l = FUNC_0(FUNC_2(VAR_6));
 VAR_4->baseaddr_h = FUNC_0(FUNC_4(VAR_6));
 VAR_4->flags = 1U << VAR_1->eot_flag;
 FUNC_3(VAR_1, VAR_4, FUNC_0(VAR_3));

 return 0;
}
