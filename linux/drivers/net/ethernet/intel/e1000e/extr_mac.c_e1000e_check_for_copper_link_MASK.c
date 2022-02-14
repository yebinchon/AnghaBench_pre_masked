
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct e1000_mac_info {int get_link_status; TYPE_1__ ops; int autoneg; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int,int ,int*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct e1000_hw*) ;

s32 FUNC_5(struct e1000_hw *VAR_1)
{
 struct e1000_mac_info *VAR_2 = &VAR_1->mac;
 s32 VAR_3;
 bool VAR_4;






 if (!VAR_2->get_link_status)
  return 0;
 VAR_2->get_link_status = 0;





 VAR_3 = FUNC_2(VAR_1, 1, 0, &VAR_4);
 if (VAR_3 || !VAR_4)
  goto out;




 FUNC_0(VAR_1);




 if (!VAR_2->autoneg)
  return -VAR_0;





 VAR_2->ops.config_collision_dist(VAR_1);






 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  FUNC_3("Error configuring flow control\n");

 return VAR_3;

out:
 VAR_2->get_link_status = 1;
 return VAR_3;
}
