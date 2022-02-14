
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dw_mci_rockchip_priv_data {int num_phases; int default_sample_phase; void* sample_clk; void* drv_clk; } ;
struct dw_mci {struct dw_mci_rockchip_priv_data* priv; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 void* FUNC_2 (TYPE_1__*,char*) ;
 struct dw_mci_rockchip_priv_data* FUNC_3 (TYPE_1__*,int,int ) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_5(struct dw_mci *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev->of_node;
 struct dw_mci_rockchip_priv_data *VAR_4;

 VAR_4 = FUNC_3(VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 if (FUNC_4(VAR_3, "rockchip,desired-num-phases",
     &VAR_4->num_phases))
  VAR_4->num_phases = 360;

 if (FUNC_4(VAR_3, "rockchip,default-sample-phase",
     &VAR_4->default_sample_phase))
  VAR_4->default_sample_phase = 0;

 VAR_4->drv_clk = FUNC_2(VAR_2->dev, "ciu-drive");
 if (FUNC_0(VAR_4->drv_clk))
  FUNC_1(VAR_2->dev, "ciu-drive not available\n");

 VAR_4->sample_clk = FUNC_2(VAR_2->dev, "ciu-sample");
 if (FUNC_0(VAR_4->sample_clk))
  FUNC_1(VAR_2->dev, "ciu-sample not available\n");

 VAR_2->priv = VAR_4;

 return 0;
}
