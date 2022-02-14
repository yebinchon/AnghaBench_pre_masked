
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev; } ;
struct mvneta_port {int phylink; } ;
struct ethtool_wolinfo {int wolopts; } ;


 int FUNC_0 (int *,int) ;
 struct mvneta_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct ethtool_wolinfo*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0,
      struct ethtool_wolinfo *VAR_1)
{
 struct mvneta_port *VAR_2 = FUNC_1(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->phylink, VAR_1);
 if (!VAR_3)
  FUNC_0(&VAR_0->dev, !!VAR_1->wolopts);

 return VAR_3;
}
