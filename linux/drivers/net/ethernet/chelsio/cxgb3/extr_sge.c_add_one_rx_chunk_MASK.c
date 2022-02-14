
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct rx_desc {void* gen2; void* len_gen; void* addr_hi; void* addr_lo; } ;
typedef int dma_addr_t ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(dma_addr_t VAR_0, struct rx_desc *VAR_1,
       unsigned int VAR_2)
{
 VAR_1->addr_lo = FUNC_2(VAR_0);
 VAR_1->addr_hi = FUNC_2((u64) VAR_0 >> 32);
 FUNC_3();
 VAR_1->len_gen = FUNC_2(FUNC_0(VAR_2));
 VAR_1->gen2 = FUNC_2(FUNC_1(VAR_2));
 return 0;
}
