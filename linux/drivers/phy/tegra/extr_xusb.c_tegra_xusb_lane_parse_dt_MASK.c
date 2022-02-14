
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_xusb_lane {int function; TYPE_2__* soc; TYPE_1__* pad; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int num_funcs; int funcs; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,char const*,struct device_node*) ;
 int FUNC_1 (int ,int ,char const*) ;
 int FUNC_2 (struct device_node*,char*,char const**) ;

int FUNC_3(struct tegra_xusb_lane *VAR_0,
        struct device_node *VAR_1)
{
 struct device *VAR_2 = &VAR_0->pad->dev;
 const char *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, "nvidia,function", &VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_0->soc->funcs, VAR_0->soc->num_funcs, VAR_3);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2, "invalid function \"%s\" for lane \"%pOFn\"\n",
   VAR_3, VAR_1);
  return VAR_4;
 }

 VAR_0->function = VAR_4;

 return 0;
}
