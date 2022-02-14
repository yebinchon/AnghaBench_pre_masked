
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xgmac_dma_desc {void* buf2_addr; void* buf1_addr; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct xgmac_dma_desc *VAR_1,
         u32 VAR_2, int VAR_3)
{
 VAR_1->buf1_addr = FUNC_0(VAR_2);
 if (VAR_3 > VAR_0)
  VAR_1->buf2_addr = FUNC_0(VAR_2 + VAR_0);
}
