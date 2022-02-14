
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_5__ {int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct TYPE_4__ {int speed; int width; int type; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ bus; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbe_hw*,int ) ;
 int FUNC_3 (struct ixgbe_hw*) ;

s32 FUNC_4(struct ixgbe_hw *VAR_2)
{
 u16 VAR_3;

 VAR_2->bus.type = VAR_1;


 VAR_3 = FUNC_2(VAR_2, VAR_0);

 VAR_2->bus.width = FUNC_1(VAR_3);
 VAR_2->bus.speed = FUNC_0(VAR_3);

 VAR_2->mac.ops.set_lan_id(VAR_2);

 return 0;
}
