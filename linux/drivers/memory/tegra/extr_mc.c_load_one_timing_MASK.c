
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tegra_mc_timing {int emem_data; int rate; } ;
struct tegra_mc {int dev; TYPE_1__* soc; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int num_emem_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,struct device_node*) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct device_node*,char*,int *) ;
 int FUNC_3 (struct device_node*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct tegra_mc *VAR_2,
      struct tegra_mc_timing *VAR_3,
      struct device_node *VAR_4)
{
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_2(VAR_4, "clock-frequency", &VAR_6);
 if (VAR_5) {
  FUNC_0(VAR_2->dev,
   "timing %pOFn: failed to read rate\n", VAR_4);
  return VAR_5;
 }

 VAR_3->rate = VAR_6;
 VAR_3->emem_data = FUNC_1(VAR_2->dev, VAR_2->soc->num_emem_regs,
      sizeof(u32), VAR_1);
 if (!VAR_3->emem_data)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_4, "nvidia,emem-configuration",
      VAR_3->emem_data,
      VAR_2->soc->num_emem_regs);
 if (VAR_5) {
  FUNC_0(VAR_2->dev,
   "timing %pOFn: failed to read EMEM configuration\n",
   VAR_4);
  return VAR_5;
 }

 return 0;
}
