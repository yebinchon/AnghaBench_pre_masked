
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isc_clk {scalar_t__ id; int dev; } ;
struct clk_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct clk_hw*) ;
 int FUNC_1 (int ) ;
 struct isc_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_3(struct clk_hw *VAR_1)
{
 struct isc_clk *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_1);

 if (VAR_2->id == VAR_0)
  FUNC_1(VAR_2->dev);
}
