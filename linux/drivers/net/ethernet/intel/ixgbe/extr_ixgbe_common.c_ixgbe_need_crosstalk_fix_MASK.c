
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_media_type ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; int need_crosstalk_fix; } ;




 int FUNC_0 (struct ixgbe_hw*) ;

__attribute__((used)) static bool FUNC_1(struct ixgbe_hw *VAR_0)
{

 if (!VAR_0->need_crosstalk_fix)
  return 0;


 switch (VAR_0->mac.ops.get_media_type(VAR_0)) {
 case 129:
 case 128:
  break;
 default:
  return 0;
 }

 return 1;
}
