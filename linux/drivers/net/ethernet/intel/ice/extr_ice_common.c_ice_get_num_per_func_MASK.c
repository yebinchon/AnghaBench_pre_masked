
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int valid_functions; } ;
struct TYPE_4__ {TYPE_1__ common_cap; } ;
struct ice_hw {TYPE_2__ dev_caps; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct ice_hw *VAR_1, u32 VAR_2)
{
 u8 VAR_3;


 VAR_3 = FUNC_0(VAR_1->dev_caps.common_cap.valid_functions &
    0xFF);

 if (!VAR_3)
  return 0;

 return VAR_2 / VAR_3;
}
