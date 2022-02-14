
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int (* acquire_swfw_sync ) (struct igc_hw*,int ) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct igc_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct igc_hw*,int ) ;

__attribute__((used)) static s32 FUNC_1(struct igc_hw *VAR_1)
{
 u16 VAR_2 = VAR_0;

 return VAR_1->mac.ops.acquire_swfw_sync(VAR_1, VAR_2);
}
