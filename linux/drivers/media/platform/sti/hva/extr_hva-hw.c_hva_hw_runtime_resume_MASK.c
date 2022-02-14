
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hva_dev {int clk; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (struct device*,char*,int ) ;
 struct hva_dev* FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_3)
{
 struct hva_dev *VAR_4 = FUNC_3(VAR_3);

 if (FUNC_0(VAR_4->clk)) {
  FUNC_2(VAR_4->dev, "%s     failed to prepare hva clk\n",
   VAR_2);
  return -VAR_1;
 }

 if (FUNC_1(VAR_4->clk, VAR_0)) {
  FUNC_2(VAR_3, "%s     failed to set clock frequency\n",
   VAR_2);
  return -VAR_1;
 }

 return 0;
}
