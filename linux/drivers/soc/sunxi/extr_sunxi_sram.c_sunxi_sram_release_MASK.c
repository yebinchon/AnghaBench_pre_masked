
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_sram_desc {int claimed; } ;
struct sunxi_sram_data {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sunxi_sram_data const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct sunxi_sram_data* FUNC_3 (int ,int *) ;
 struct sunxi_sram_desc* FUNC_4 (struct sunxi_sram_data const*) ;

int FUNC_5(struct device *VAR_2)
{
 const struct sunxi_sram_data *VAR_3;
 struct sunxi_sram_desc *VAR_4;

 if (!VAR_2 || !VAR_2->of_node)
  return -VAR_0;

 VAR_3 = FUNC_3(VAR_2->of_node, ((void*)0));
 if (FUNC_0(VAR_3))
  return -VAR_0;

 VAR_4 = FUNC_4(VAR_3);

 FUNC_1(&VAR_1);
 VAR_4->claimed = 0;
 FUNC_2(&VAR_1);

 return 0;
}
