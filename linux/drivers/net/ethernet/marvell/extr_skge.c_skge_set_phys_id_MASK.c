
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct skge_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct skge_port*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
       enum ethtool_phys_id_state VAR_4)
{
 struct skge_port *VAR_5 = FUNC_0(VAR_3);

 switch (VAR_4) {
 case 131:
  return 2;

 case 128:
  FUNC_2(VAR_5, VAR_2);
  break;

 case 129:
  FUNC_2(VAR_5, VAR_0);
  break;

 case 130:

  FUNC_2(VAR_5, FUNC_1(VAR_3) ? VAR_1 : VAR_0);
 }

 return 0;
}
