
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct adapter {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;




 int VAR_1 ;
 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct adapter*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
         enum ethtool_phys_id_state VAR_3)
{
 struct port_info *VAR_4 = FUNC_0(VAR_2);
 struct adapter *VAR_5 = VAR_4->adapter;

 switch (VAR_3) {
 case 131:
  return 1;

 case 129:
  FUNC_1(VAR_5, VAR_0, VAR_1, 0);
  break;

 case 128:
 case 130:
  FUNC_1(VAR_5, VAR_0, VAR_1,
    VAR_1);
 }

 return 0;
}
