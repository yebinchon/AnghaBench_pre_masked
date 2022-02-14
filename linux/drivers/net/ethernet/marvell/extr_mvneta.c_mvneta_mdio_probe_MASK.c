
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvneta_port {TYPE_1__* dev; int phylink; int dn; } ;
struct ethtool_wolinfo {int supported; int cmd; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (int ,struct ethtool_wolinfo*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mvneta_port *VAR_1)
{
 struct ethtool_wolinfo VAR_2 = { .cmd = VAR_0 };
 int VAR_3 = FUNC_3(VAR_1->phylink, VAR_1->dn, 0);

 if (VAR_3)
  FUNC_1(VAR_1->dev, "could not attach PHY: %d\n", VAR_3);

 FUNC_2(VAR_1->phylink, &VAR_2);
 FUNC_0(&VAR_1->dev->dev, !!VAR_2.supported);

 return VAR_3;
}
