
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int media_type; } ;
struct ixgbe_hw {int device_id; TYPE_1__ phy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct ixgbe_hw *VAR_3)
{
 if (!FUNC_0(VAR_3->phy.media_type))
  return VAR_2;

 switch (VAR_3->device_id) {
 case 135:
 case 132:
 case 131:
 case 129:
  return VAR_1;
 case 134:
 case 133:
 case 130:
 case 128:
  return VAR_0;
 default:
  return VAR_1 |
         VAR_0;
 }
}
