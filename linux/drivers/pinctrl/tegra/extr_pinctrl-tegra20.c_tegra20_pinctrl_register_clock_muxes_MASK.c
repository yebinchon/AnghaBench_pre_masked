
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pmx {scalar_t__* regs; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ,int,int ,scalar_t__,int,int,int ,int *) ;
 struct tegra_pmx* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_3)
{
 struct tegra_pmx *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(((void*)0), "cdev1_mux", VAR_1, 4, 0,
    VAR_4->regs[1] + 0x8, 2, 2, VAR_0, ((void*)0));

 FUNC_0(((void*)0), "cdev2_mux", VAR_2, 4, 0,
    VAR_4->regs[1] + 0x8, 4, 2, VAR_0, ((void*)0));
}
