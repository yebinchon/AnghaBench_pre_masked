
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * function; } ;
struct mvs_phy {TYPE_1__ timer; } ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct mvs_phy *VAR_0)
{
 if (VAR_0->timer.function)
  FUNC_0(&VAR_0->timer);
 VAR_0->timer.function = ((void*)0);
}
