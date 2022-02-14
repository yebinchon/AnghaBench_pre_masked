
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imx6_pcie {struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct dw_pcie*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct imx6_pcie *VAR_3)
{
 struct dw_pcie *VAR_4 = VAR_3->pci;
 struct device *VAR_5 = VAR_4->dev;
 u32 VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < 200; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4, VAR_1);

  if (!(VAR_6 & VAR_2))
   return 0;
  FUNC_2(100, 1000);
 }

 FUNC_0(VAR_5, "Speed change timeout\n");
 return -VAR_0;
}
