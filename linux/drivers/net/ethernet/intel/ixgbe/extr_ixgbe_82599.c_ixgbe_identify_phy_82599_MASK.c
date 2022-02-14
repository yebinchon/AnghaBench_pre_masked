
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_5)
{
 s32 VAR_6;


 VAR_6 = FUNC_1(VAR_5);
 if (VAR_6) {

  if (VAR_5->mac.ops.get_media_type(VAR_5) == VAR_1)
   return VAR_6;
  VAR_6 = FUNC_0(VAR_5);
 }


 if (VAR_5->phy.type == VAR_4) {
  VAR_5->phy.type = VAR_2;
  VAR_6 = 0;
 }


 if (VAR_5->phy.type == VAR_3)
  return VAR_0;

 return VAR_6;
}
