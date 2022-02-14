
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_mc_reset {int control; int bit; } ;
struct tegra_mc {int lock; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_mc*,int ) ;
 int FUNC_2 (struct tegra_mc*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct tegra_mc *VAR_0,
         const struct tegra_mc_reset *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3;

 FUNC_3(&VAR_0->lock, VAR_2);

 VAR_3 = FUNC_1(VAR_0, VAR_1->control) | FUNC_0(VAR_1->bit);
 FUNC_2(VAR_0, VAR_3, VAR_1->control);

 FUNC_4(&VAR_0->lock, VAR_2);

 return 0;
}
