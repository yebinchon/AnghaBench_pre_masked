
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct delta_dev {scalar_t__ clk_delta; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 struct delta_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct delta_dev *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->clk_delta)
  if (FUNC_0(VAR_1->clk_delta))
   FUNC_2(VAR_0, "failed to prepare/enable delta clk\n");

 return 0;
}
