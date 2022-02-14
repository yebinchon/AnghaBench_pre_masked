
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int (* check_for_link ) (struct e1000_hw*) ;} ;
struct TYPE_6__ {int serdes_has_link; scalar_t__ autoneg; TYPE_2__ ops; } ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_3__ mac; TYPE_1__ phy; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct e1000_hw*) ;
 int FUNC_3 (struct e1000_hw*) ;

__attribute__((used)) static int FUNC_4(struct igb_adapter *VAR_3, u64 *VAR_4)
{
 struct e1000_hw *VAR_5 = &VAR_3->hw;
 *VAR_4 = 0;
 if (VAR_5->phy.media_type == VAR_2) {
  int VAR_6 = 0;

  VAR_5->mac.serdes_has_link = 0;




  do {
   VAR_5->mac.ops.check_for_link(&VAR_3->hw);
   if (VAR_5->mac.serdes_has_link)
    return *VAR_4;
   FUNC_0(20);
  } while (VAR_6++ < 3750);

  *VAR_4 = 1;
 } else {
  VAR_5->mac.ops.check_for_link(&VAR_3->hw);
  if (VAR_5->mac.autoneg)
   FUNC_0(5000);

  if (!(FUNC_1(VAR_0) & VAR_1))
   *VAR_4 = 1;
 }
 return *VAR_4;
}
