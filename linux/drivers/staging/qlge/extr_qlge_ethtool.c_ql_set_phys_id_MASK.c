
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int led_config; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*) ;
 int FUNC_2 (struct ql_adapter*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
     enum ethtool_phys_id_state VAR_4)

{
 struct ql_adapter *VAR_5 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 129:

  if (FUNC_1(VAR_5))
   return -VAR_1;


  FUNC_2(VAR_5, VAR_2);
  return 0;

 case 128:

  if (FUNC_2(VAR_5, VAR_5->led_config))
   return -VAR_1;
  return 0;

 default:
  return -VAR_0;
 }
}
