
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int media_type; scalar_t__ type; } ;
struct TYPE_4__ {int (* check_for_link ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {int serdes_has_link; TYPE_1__ ops; int get_link_status; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
struct e1000_adapter {struct e1000_hw hw; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;
 int FUNC_4 (struct e1000_hw*) ;

__attribute__((used)) static bool FUNC_5(struct e1000_adapter *VAR_6)
{
 struct e1000_hw *VAR_7 = &VAR_6->hw;
 bool VAR_8 = 0;
 s32 VAR_9 = 0;






 switch (VAR_7->phy.media_type) {
 case 131:
  if (VAR_7->mac.get_link_status) {
   VAR_9 = VAR_7->mac.ops.check_for_link(VAR_7);
   VAR_8 = !VAR_7->mac.get_link_status;
  } else {
   VAR_8 = 1;
  }
  break;
 case 130:
  VAR_9 = VAR_7->mac.ops.check_for_link(VAR_7);
  VAR_8 = !!(FUNC_1(VAR_4) & VAR_3);
  break;
 case 129:
  VAR_9 = VAR_7->mac.ops.check_for_link(VAR_7);
  VAR_8 = VAR_7->mac.serdes_has_link;
  break;
 default:
 case 128:
  break;
 }

 if ((VAR_9 == -VAR_1) && (VAR_7->phy.type == VAR_5) &&
     (FUNC_1(VAR_0) & VAR_2)) {

  FUNC_0("Gigabit has been disabled, downgrading speed\n");
 }

 return VAR_8;
}
