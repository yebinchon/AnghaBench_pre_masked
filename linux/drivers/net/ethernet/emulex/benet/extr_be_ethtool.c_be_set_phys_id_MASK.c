
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct be_adapter {int beacon_state; int hba_port_num; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct be_adapter*,int ,int *) ;
 int FUNC_1 (struct be_adapter*,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 struct be_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
     enum ethtool_phys_id_state VAR_3)
{
 struct be_adapter *VAR_4 = FUNC_3(VAR_2);
 int VAR_5 = 0;

 switch (VAR_3) {
 case 131:
  VAR_5 = FUNC_0(VAR_4, VAR_4->hba_port_num,
       &VAR_4->beacon_state);
  if (VAR_5)
   return FUNC_2(VAR_5);
  return 1;

 case 128:
  VAR_5 = FUNC_1(VAR_4, VAR_4->hba_port_num,
       0, 0, VAR_1);
  break;

 case 129:
  VAR_5 = FUNC_1(VAR_4, VAR_4->hba_port_num,
       0, 0, VAR_0);
  break;

 case 130:
  VAR_5 = FUNC_1(VAR_4, VAR_4->hba_port_num,
       0, 0, VAR_4->beacon_state);
 }

 return FUNC_2(VAR_5);
}
