
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ default_ticks; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 VAR_1 = VAR_0.default_ticks;

 if (VAR_2)
  FUNC_0("reset (%i ticks)\n", (int) VAR_1);

}
