
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int interface; scalar_t__ an_enabled; } ;
struct phylink {int config; TYPE_2__* ops; TYPE_1__ link_config; } ;
struct TYPE_4__ {int (* mac_an_restart ) (int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct phylink *VAR_0)
{
 if (VAR_0->link_config.an_enabled &&
     FUNC_0(VAR_0->link_config.interface))
  VAR_0->ops->mac_an_restart(VAR_0->config);
}
