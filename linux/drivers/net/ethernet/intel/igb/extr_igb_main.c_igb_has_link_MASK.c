
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int media_type; scalar_t__ id; } ;
struct TYPE_4__ {int (* check_for_link ) (struct e1000_hw*) ;} ;
struct TYPE_5__ {scalar_t__ type; int get_link_status; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
struct igb_adapter {int flags; int link_check_timeout; int netdev; struct e1000_hw hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct e1000_hw*) ;

bool FUNC_2(struct igb_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 bool VAR_7 = 0;






 switch (VAR_6->phy.media_type) {
 case 130:
  if (!VAR_6->mac.get_link_status)
   return 1;

 case 129:
  VAR_6->mac.ops.check_for_link(VAR_6);
  VAR_7 = !VAR_6->mac.get_link_status;
  break;
 default:
 case 128:
  break;
 }

 if (((VAR_6->mac.type == VAR_2) ||
      (VAR_6->mac.type == VAR_3)) &&
      (VAR_6->phy.id == VAR_0)) {
  if (!FUNC_0(VAR_5->netdev)) {
   VAR_5->flags &= ~VAR_1;
  } else if (!(VAR_5->flags & VAR_1)) {
   VAR_5->flags |= VAR_1;
   VAR_5->link_check_timeout = VAR_4;
  }
 }

 return VAR_7;
}
