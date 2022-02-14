
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct RxDesc {int addr; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct RxDesc*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct RxDesc *VAR_0, dma_addr_t VAR_1,
          u32 VAR_2)
{
 VAR_0->addr = FUNC_0(VAR_1);
 FUNC_1(VAR_0, VAR_2);
}
