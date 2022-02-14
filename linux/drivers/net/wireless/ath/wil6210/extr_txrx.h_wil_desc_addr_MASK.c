
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wil_ring_dma_addr {int addr_high; int addr_low; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline dma_addr_t FUNC_2(struct wil_ring_dma_addr *VAR_0)
{
 return FUNC_1(VAR_0->addr_low) |
      ((u64)FUNC_0(VAR_0->addr_high) << 32);
}
