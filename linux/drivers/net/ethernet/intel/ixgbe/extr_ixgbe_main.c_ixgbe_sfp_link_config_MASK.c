
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {scalar_t__ sfp_poll_time; int flags2; TYPE_2__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_0(struct ixgbe_adapter *VAR_3)
{






 if (VAR_3->hw.mac.type == VAR_2)
  VAR_3->flags2 |= VAR_0;

 VAR_3->flags2 |= VAR_1;
 VAR_3->sfp_poll_time = 0;
}
