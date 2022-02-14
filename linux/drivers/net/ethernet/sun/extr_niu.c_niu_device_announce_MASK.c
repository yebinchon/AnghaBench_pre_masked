
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int phy_type; } ;
struct niu {int flags; scalar_t__ mac_xcvr; TYPE_2__ vpd; TYPE_1__* parent; struct net_device* dev; } ;
struct net_device {int name; int dev_addr; } ;
struct TYPE_3__ {scalar_t__ plat_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct niu *VAR_7)
{
 struct net_device *VAR_8 = VAR_7->dev;

 FUNC_0("%s: NIU Ethernet %pM\n", VAR_8->name, VAR_8->dev_addr);

 if (VAR_7->parent->plat_type == VAR_6) {
  FUNC_0("%s: Port type[%s] mode[%s:%s] XCVR[%s] phy[%s]\n",
    VAR_8->name,
    (VAR_7->flags & VAR_5 ? "XMAC" : "BMAC"),
    (VAR_7->flags & VAR_2 ? "10G" : "1G"),
    (VAR_7->flags & VAR_3 ? "RGMII FIBER" : "SERDES"),
    (VAR_7->mac_xcvr == VAR_0 ? "MII" :
     (VAR_7->mac_xcvr == VAR_1 ? "PCS" : "XPCS")),
    VAR_7->vpd.phy_type);
 } else {
  FUNC_0("%s: Port type[%s] mode[%s:%s] XCVR[%s] phy[%s]\n",
    VAR_8->name,
    (VAR_7->flags & VAR_5 ? "XMAC" : "BMAC"),
    (VAR_7->flags & VAR_2 ? "10G" : "1G"),
    (VAR_7->flags & VAR_3 ? "FIBER" :
     (VAR_7->flags & VAR_4 ? "SERDES" :
      "COPPER")),
    (VAR_7->mac_xcvr == VAR_0 ? "MII" :
     (VAR_7->mac_xcvr == VAR_1 ? "PCS" : "XPCS")),
    VAR_7->vpd.phy_type);
 }
}
