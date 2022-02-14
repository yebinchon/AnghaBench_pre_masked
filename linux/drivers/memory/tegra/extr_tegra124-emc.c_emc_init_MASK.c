
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_emc {int dram_type; int last_timing; int mc; int dram_num; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_emc*,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tegra_emc *VAR_3)
{
 VAR_3->dram_type = FUNC_1(VAR_3->regs + VAR_0);
 VAR_3->dram_type &= VAR_1;
 VAR_3->dram_type >>= VAR_2;

 VAR_3->dram_num = FUNC_2(VAR_3->mc);

 FUNC_0(VAR_3, &VAR_3->last_timing);

 return 0;
}
