
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_vde {int mbe; } ;


 int FUNC_0 (struct tegra_vde*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct tegra_vde *VAR_0, int VAR_1, u32 VAR_2)
{
 FUNC_0(VAR_0, 0xA0000000 | (VAR_1 << 24) | (VAR_2 & 0xFFFF),
    VAR_0->mbe, 0x80);
 FUNC_0(VAR_0, 0xA0000000 | ((VAR_1 + 1) << 24) | (VAR_2 >> 16),
    VAR_0->mbe, 0x80);
}
