
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_char ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

int FUNC_1(void)
{
 int VAR_3 = VAR_1->read_char();
 if (VAR_3 == VAR_0)
  return -1;
 if (!VAR_2)
  return VAR_3;
 if (VAR_3 == 127)
  return 8;
 return VAR_3;
}
