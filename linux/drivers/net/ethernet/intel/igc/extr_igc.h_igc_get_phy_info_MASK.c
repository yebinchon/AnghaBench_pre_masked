
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* get_phy_info ) (struct igc_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct igc_hw {TYPE_2__ phy; } ;
typedef int s32 ;


 int FUNC_0 (struct igc_hw*) ;

__attribute__((used)) static inline s32 FUNC_1(struct igc_hw *VAR_0)
{
 if (VAR_0->phy.ops.get_phy_info)
  return VAR_0->phy.ops.get_phy_info(VAR_0);

 return 0;
}
