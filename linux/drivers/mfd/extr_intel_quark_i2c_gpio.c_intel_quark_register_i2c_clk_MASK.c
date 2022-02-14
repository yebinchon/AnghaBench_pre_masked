
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_quark_mfd {struct clk* i2c_clk; int i2c_clk_lookup; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,int ,int *,int ,int ) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*,int *,int ) ;
 int FUNC_5 (struct device*,char*) ;
 struct intel_quark_mfd* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_3)
{
 struct intel_quark_mfd *VAR_4 = FUNC_6(VAR_3);
 struct clk *VAR_5;

 VAR_5 = FUNC_2(VAR_3,
       VAR_2, ((void*)0),
       0, VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_4->i2c_clk = VAR_5;
 VAR_4->i2c_clk_lookup = FUNC_4(VAR_5, ((void*)0),
      VAR_2);

 if (!VAR_4->i2c_clk_lookup) {
  FUNC_3(VAR_4->i2c_clk);
  FUNC_5(VAR_3, "Fixed clk register failed\n");
  return -VAR_0;
 }

 return 0;
}
