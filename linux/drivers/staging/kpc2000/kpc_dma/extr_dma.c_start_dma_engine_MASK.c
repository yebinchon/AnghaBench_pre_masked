
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kpc_dma_device {int desc_pool_first; int desc_pool_last; int desc_completed; int desc_next; } ;


 int FUNC_0 (struct kpc_dma_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct kpc_dma_device*,int ) ;
 int FUNC_2 (struct kpc_dma_device*,int ) ;
 int FUNC_3 (struct kpc_dma_device*,int) ;

void FUNC_4(struct kpc_dma_device *VAR_2)
{
 VAR_2->desc_next = VAR_2->desc_pool_first;
 VAR_2->desc_completed = VAR_2->desc_pool_last;


 FUNC_1(VAR_2, VAR_2->desc_pool_first);
 FUNC_2(VAR_2, VAR_2->desc_pool_first);
 FUNC_0(VAR_2);

 FUNC_3(VAR_2, VAR_0 | VAR_1);
}
