
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_local {scalar_t__ sdma_regs; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct temac_local *VAR_0, int VAR_1)
{
 return FUNC_0(VAR_0->sdma_regs + (VAR_1 << 2));
}
