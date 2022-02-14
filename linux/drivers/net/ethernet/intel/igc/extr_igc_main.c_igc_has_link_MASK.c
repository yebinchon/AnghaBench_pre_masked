
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int media_type; scalar_t__ id; } ;
struct TYPE_4__ {int (* check_for_link ) (struct igc_hw*) ;} ;
struct TYPE_5__ {scalar_t__ type; int get_link_status; TYPE_1__ ops; } ;
struct igc_hw {TYPE_3__ phy; TYPE_2__ mac; } ;
struct igc_adapter {int flags; int link_check_timeout; int netdev; struct igc_hw hw; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct igc_hw*) ;

bool FUNC_2(struct igc_adapter *VAR_4)
{
 struct igc_hw *VAR_5 = &VAR_4->hw;
 bool VAR_6 = 0;






 switch (VAR_5->phy.media_type) {
 case 129:
  if (!VAR_5->mac.get_link_status)
   return 1;
  VAR_5->mac.ops.check_for_link(VAR_5);
  VAR_6 = !VAR_5->mac.get_link_status;
  break;
 default:
 case 128:
  break;
 }

 if (VAR_5->mac.type == VAR_2 &&
     VAR_5->phy.id == VAR_0) {
  if (!FUNC_0(VAR_4->netdev)) {
   VAR_4->flags &= ~VAR_1;
  } else if (!(VAR_4->flags & VAR_1)) {
   VAR_4->flags |= VAR_1;
   VAR_4->link_check_timeout = VAR_3;
  }
 }

 return VAR_6;
}
