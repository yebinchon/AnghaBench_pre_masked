
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct megasas_instance {int max_mfi_cmds; int * sense_dma_pool; int * frame_dma_pool; struct megasas_cmd** cmd_list; } ;
struct megasas_cmd {int sense_phys_addr; scalar_t__ sense; int frame_phys_addr; scalar_t__ frame; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct megasas_instance *VAR_0)
{
 int VAR_1;
 u16 VAR_2 = VAR_0->max_mfi_cmds;
 struct megasas_cmd *VAR_3;

 if (!VAR_0->frame_dma_pool)
  return;




 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++) {

  VAR_3 = VAR_0->cmd_list[VAR_1];

  if (VAR_3->frame)
   FUNC_1(VAR_0->frame_dma_pool, VAR_3->frame,
          VAR_3->frame_phys_addr);

  if (VAR_3->sense)
   FUNC_1(VAR_0->sense_dma_pool, VAR_3->sense,
          VAR_3->sense_phys_addr);
 }




 FUNC_0(VAR_0->frame_dma_pool);
 FUNC_0(VAR_0->sense_dma_pool);

 VAR_0->frame_dma_pool = ((void*)0);
 VAR_0->sense_dma_pool = ((void*)0);
}
