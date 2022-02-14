
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct cmdQ_e {int addr_hi; int len_gen; int flags; scalar_t__ addr_lo; } ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static inline void FUNC_5(struct cmdQ_e *VAR_2, dma_addr_t VAR_3,
     unsigned int VAR_4, unsigned int VAR_5,
     unsigned int VAR_6)
{
 FUNC_0(VAR_4 > VAR_1);

 VAR_2->addr_lo = (u32)VAR_3;
 VAR_2->addr_hi = (u64)VAR_3 >> 32;
 VAR_2->len_gen = FUNC_4(VAR_4) | FUNC_2(VAR_5);
 VAR_2->flags = VAR_0 | FUNC_1(VAR_6) | FUNC_3(VAR_5);
}
