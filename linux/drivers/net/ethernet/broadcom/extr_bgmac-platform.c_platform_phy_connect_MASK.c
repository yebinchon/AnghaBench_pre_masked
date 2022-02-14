
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ nicpm_base; } ;
struct bgmac {TYPE_2__* dev; int net_dev; TYPE_1__ plat; } ;
struct TYPE_4__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 struct phy_device* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct bgmac *VAR_3)
{
 struct phy_device *VAR_4;

 if (VAR_3->plat.nicpm_base)
  VAR_4 = FUNC_1(VAR_3->net_dev,
       VAR_3->dev->of_node,
       VAR_2);
 else
  VAR_4 = FUNC_1(VAR_3->net_dev,
       VAR_3->dev->of_node,
       VAR_1);
 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "PHY connection failed\n");
  return -VAR_0;
 }

 return 0;
}
