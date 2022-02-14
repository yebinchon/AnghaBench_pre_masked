
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ (* check_for_link ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int autoneg_failed; TYPE_1__ ops; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_3)
{
 struct e1000_mac_info *VAR_4 = &VAR_3->mac;
 u32 VAR_5, VAR_6;
 s32 VAR_7;







 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  FUNC_3(10000, 11000);
  VAR_6 = FUNC_1(VAR_2);
  if (VAR_6 & VAR_0)
   break;
 }
 if (VAR_5 == VAR_1) {
  FUNC_0("Never got a valid link from auto-neg!!!\n");
  VAR_4->autoneg_failed = 1;





  VAR_7 = VAR_4->ops.check_for_link(VAR_3);
  if (VAR_7) {
   FUNC_0("Error while checking for link\n");
   return VAR_7;
  }
  VAR_4->autoneg_failed = 0;
 } else {
  VAR_4->autoneg_failed = 0;
  FUNC_0("Valid Link Found\n");
 }

 return 0;
}
