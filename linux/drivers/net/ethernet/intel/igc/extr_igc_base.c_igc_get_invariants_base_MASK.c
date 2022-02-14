
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct igc_mac_info {int type; } ;
struct TYPE_2__ {int media_type; } ;
struct igc_hw {int device_id; struct igc_mac_info mac; TYPE_1__ phy; } ;
typedef scalar_t__ s32 ;







 scalar_t__ VAR_0 ;

 scalar_t__ FUNC_0 (struct igc_hw*) ;
 scalar_t__ FUNC_1 (struct igc_hw*) ;
 scalar_t__ FUNC_2 (struct igc_hw*) ;
 scalar_t__ FUNC_3 (struct igc_hw*) ;
 int VAR_1 ;

__attribute__((used)) static s32 FUNC_4(struct igc_hw *VAR_2)
{
 struct igc_mac_info *VAR_3 = &VAR_2->mac;
 s32 VAR_4 = 0;

 switch (VAR_2->device_id) {
 case 130:
 case 129:
 case 132:
 case 133:
 case 131:
  VAR_3->type = 128;
  break;
 default:
  return -VAR_0;
 }

 VAR_2->phy.media_type = VAR_1;


 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto out;


 VAR_4 = FUNC_1(VAR_2);
 switch (VAR_2->mac.type) {
 case 128:
  VAR_4 = FUNC_2(VAR_2);
  break;
 default:
  break;
 }


 VAR_4 = FUNC_3(VAR_2);
 if (VAR_4)
  goto out;

out:
 return VAR_4;
}
