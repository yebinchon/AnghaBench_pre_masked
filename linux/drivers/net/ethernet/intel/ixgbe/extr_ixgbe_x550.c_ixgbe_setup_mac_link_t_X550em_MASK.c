
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ (* setup_link_speed ) (struct ixgbe_hw*,int,int) ;} ;
struct TYPE_6__ {int nw_mng_if_sel; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_1__ mac; } ;
typedef scalar_t__ s32 ;
typedef int ixgbe_link_speed ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int,int) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_4,
      ixgbe_link_speed VAR_5,
      bool VAR_6)
{
 s32 VAR_7;
 ixgbe_link_speed VAR_8;




 if (VAR_5 & VAR_0)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_1;



 if (VAR_4->mac.type == VAR_3 &&
     !(VAR_4->phy.nw_mng_if_sel & VAR_2)) {
  VAR_7 = FUNC_0(VAR_4, &VAR_8);

  if (VAR_7)
   return VAR_7;
 }

 return VAR_4->phy.ops.setup_link_speed(VAR_4, VAR_5, VAR_6);
}
