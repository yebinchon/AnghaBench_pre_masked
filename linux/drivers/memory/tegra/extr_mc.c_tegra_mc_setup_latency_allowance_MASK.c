
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_mc_la {int mask; int shift; int def; int reg; } ;
struct tegra_mc {TYPE_2__* soc; int clk; scalar_t__ tick; } ;
struct TYPE_4__ {unsigned int num_clients; TYPE_1__* clients; } ;
struct TYPE_3__ {struct tegra_mc_la la; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long long) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long,int ) ;
 int FUNC_3 (struct tegra_mc*,int ) ;
 int FUNC_4 (struct tegra_mc*,int,int ) ;

__attribute__((used)) static int FUNC_5(struct tegra_mc *VAR_5)
{
 unsigned long long VAR_6;
 unsigned int VAR_7;
 u32 VAR_8;


 VAR_6 = (unsigned long long)VAR_5->tick * FUNC_1(VAR_5->clk);
 FUNC_2(VAR_6, VAR_4);

 VAR_8 = FUNC_3(VAR_5, VAR_0);
 VAR_8 &= ~VAR_1;
 VAR_8 |= FUNC_0(VAR_6);
 FUNC_4(VAR_5, VAR_8, VAR_0);


 for (VAR_7 = 0; VAR_7 < VAR_5->soc->num_clients; VAR_7++) {
  const struct tegra_mc_la *VAR_9 = &VAR_5->soc->clients[VAR_7].la;
  u32 VAR_10;

  VAR_10 = FUNC_3(VAR_5, VAR_9->reg);
  VAR_10 &= ~(VAR_9->mask << VAR_9->shift);
  VAR_10 |= (VAR_9->def & VAR_9->mask) << VAR_9->shift;
  FUNC_4(VAR_5, VAR_10, VAR_9->reg);
 }


 FUNC_4(VAR_5, VAR_3, VAR_2);

 return 0;
}
