
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period_ns; unsigned char reg_value; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static
int FUNC_0(unsigned char VAR_1)
{
    int VAR_2;

    VAR_1 &= 0xf0;
    if (VAR_1 == 0x10)
 VAR_1 = 0;

    for (VAR_2 = 1; VAR_0[VAR_2].period_ns; VAR_2++)
 if (VAR_1 == VAR_0[VAR_2].reg_value)
     return VAR_0[VAR_2].period_ns;
    return 0;
}
