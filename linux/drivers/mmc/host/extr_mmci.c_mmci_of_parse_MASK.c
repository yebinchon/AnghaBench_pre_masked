
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmci_host {int clk_reg_add; int pwr_reg_add; } ;
struct mmc_host {int caps; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct mmc_host*) ;
 struct mmci_host* FUNC_1 (struct mmc_host*) ;
 scalar_t__ FUNC_2 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_11, struct mmc_host *VAR_12)
{
 struct mmci_host *VAR_13 = FUNC_1(VAR_12);
 int VAR_14 = FUNC_0(VAR_12);

 if (VAR_14)
  return VAR_14;

 if (FUNC_2(VAR_11, "st,sig-dir-dat0", ((void*)0)))
  VAR_13->pwr_reg_add |= VAR_4;
 if (FUNC_2(VAR_11, "st,sig-dir-dat2", ((void*)0)))
  VAR_13->pwr_reg_add |= VAR_5;
 if (FUNC_2(VAR_11, "st,sig-dir-dat31", ((void*)0)))
  VAR_13->pwr_reg_add |= VAR_6;
 if (FUNC_2(VAR_11, "st,sig-dir-dat74", ((void*)0)))
  VAR_13->pwr_reg_add |= VAR_7;
 if (FUNC_2(VAR_11, "st,sig-dir-cmd", ((void*)0)))
  VAR_13->pwr_reg_add |= VAR_3;
 if (FUNC_2(VAR_11, "st,sig-pin-fbclk", ((void*)0)))
  VAR_13->pwr_reg_add |= VAR_8;
 if (FUNC_2(VAR_11, "st,sig-dir", ((void*)0)))
  VAR_13->pwr_reg_add |= VAR_2;
 if (FUNC_2(VAR_11, "st,neg-edge", ((void*)0)))
  VAR_13->clk_reg_add |= VAR_0;
 if (FUNC_2(VAR_11, "st,use-ckin", ((void*)0)))
  VAR_13->clk_reg_add |= VAR_1;

 if (FUNC_2(VAR_11, "mmc-cap-mmc-highspeed", ((void*)0)))
  VAR_12->caps |= VAR_9;
 if (FUNC_2(VAR_11, "mmc-cap-sd-highspeed", ((void*)0)))
  VAR_12->caps |= VAR_10;

 return 0;
}
