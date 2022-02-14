
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_dev {int clk; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct hva_dev* FUNC_1 (struct device*) ;

int FUNC_2(struct device *VAR_0)
{
 struct hva_dev *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->clk);

 return 0;
}
