
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int dev; } ;
struct fs_enet_private {int oldduplex; TYPE_1__* fpi; scalar_t__ oldspeed; scalar_t__ oldlink; } ;
typedef int phy_interface_t ;
struct TYPE_2__ {int phy_node; scalar_t__ use_rmii; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int VAR_3 ;
 struct fs_enet_private* FUNC_1 (struct net_device*) ;
 struct phy_device* FUNC_2 (struct net_device*,int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4)
{
 struct fs_enet_private *VAR_5 = FUNC_1(VAR_4);
 struct phy_device *VAR_6;
 phy_interface_t VAR_7;

 VAR_5->oldlink = 0;
 VAR_5->oldspeed = 0;
 VAR_5->oldduplex = -1;

 VAR_7 = VAR_5->fpi->use_rmii ?
  VAR_2 : VAR_1;

 VAR_6 = FUNC_2(VAR_4, VAR_5->fpi->phy_node, &VAR_3, 0,
    VAR_7);
 if (!VAR_6) {
  FUNC_0(&VAR_4->dev, "Could not attach to PHY\n");
  return -VAR_0;
 }

 return 0;
}
