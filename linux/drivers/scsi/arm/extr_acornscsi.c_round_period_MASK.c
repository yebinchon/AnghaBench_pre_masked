
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int period_ns; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline
int FUNC_0(unsigned int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 1; VAR_0[VAR_2].period_ns; VAR_2++) {
 if ((VAR_1 <= VAR_0[VAR_2].period_ns) &&
     (VAR_1 > VAR_0[VAR_2 - 1].period_ns))
     return VAR_2;
    }
    return 7;
}
