
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpc32xx_nand_cfg_mlc {int wp_gpio; int wr_low; int wr_high; int rd_low; int rd_high; int nand_ta; int busy_delay; int tcea_delay; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct lpc32xx_nand_cfg_mlc* FUNC_1 (struct device*,int,int ) ;
 int FUNC_2 (struct device_node*,char*,int ) ;
 int FUNC_3 (struct device_node*,char*,int *) ;

__attribute__((used)) static struct lpc32xx_nand_cfg_mlc *FUNC_4(struct device *VAR_1)
{
 struct lpc32xx_nand_cfg_mlc *VAR_2;
 struct device_node *VAR_3 = VAR_1->of_node;

 VAR_2 = FUNC_1(VAR_1, sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_3(VAR_3, "nxp,tcea-delay", &VAR_2->tcea_delay);
 FUNC_3(VAR_3, "nxp,busy-delay", &VAR_2->busy_delay);
 FUNC_3(VAR_3, "nxp,nand-ta", &VAR_2->nand_ta);
 FUNC_3(VAR_3, "nxp,rd-high", &VAR_2->rd_high);
 FUNC_3(VAR_3, "nxp,rd-low", &VAR_2->rd_low);
 FUNC_3(VAR_3, "nxp,wr-high", &VAR_2->wr_high);
 FUNC_3(VAR_3, "nxp,wr-low", &VAR_2->wr_low);

 if (!VAR_2->tcea_delay || !VAR_2->busy_delay || !VAR_2->nand_ta ||
     !VAR_2->rd_high || !VAR_2->rd_low || !VAR_2->wr_high ||
     !VAR_2->wr_low) {
  FUNC_0(VAR_1, "chip parameters not specified correctly\n");
  return ((void*)0);
 }

 VAR_2->wp_gpio = FUNC_2(VAR_3, "gpios", 0);

 return VAR_2;
}
