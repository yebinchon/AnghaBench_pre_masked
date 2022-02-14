
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_lane {size_t function; TYPE_1__* soc; } ;
struct TYPE_2__ {char** funcs; } ;


 scalar_t__ FUNC_0 (char const*,char const*) ;

__attribute__((used)) static bool FUNC_1(struct tegra_xusb_lane *VAR_0,
      const char *VAR_1)
{
 const char *VAR_2 = VAR_0->soc->funcs[VAR_0->function];

 return FUNC_0(VAR_1, VAR_2) == 0;
}
