
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_mmcif_host {int dummy; } ;
struct dma_chan {int dummy; } ;
typedef int dma_cap_mask_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct dma_chan* FUNC_2 (int ,int ,void*) ;
 int VAR_1 ;

__attribute__((used)) static struct dma_chan *
FUNC_3(struct sh_mmcif_host *VAR_2, uintptr_t VAR_3)
{
 dma_cap_mask_t VAR_4;

 FUNC_1(VAR_4);
 FUNC_0(VAR_0, VAR_4);
 if (VAR_3 <= 0)
  return ((void*)0);

 return FUNC_2(VAR_4, VAR_1, (void *)VAR_3);
}
