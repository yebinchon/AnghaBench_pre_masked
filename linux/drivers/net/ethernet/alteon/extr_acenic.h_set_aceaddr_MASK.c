
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int dma_addr_t ;
struct TYPE_3__ {int addrlo; int addrhi; } ;
typedef TYPE_1__ aceaddr ;


 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(aceaddr *VAR_0, dma_addr_t VAR_1)
{
 u64 VAR_2 = (u64) VAR_1;
 VAR_0->addrlo = VAR_2 & 0xffffffff;
 VAR_0->addrhi = VAR_2 >> 32;
 FUNC_0();
}
