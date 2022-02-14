
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int phy_id; } ;
struct nic {scalar_t__ phy; TYPE_1__ mii; int mac; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*,int ,int,int) ;
 struct nic* FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_6,
       enum ethtool_phys_id_state VAR_7)
{
 struct nic *VAR_8 = FUNC_1(VAR_6);
 enum led_state {
  led_on = 0x01,
  led_off = 0x04,
  led_on_559 = 0x05,
  led_on_557 = 0x07,
 };
 u16 VAR_9 = (VAR_8->phy == VAR_5) ? VAR_2 :
  VAR_3;
 u16 VAR_10 = 0;

 switch (VAR_7) {
 case 131:
  return 2;

 case 128:
  VAR_10 = (VAR_8->phy == VAR_5) ? VAR_1 :
         (VAR_8->mac < VAR_4) ? led_on_557 : led_on_559;
  break;

 case 129:
  VAR_10 = (VAR_8->phy == VAR_5) ? VAR_0 : led_off;
  break;

 case 130:
  break;
 }

 FUNC_0(VAR_6, VAR_8->mii.phy_id, VAR_9, VAR_10);
 return 0;
}
