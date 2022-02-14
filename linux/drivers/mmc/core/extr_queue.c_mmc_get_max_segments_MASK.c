
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {unsigned int max_segs; scalar_t__ can_dma_map_merge; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static unsigned int FUNC_0(struct mmc_host *VAR_1)
{
 return VAR_1->can_dma_map_merge ? VAR_0 :
      VAR_1->max_segs;
}
