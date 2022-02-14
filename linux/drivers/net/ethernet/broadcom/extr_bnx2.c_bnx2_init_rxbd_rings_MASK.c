
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct bnx2_rx_bd {int rx_bd_flags; int rx_bd_haddr_hi; int rx_bd_haddr_lo; int rx_bd_len; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(struct bnx2_rx_bd *VAR_3[], dma_addr_t VAR_4[],
       u32 VAR_5, int VAR_6)
{
 int VAR_7;
 struct bnx2_rx_bd *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  int VAR_9;

  VAR_8 = &VAR_3[VAR_7][0];
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++, VAR_8++) {
   VAR_8->rx_bd_len = VAR_5;
   VAR_8->rx_bd_flags = VAR_2 | VAR_1;
  }
  if (VAR_7 == (VAR_6 - 1))
   VAR_9 = 0;
  else
   VAR_9 = VAR_7 + 1;
  VAR_8->rx_bd_haddr_hi = (u64) VAR_4[VAR_9] >> 32;
  VAR_8->rx_bd_haddr_lo = (u64) VAR_4[VAR_9] & 0xffffffff;
 }
}
