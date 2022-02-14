
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_vde {int * iram; } ;


 int FUNC_0 (unsigned int,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tegra_vde *VAR_0,
           unsigned int VAR_1,
           unsigned int VAR_2,
           u32 VAR_3, u32 VAR_4)
{
 u32 *VAR_5 = VAR_0->iram;

 FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 VAR_5[0x20 * VAR_1 + VAR_2 * 2] = VAR_3;
 VAR_5[0x20 * VAR_1 + VAR_2 * 2 + 1] = VAR_4;
}
