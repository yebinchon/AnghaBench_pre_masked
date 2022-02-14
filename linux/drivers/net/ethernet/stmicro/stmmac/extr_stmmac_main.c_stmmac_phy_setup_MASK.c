
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int type; int * dev; } ;
struct stmmac_priv {struct phylink* phylink; TYPE_3__ phylink_config; TYPE_1__* dev; TYPE_2__* plat; } ;
struct phylink {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct TYPE_5__ {int phy_interface; int phylink_node; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (struct phylink*) ;
 int VAR_0 ;
 int FUNC_1 (struct phylink*) ;
 struct fwnode_handle* FUNC_2 (int ) ;
 struct phylink* FUNC_3 (TYPE_3__*,struct fwnode_handle*,int,int *) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct stmmac_priv *VAR_2)
{
 struct fwnode_handle *VAR_3 = FUNC_2(VAR_2->plat->phylink_node);
 int VAR_4 = VAR_2->plat->phy_interface;
 struct phylink *VAR_5;

 VAR_2->phylink_config.dev = &VAR_2->dev->dev;
 VAR_2->phylink_config.type = VAR_0;

 VAR_5 = FUNC_3(&VAR_2->phylink_config, VAR_3,
     VAR_4, &VAR_1);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_2->phylink = VAR_5;
 return 0;
}
