
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct TYPE_4__ {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; TYPE_2__ hw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

u32 FUNC_0(struct ixgbe_adapter *VAR_2)
{
 if (VAR_2->hw.mac.type < VAR_1)
  return 128;
 else if (VAR_2->flags & VAR_0)
  return 64;
 else
  return 512;
}
