
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int line_speed; } ;
struct bnx2x {TYPE_1__ link_vars; int link_params; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int FUNC_3 (struct bnx2x*) ;
 int FUNC_4 (int *,TYPE_1__*,int ,int ) ;
 struct bnx2x* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_7,
        enum ethtool_phys_id_state VAR_8)
{
 struct bnx2x *VAR_9 = FUNC_5(VAR_7);

 if (!FUNC_2(VAR_9)) {
  FUNC_0(VAR_0 | VAR_1,
     "cannot access eeprom when the interface is down\n");
  return -VAR_2;
 }

 switch (VAR_8) {
 case 131:
  return 1;

 case 128:
  FUNC_1(VAR_9);
  FUNC_4(&VAR_9->link_params, &VAR_9->link_vars,
         VAR_4, VAR_6);
  FUNC_3(VAR_9);
  break;

 case 129:
  FUNC_1(VAR_9);
  FUNC_4(&VAR_9->link_params, &VAR_9->link_vars,
         VAR_3, 0);
  FUNC_3(VAR_9);
  break;

 case 130:
  FUNC_1(VAR_9);
  FUNC_4(&VAR_9->link_params, &VAR_9->link_vars,
         VAR_5,
         VAR_9->link_vars.line_speed);
  FUNC_3(VAR_9);
 }

 return 0;
}
