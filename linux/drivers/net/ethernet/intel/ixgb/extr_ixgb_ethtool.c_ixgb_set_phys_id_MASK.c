
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgb_adapter {int hw; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ixgb_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_0, enum ethtool_phys_id_state VAR_1)
{
 struct ixgb_adapter *VAR_2 = FUNC_2(VAR_0);

 switch (VAR_1) {
 case 131:
  return 2;

 case 128:
  FUNC_1(&VAR_2->hw);
  break;

 case 129:
 case 130:
  FUNC_0(&VAR_2->hw);
 }

 return 0;
}
