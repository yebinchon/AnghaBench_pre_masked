
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int dma_addr_t ;
typedef int addr ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline u8 FUNC_1(dma_addr_t VAR_0)
{
 return (sizeof(VAR_0) > sizeof(u32) ? FUNC_0(VAR_0) : 0) & 0xF;
}
