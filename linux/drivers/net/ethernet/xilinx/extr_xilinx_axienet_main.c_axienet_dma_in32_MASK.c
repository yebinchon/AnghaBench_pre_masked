
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct axienet_local {scalar_t__ dma_regs; } ;
typedef scalar_t__ off_t ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct axienet_local *VAR_0, off_t VAR_1)
{
 return FUNC_0(VAR_0->dma_regs + VAR_1);
}
