
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hnae_ring {int desc_num; int * desc; scalar_t__ desc_dma_addr; } ;


 int FUNC_0 (int ,scalar_t__,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hnae_ring*) ;
 int FUNC_3 (struct hnae_ring*) ;

__attribute__((used)) static void FUNC_4(struct hnae_ring *VAR_0)
{
 FUNC_0(FUNC_2(VAR_0), VAR_0->desc_dma_addr,
    VAR_0->desc_num * sizeof(VAR_0->desc[0]),
    FUNC_3(VAR_0));
 VAR_0->desc_dma_addr = 0;
 FUNC_1(VAR_0->desc);
 VAR_0->desc = ((void*)0);
}
