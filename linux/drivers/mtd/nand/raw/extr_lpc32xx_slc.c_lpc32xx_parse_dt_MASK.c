
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_nand_cfg_slc {int wp_gpio; int rsetup; int rhold; int rwidth; int rdr_clks; int wsetup; int whold; int wwidth; int wdr_clks; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct lpc32xx_nand_cfg_slc* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct lpc32xx_nand_cfg_slc *FUNC_4(struct device *VAR_1)
{
 struct lpc32xx_nand_cfg_slc *VAR_2;
 struct device_node *VAR_3 = VAR_1->of_node;

 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_3(VAR_3, "nxp,wdr-clks", &VAR_2->wdr_clks);
 FUNC_3(VAR_3, "nxp,wwidth", &VAR_2->wwidth);
 FUNC_3(VAR_3, "nxp,whold", &VAR_2->whold);
 FUNC_3(VAR_3, "nxp,wsetup", &VAR_2->wsetup);
 FUNC_3(VAR_3, "nxp,rdr-clks", &VAR_2->rdr_clks);
 FUNC_3(VAR_3, "nxp,rwidth", &VAR_2->rwidth);
 FUNC_3(VAR_3, "nxp,rhold", &VAR_2->rhold);
 FUNC_3(VAR_3, "nxp,rsetup", &VAR_2->rsetup);

 if (!VAR_2->wdr_clks || !VAR_2->wwidth || !VAR_2->whold ||
     !VAR_2->wsetup || !VAR_2->rdr_clks || !VAR_2->rwidth ||
     !VAR_2->rhold || !VAR_2->rsetup) {
  FUNC_0(VAR_1, "chip parameters not specified correctly\n");
  return ((void*)0);
 }

 VAR_2->wp_gpio = FUNC_2(VAR_3, "gpios", 0);

 return VAR_2;
}
