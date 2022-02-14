
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* power_down ) (TYPE_3__*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct TYPE_6__ {TYPE_2__ phy; } ;
struct e1000_adapter {TYPE_3__ hw; } ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_1(struct e1000_adapter *VAR_0)
{
 if (VAR_0->hw.phy.ops.power_down)
  VAR_0->hw.phy.ops.power_down(&VAR_0->hw);
}
