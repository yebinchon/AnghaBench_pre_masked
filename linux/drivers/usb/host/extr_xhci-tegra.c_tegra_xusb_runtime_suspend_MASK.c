
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb {int supplies; TYPE_1__* soc; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int num_supplies; } ;


 struct tegra_xusb* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct tegra_xusb*) ;
 int FUNC_3 (struct tegra_xusb*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct tegra_xusb *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(VAR_1);
 FUNC_1(VAR_1->soc->num_supplies, VAR_1->supplies);
 FUNC_2(VAR_1);

 return 0;
}
