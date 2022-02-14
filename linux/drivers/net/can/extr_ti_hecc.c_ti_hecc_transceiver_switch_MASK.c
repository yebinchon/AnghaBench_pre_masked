
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_hecc_priv {int reg_xceiver; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct ti_hecc_priv *VAR_0,
          int VAR_1)
{
 if (!VAR_0->reg_xceiver)
  return 0;

 if (VAR_1)
  return FUNC_1(VAR_0->reg_xceiver);
 else
  return FUNC_0(VAR_0->reg_xceiver);
}
