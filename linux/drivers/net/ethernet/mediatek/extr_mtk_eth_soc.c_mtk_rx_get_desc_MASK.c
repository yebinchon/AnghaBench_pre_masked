
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_rx_dma {void* rxd4; void* rxd3; void* rxd2; void* rxd1; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline void FUNC_1(struct mtk_rx_dma *VAR_0,
       struct mtk_rx_dma *VAR_1)
{
 VAR_0->rxd1 = FUNC_0(VAR_1->rxd1);
 VAR_0->rxd2 = FUNC_0(VAR_1->rxd2);
 VAR_0->rxd3 = FUNC_0(VAR_1->rxd3);
 VAR_0->rxd4 = FUNC_0(VAR_1->rxd4);
}
