
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgmac_dma_desc {void* buf_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct xgmac_dma_desc *VAR_2, u32 VAR_3)
{
 if (VAR_3 > VAR_1)
  VAR_2->buf_size = FUNC_0(VAR_1 |
   (VAR_3 - VAR_1) << VAR_0);
 else
  VAR_2->buf_size = FUNC_0(VAR_3);
}
