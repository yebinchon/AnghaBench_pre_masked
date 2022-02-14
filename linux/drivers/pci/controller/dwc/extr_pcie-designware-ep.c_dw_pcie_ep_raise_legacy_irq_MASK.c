
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dw_pcie_ep {int dummy; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct dw_pcie* FUNC_1 (struct dw_pcie_ep*) ;

int FUNC_2(struct dw_pcie_ep *VAR_1, u8 VAR_2)
{
 struct dw_pcie *VAR_3 = FUNC_1(VAR_1);
 struct device *VAR_4 = VAR_3->dev;

 FUNC_0(VAR_4, "EP cannot trigger legacy IRQs\n");

 return -VAR_0;
}
