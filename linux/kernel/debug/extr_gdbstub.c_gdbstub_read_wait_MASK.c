
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* read_char ) () ;} ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_2 = VAR_1->read_char();
 while (VAR_2 == VAR_0)
  VAR_2 = VAR_1->read_char();
 return VAR_2;
}
