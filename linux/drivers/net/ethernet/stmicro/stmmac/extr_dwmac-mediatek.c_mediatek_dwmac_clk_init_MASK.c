
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mediatek_dwmac_variant {int num_clks; int * clk_list; } ;
struct mediatek_dwmac_plat_data {TYPE_1__* clks; int dev; struct mediatek_dwmac_variant* variant; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct mediatek_dwmac_plat_data *VAR_2)
{
 const struct mediatek_dwmac_variant *VAR_3 = VAR_2->variant;
 int VAR_4, VAR_5 = VAR_3->num_clks;

 VAR_2->clks = FUNC_1(VAR_2->dev, VAR_5, sizeof(*VAR_2->clks), VAR_1);
 if (!VAR_2->clks)
  return -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
  VAR_2->clks[VAR_4].id = VAR_3->clk_list[VAR_4];

 return FUNC_0(VAR_2->dev, VAR_5, VAR_2->clks);
}
