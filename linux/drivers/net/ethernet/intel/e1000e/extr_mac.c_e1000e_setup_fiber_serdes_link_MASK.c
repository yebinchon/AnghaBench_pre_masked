
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ media_type; } ;
struct TYPE_4__ {int (* config_collision_dist ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct e1000_hw*) ;
 int FUNC_7 (int,int) ;

s32 FUNC_8(struct e1000_hw *VAR_4)
{
 u32 VAR_5;
 s32 VAR_6;

 VAR_5 = FUNC_4(VAR_0);


 VAR_5 &= ~VAR_1;

 VAR_4->mac.ops.config_collision_dist(VAR_4);

 VAR_6 = FUNC_0(VAR_4);
 if (VAR_6)
  return VAR_6;







 FUNC_3("Auto-negotiation enabled\n");

 FUNC_5(VAR_0, VAR_5);
 FUNC_2();
 FUNC_7(1000, 2000);





 if (VAR_4->phy.media_type == VAR_3 ||
     (FUNC_4(VAR_0) & VAR_2)) {
  VAR_6 = FUNC_1(VAR_4);
 } else {
  FUNC_3("No signal detected\n");
 }

 return VAR_6;
}
