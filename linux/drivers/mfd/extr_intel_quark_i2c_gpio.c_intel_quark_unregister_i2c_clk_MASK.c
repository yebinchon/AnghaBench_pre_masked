
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_quark_mfd {int i2c_clk; int i2c_clk_lookup; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct intel_quark_mfd* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct intel_quark_mfd *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_1->i2c_clk_lookup)
  return;

 FUNC_1(VAR_1->i2c_clk_lookup);
 FUNC_0(VAR_1->i2c_clk);
}
