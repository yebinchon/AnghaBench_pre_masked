
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct altera_tse_private {int rx_dma_resp; int rx_dma_csr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

u32 FUNC_3(struct altera_tse_private *VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5;
 u32 VAR_6;

 if (FUNC_0(VAR_3->rx_dma_csr, FUNC_1(VAR_1))
     & 0xffff) {
  VAR_5 = FUNC_0(VAR_3->rx_dma_resp,
        FUNC_2(VAR_0));
  VAR_6 = FUNC_0(VAR_3->rx_dma_resp,
        FUNC_2(VAR_2));
  VAR_4 = VAR_6;
  VAR_4 = VAR_4 << 16;
  VAR_4 |= (VAR_5 & 0xffff);
 }
 return VAR_4;
}
