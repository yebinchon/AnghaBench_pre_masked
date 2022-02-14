
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu {int orig_led_state; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;




 struct niu* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct niu*,int) ;
 int FUNC_3 (struct niu*,int ) ;
 int FUNC_4 (struct niu*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
      enum ethtool_phys_id_state VAR_2)

{
 struct niu *VAR_3 = FUNC_0(VAR_1);

 if (!FUNC_1(VAR_1))
  return -VAR_0;

 switch (VAR_2) {
 case 131:
  VAR_3->orig_led_state = FUNC_4(VAR_3);
  return 1;

 case 128:
  FUNC_2(VAR_3, 1);
  break;

 case 129:
  FUNC_2(VAR_3, 0);
  break;

 case 130:
  FUNC_3(VAR_3, VAR_3->orig_led_state);
 }

 return 0;
}
