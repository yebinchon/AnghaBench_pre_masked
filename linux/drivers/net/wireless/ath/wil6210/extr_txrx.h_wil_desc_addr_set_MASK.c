
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wil_ring_dma_addr {int addr_high; int addr_low; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline void FUNC_4(struct wil_ring_dma_addr *VAR_0,
         dma_addr_t VAR_1)
{
 VAR_0->addr_low = FUNC_1(FUNC_2(VAR_1));
 VAR_0->addr_high = FUNC_0((u16)FUNC_3(VAR_1));
}
