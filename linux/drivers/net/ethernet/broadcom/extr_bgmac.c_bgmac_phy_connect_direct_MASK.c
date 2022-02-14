
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct fixed_phy_status {int link; int duplex; int speed; } ;
struct bgmac {int dev; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*) ;
 struct phy_device* FUNC_2 (int ,struct fixed_phy_status*,int *) ;
 int FUNC_3 (int ,struct phy_device*,int ,int ) ;

int FUNC_4(struct bgmac *VAR_6)
{
 struct fixed_phy_status VAR_7 = {
  .link = 1,
  .speed = VAR_4,
  .duplex = VAR_0,
 };
 struct phy_device *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_2(VAR_3, &VAR_7, ((void*)0));
 if (!VAR_8 || FUNC_0(VAR_8)) {
  FUNC_1(VAR_6->dev, "Failed to register fixed PHY device\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_3(VAR_6->net_dev, VAR_8, VAR_5,
     VAR_2);
 if (VAR_9) {
  FUNC_1(VAR_6->dev, "Connecting PHY failed\n");
  return VAR_9;
 }

 return VAR_9;
}
