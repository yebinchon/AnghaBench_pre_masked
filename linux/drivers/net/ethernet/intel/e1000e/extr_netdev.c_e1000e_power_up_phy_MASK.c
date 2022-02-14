
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int (* setup_link ) (TYPE_5__*) ;} ;
struct TYPE_10__ {TYPE_3__ ops; } ;
struct TYPE_7__ {int (* power_up ) (TYPE_5__*) ;} ;
struct TYPE_8__ {TYPE_1__ ops; } ;
struct TYPE_11__ {TYPE_4__ mac; TYPE_2__ phy; } ;
struct e1000_adapter {TYPE_5__ hw; } ;


 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*) ;

void FUNC_2(struct e1000_adapter *VAR_0)
{
 if (VAR_0->hw.phy.ops.power_up)
  VAR_0->hw.phy.ops.power_up(&VAR_0->hw);

 VAR_0->hw.mac.ops.setup_link(&VAR_0->hw);
}
