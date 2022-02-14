
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_6__ {int type; TYPE_2__ ops; } ;
struct TYPE_4__ {int type; } ;
struct ixgbe_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*) ;

__attribute__((used)) static inline bool FUNC_1(struct ixgbe_hw *VAR_1)
{
 switch (VAR_1->mac.type) {
 case 133:
  if (VAR_1->phy.type == VAR_0)
   return 1;
  return 0;
 case 132:
 case 131:
 case 130:
  switch (VAR_1->mac.ops.get_media_type(VAR_1)) {
  case 129:
  case 128:
   return 1;
  default:
   return 0;
  }
 default:
  return 0;
 }
}
