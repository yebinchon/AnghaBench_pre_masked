
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdes_am654 {int pll_enable; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct serdes_am654 *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->pll_enable, VAR_0);
 if (VAR_3)
  FUNC_0(VAR_2, "Failed to disable PLL\n");
}
