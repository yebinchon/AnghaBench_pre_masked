
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dw_pcie {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct dw_pcie *VAR_4)
{
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (FUNC_1(VAR_4)) {
   FUNC_0(VAR_4->dev, "Link up\n");
   return 0;
  }
  FUNC_2(VAR_3, VAR_2);
 }

 FUNC_0(VAR_4->dev, "Phy link never came up\n");

 return -VAR_0;
}
