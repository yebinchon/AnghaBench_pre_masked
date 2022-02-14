
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {scalar_t__ link; } ;
struct fixed_phy_status {int link; int asym_pause; int pause; int duplex; int speed; } ;
struct device {struct bcmgenet_platform_data* platform_data; } ;
struct bcmgenet_priv {scalar_t__ phy_interface; int dev; TYPE_1__* pdev; } ;
struct bcmgenet_platform_data {scalar_t__ phy_interface; int phy_address; int phy_duplex; int phy_speed; scalar_t__ mdio_enabled; } ;
struct TYPE_2__ {int id; struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_1 (struct device*,char*) ;
 struct phy_device* FUNC_2 (int ,struct fixed_phy_status*,int *) ;
 struct phy_device* FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (char*,int,char*,char*,int) ;

__attribute__((used)) static int FUNC_5(struct bcmgenet_priv *VAR_6)
{
 struct device *VAR_7 = &VAR_6->pdev->dev;
 struct bcmgenet_platform_data *VAR_8 = VAR_7->platform_data;
 char VAR_9[VAR_1 + 3];
 char VAR_10[VAR_1];
 struct phy_device *VAR_11;

 FUNC_4(VAR_10, VAR_1, "%s-%d",
   VAR_5, VAR_6->pdev->id);

 if (VAR_8->phy_interface != VAR_3 && VAR_8->mdio_enabled) {
  FUNC_4(VAR_9, VAR_1, VAR_2,
    VAR_10, VAR_8->phy_address);




  VAR_11 = FUNC_3(VAR_6->dev, VAR_9, VAR_8->phy_interface);
  if (!VAR_11) {
   FUNC_1(VAR_7, "failed to register PHY device\n");
   return -VAR_0;
  }
 } else {




  struct fixed_phy_status VAR_12 = {
   .link = 1,
   .speed = VAR_8->phy_speed,
   .duplex = VAR_8->phy_duplex,
   .pause = 0,
   .asym_pause = 0,
  };

  VAR_11 = FUNC_2(VAR_4, &VAR_12, ((void*)0));
  if (!VAR_11 || FUNC_0(VAR_11)) {
   FUNC_1(VAR_7, "failed to register fixed PHY device\n");
   return -VAR_0;
  }


  VAR_11->link = 0;

 }

 VAR_6->phy_interface = VAR_8->phy_interface;

 return 0;
}
