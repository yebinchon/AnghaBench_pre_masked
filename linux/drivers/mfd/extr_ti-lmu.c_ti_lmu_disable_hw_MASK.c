
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_lmu {scalar_t__ en_gpio; } ;


 int FUNC_0 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
 struct ti_lmu *VAR_1 = VAR_0;
 if (VAR_1->en_gpio)
  FUNC_0(VAR_1->en_gpio, 0);
}
