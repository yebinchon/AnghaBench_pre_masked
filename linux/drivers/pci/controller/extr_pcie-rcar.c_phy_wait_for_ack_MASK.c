
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_pcie {struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct rcar_pcie*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct rcar_pcie *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 unsigned int VAR_5 = 100;

 while (VAR_5--) {
  if (FUNC_1(VAR_3, VAR_1) & VAR_2)
   return 0;

  FUNC_2(100);
 }

 FUNC_0(VAR_4, "Access to PCIe phy timed out\n");

 return -VAR_0;
}
