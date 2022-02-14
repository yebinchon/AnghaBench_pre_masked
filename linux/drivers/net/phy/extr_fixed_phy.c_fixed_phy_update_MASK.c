
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; } ;
struct fixed_phy {scalar_t__ link_gpiod; TYPE_1__ status; int no_carrier; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fixed_phy *VAR_0)
{
 if (!VAR_0->no_carrier && VAR_0->link_gpiod)
  VAR_0->status.link = !!FUNC_0(VAR_0->link_gpiod);
}
