
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_xusb_padctl {TYPE_2__* soc; int rst; int supplies; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {TYPE_1__* ops; int num_supplies; } ;
struct TYPE_3__ {int (* remove ) (struct tegra_xusb_padctl*) ;} ;


 int FUNC_0 (int *,char*,int) ;
 struct tegra_xusb_padctl* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct tegra_xusb_padctl*) ;
 int FUNC_5 (struct tegra_xusb_padctl*) ;
 int FUNC_6 (struct tegra_xusb_padctl*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct tegra_xusb_padctl *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_6(VAR_1);
 FUNC_5(VAR_1);

 VAR_2 = FUNC_2(VAR_1->soc->num_supplies,
         VAR_1->supplies);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "failed to disable supplies: %d\n", VAR_2);

 VAR_2 = FUNC_3(VAR_1->rst);
 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev, "failed to assert reset: %d\n", VAR_2);

 VAR_1->soc->ops->remove(VAR_1);

 return VAR_2;
}
