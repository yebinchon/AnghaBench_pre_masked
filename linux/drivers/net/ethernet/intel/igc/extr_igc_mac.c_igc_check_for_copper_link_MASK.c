
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct igc_mac_info {int get_link_status; int autoneg; } ;
struct igc_hw {struct igc_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct igc_hw*) ;
 int FUNC_2 (struct igc_hw*) ;
 int FUNC_3 (struct igc_hw*) ;
 int FUNC_4 (struct igc_hw*,int,int ,int*) ;

s32 FUNC_5(struct igc_hw *VAR_1)
{
 struct igc_mac_info *VAR_2 = &VAR_1->mac;
 s32 VAR_3;
 bool VAR_4;






 if (!VAR_2->get_link_status) {
  VAR_3 = 0;
  goto out;
 }





 VAR_3 = FUNC_4(VAR_1, 1, 0, &VAR_4);
 if (VAR_3)
  goto out;

 if (!VAR_4)
  goto out;

 VAR_2->get_link_status = 0;




 FUNC_1(VAR_1);




 if (!VAR_2->autoneg) {
  VAR_3 = -VAR_0;
  goto out;
 }





 FUNC_2(VAR_1);






 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  FUNC_0("Error configuring flow control\n");

out:
 return VAR_3;
}
