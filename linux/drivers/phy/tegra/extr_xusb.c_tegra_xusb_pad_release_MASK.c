
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_xusb_pad {TYPE_2__* soc; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* remove ) (struct tegra_xusb_pad*) ;} ;


 int FUNC_0 (struct tegra_xusb_pad*) ;
 struct tegra_xusb_pad* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct tegra_xusb_pad *VAR_1 = FUNC_1(VAR_0);

 VAR_1->soc->ops->remove(VAR_1);
}
