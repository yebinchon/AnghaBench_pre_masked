
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ef4_nic {TYPE_1__* type; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;
typedef enum ef4_led_mode { ____Placeholder_ef4_led_mode } ef4_led_mode ;
struct TYPE_2__ {int (* set_id_led ) (struct ef4_nic*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 struct ef4_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ef4_nic*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
          enum ethtool_phys_id_state VAR_4)
{
 struct ef4_nic *VAR_5 = FUNC_0(VAR_3);
 enum ef4_led_mode VAR_6 = VAR_0;

 switch (VAR_4) {
 case 128:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 case 130:
  VAR_6 = VAR_0;
  break;
 case 131:
  return 1;
 }

 VAR_5->type->set_id_led(VAR_5, VAR_6);
 return 0;
}
