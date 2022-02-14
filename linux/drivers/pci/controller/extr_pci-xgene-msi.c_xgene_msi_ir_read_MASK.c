
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xgene_msi {scalar_t__ msi_regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static u32 FUNC_1(struct xgene_msi *VAR_1,
        u32 VAR_2, u32 VAR_3)
{
 return FUNC_0(VAR_1->msi_regs + VAR_0 +
         (VAR_2 << 19) + (VAR_3 << 16));
}
