
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {struct clk* clk; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct device*,char*,int) ;
 int FUNC_4 (struct device*,int ,struct clk*) ;
 struct clk* FUNC_5 (struct device*,char*) ;
 int VAR_2 ;
 struct device* FUNC_6 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_7(struct rtl8169_private *VAR_3)
{
 struct device *VAR_4 = FUNC_6(VAR_3);
 struct clk *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_4, "ether_clk");
 if (FUNC_0(VAR_5)) {
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6 == -VAR_0)

   VAR_6 = 0;
  else if (VAR_6 != -VAR_1)
   FUNC_3(VAR_4, "failed to get clk: %d\n", VAR_6);
 } else {
  VAR_3->clk = VAR_5;
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6)
   FUNC_3(VAR_4, "failed to enable clk: %d\n", VAR_6);
  else
   VAR_6 = FUNC_4(VAR_4, VAR_2, VAR_5);
 }

 return VAR_6;
}
