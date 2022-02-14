
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * write_reg; int * read_reg; } ;
struct TYPE_6__ {TYPE_2__ ops; int type; int phy_semaphore_mask; } ;
struct TYPE_4__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ bus; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 int VAR_2 ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_3)
{
 if (VAR_3->bus.lan_id)
  VAR_3->phy.phy_semaphore_mask = VAR_1;
 else
  VAR_3->phy.phy_semaphore_mask = VAR_0;

 VAR_3->phy.type = VAR_2;
 VAR_3->phy.ops.read_reg = ((void*)0);
 VAR_3->phy.ops.write_reg = ((void*)0);
 return FUNC_0(VAR_3);
}
