
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mvpp2_port {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;


 int VAR_0 ;



 int FUNC_0 () ;
 int FUNC_1 (struct mvpp2_port*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct mvpp2_port*,struct ethtool_rxnfc*) ;
 int FUNC_3 (struct mvpp2_port*,struct ethtool_rxnfc*) ;
 struct mvpp2_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
       struct ethtool_rxnfc *VAR_2)
{
 struct mvpp2_port *VAR_3 = FUNC_4(VAR_1);
 int VAR_4 = 0;

 if (!FUNC_0())
  return -VAR_0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_4 = FUNC_3(VAR_3, VAR_2);
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_3, VAR_2);
  break;
 case 130:
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  break;
 default:
  return -VAR_0;
 }
 return VAR_4;
}
