
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_policy {int action; } ;
struct mv88e6xxx_chip {int dev; int policies; } ;
struct ethtool_rx_flow_spec {int location; } ;
struct ethtool_rxnfc {int cmd; struct ethtool_rx_flow_spec fs; } ;
struct dsa_switch {struct mv88e6xxx_chip* priv; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (int ,struct mv88e6xxx_policy*) ;
 struct mv88e6xxx_policy* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,struct mv88e6xxx_policy*) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int,struct ethtool_rx_flow_spec*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_6(struct dsa_switch *VAR_3, int VAR_4,
          struct ethtool_rxnfc *VAR_5)
{
 struct ethtool_rx_flow_spec *VAR_6 = &VAR_5->fs;
 struct mv88e6xxx_chip *VAR_7 = VAR_3->priv;
 struct mv88e6xxx_policy *VAR_8;
 int VAR_9;

 FUNC_4(VAR_7);

 switch (VAR_5->cmd) {
 case 128:
  VAR_9 = FUNC_3(VAR_7, VAR_4, VAR_6);
  break;
 case 129:
  VAR_9 = -VAR_0;
  VAR_8 = FUNC_1(&VAR_7->policies, VAR_6->location);
  if (VAR_8) {
   VAR_8->action = VAR_2;
   VAR_9 = FUNC_2(VAR_7, VAR_4, VAR_8);
   FUNC_0(VAR_7->dev, VAR_8);
  }
  break;
 default:
  VAR_9 = -VAR_1;
  break;
 }

 FUNC_5(VAR_7);

 return VAR_9;
}
