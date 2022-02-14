
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct phylink_link_state {int advertising; int interface; } ;
struct TYPE_6__ {int advertising; int interface; } ;
struct phylink {int supported; int state_mutex; TYPE_3__ link_config; struct phy_device* phydev; } ;
struct TYPE_4__ {int dev; } ;
struct phy_device {int advertising; int lock; TYPE_2__* drv; TYPE_1__ mdio; int phy_link_change; struct phylink* phylink; int supported; } ;
typedef int config ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct phylink_link_state*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*) ;
 int FUNC_8 (struct phylink*,char*,int ,int ,int ,int ) ;
 int FUNC_9 (struct phylink*,char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (struct phylink*,int ,struct phylink_link_state*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(struct phylink *VAR_5, struct phy_device *VAR_6)
{
 struct phylink_link_state VAR_7;
 FUNC_0(VAR_4);
 int VAR_8;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 FUNC_2(VAR_4, VAR_6->supported);
 FUNC_2(VAR_7.advertising, VAR_6->advertising);
 VAR_7.interface = VAR_5->link_config.interface;
 if (FUNC_11(VAR_4, VAR_1))
  FUNC_10(VAR_7.advertising, VAR_1);
 if (FUNC_11(VAR_4, VAR_0))
  FUNC_10(VAR_7.advertising, VAR_0);

 VAR_8 = FUNC_12(VAR_5, VAR_4, &VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6->phylink = VAR_5;
 VAR_6->phy_link_change = VAR_3;

 FUNC_9(VAR_5,
       "PHY [%s] driver [%s]\n", FUNC_1(&VAR_6->mdio.dev),
       VAR_6->drv->name);

 FUNC_4(&VAR_6->lock);
 FUNC_4(&VAR_5->state_mutex);
 VAR_5->phydev = VAR_6;
 FUNC_2(VAR_5->supported, VAR_4);
 FUNC_2(VAR_5->link_config.advertising, VAR_7.advertising);


 FUNC_2(VAR_6->advertising, VAR_7.advertising);
 FUNC_5(&VAR_5->state_mutex);
 FUNC_5(&VAR_6->lock);

 FUNC_8(VAR_5,
      "phy: setting supported %*pb advertising %*pb\n",
      VAR_2, VAR_5->supported,
      VAR_2, VAR_6->advertising);

 if (FUNC_6(VAR_6))
  FUNC_7(VAR_6);

 return 0;
}
