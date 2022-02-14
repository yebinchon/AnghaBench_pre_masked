
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_xusb_padctl {scalar_t__ regs; int dev; } ;


 int FUNC_0 (int ,char*,unsigned long,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct tegra_xusb_padctl *VAR_0, u32 VAR_1,
     unsigned long VAR_2)
{
 FUNC_0(VAR_0->dev, "%08lx < %08x\n", VAR_2, VAR_1);
 FUNC_1(VAR_1, VAR_0->regs + VAR_2);
}
