
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_soctherm {TYPE_1__* soc; } ;
struct soctherm_throt_cfg {int priority; int cpu_throt_level; int cpu_throt_depth; int gpu_throt_level; int name; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ use_ccroc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct tegra_soctherm* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2,
        struct device_node *VAR_3,
        struct soctherm_throt_cfg *VAR_4)
{
 struct tegra_soctherm *VAR_5 = FUNC_1(VAR_2);
 int VAR_6;
 u32 VAR_7;

 VAR_6 = FUNC_2(VAR_3, "nvidia,priority", &VAR_7);
 if (VAR_6) {
  FUNC_0(VAR_2, "throttle-cfg: %s: invalid priority\n", VAR_4->name);
  return -VAR_0;
 }
 VAR_4->priority = VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_5->soc->use_ccroc ?
       "nvidia,cpu-throt-level" :
       "nvidia,cpu-throt-percent", &VAR_7);
 if (!VAR_6) {
  if (VAR_5->soc->use_ccroc &&
      VAR_7 <= VAR_1)
   VAR_4->cpu_throt_level = VAR_7;
  else if (!VAR_5->soc->use_ccroc && VAR_7 <= 100)
   VAR_4->cpu_throt_depth = VAR_7;
  else
   goto err;
 } else {
  goto err;
 }

 VAR_6 = FUNC_2(VAR_3, "nvidia,gpu-throt-level", &VAR_7);
 if (!VAR_6 && VAR_7 <= VAR_1)
  VAR_4->gpu_throt_level = VAR_7;
 else
  goto err;

 return 0;

err:
 FUNC_0(VAR_2, "throttle-cfg: %s: no throt prop or invalid prop\n",
  VAR_4->name);
 return -VAR_0;
}
