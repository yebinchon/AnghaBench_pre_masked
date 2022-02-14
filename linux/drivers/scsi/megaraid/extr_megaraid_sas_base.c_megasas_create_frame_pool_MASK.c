
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct megasas_instance {int max_mfi_cmds; scalar_t__ adapter_type; int mfi_frame_size; TYPE_1__* pdev; void* sense_dma_pool; int * frame_dma_pool; struct megasas_cmd** cmd_list; } ;
struct megasas_cmd {TYPE_4__* frame; int index; int sense; int sense_phys_addr; int frame_phys_addr; } ;
struct TYPE_7__ {int cmd; } ;
struct TYPE_6__ {scalar_t__ pad_0; int context; } ;
struct TYPE_8__ {TYPE_3__ hdr; TYPE_2__ io; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,char*) ;
 int FUNC_2 (void*,int ,int *) ;
 void* FUNC_3 (char*,int *,int,int,int ) ;
 int FUNC_4 (int *) ;
 TYPE_4__* FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (struct megasas_instance*) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_7(struct megasas_instance *VAR_7)
{
 int VAR_8;
 u16 VAR_9;
 u32 VAR_10;
 struct megasas_cmd *VAR_11;

 VAR_9 = VAR_7->max_mfi_cmds;
 VAR_10 = (VAR_7->adapter_type == VAR_5) ?
   (15 + 1) : (3 + 1);
 VAR_7->mfi_frame_size = VAR_3 * VAR_10;



 VAR_7->frame_dma_pool = FUNC_3("megasas frame pool",
     &VAR_7->pdev->dev,
     VAR_7->mfi_frame_size, 256, 0);

 if (!VAR_7->frame_dma_pool) {
  FUNC_1(VAR_2, &VAR_7->pdev->dev, "failed to setup frame pool\n");
  return -VAR_0;
 }

 VAR_7->sense_dma_pool = FUNC_3("megasas sense pool",
         &VAR_7->pdev->dev, 128,
         4, 0);

 if (!VAR_7->sense_dma_pool) {
  FUNC_1(VAR_2, &VAR_7->pdev->dev, "failed to setup sense pool\n");

  FUNC_4(VAR_7->frame_dma_pool);
  VAR_7->frame_dma_pool = ((void*)0);

  return -VAR_0;
 }






 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {

  VAR_11 = VAR_7->cmd_list[VAR_8];

  VAR_11->frame = FUNC_5(VAR_7->frame_dma_pool,
         VAR_1, &VAR_11->frame_phys_addr);

  VAR_11->sense = FUNC_2(VAR_7->sense_dma_pool,
         VAR_1, &VAR_11->sense_phys_addr);





  if (!VAR_11->frame || !VAR_11->sense) {
   FUNC_1(VAR_2, &VAR_7->pdev->dev, "dma_pool_alloc failed\n");
   FUNC_6(VAR_7);
   return -VAR_0;
  }

  VAR_11->frame->io.context = FUNC_0(VAR_11->index);
  VAR_11->frame->io.pad_0 = 0;
  if ((VAR_7->adapter_type == VAR_5) && VAR_6)
   VAR_11->frame->hdr.cmd = VAR_4;
 }

 return 0;
}
