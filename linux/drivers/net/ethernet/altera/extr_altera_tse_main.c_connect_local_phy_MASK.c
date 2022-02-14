
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct altera_tse_private {scalar_t__ phy_addr; int phy_iface; TYPE_1__* mdio; } ;
struct TYPE_2__ {int id; } ;


 scalar_t__ FUNC_0 (struct phy_device*) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct net_device*,char*,char*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct altera_tse_private* FUNC_3 (struct net_device*) ;
 struct phy_device* FUNC_4 (struct net_device*,char*,int *,int ) ;
 int FUNC_5 (struct net_device*,struct phy_device*,int *,int ) ;
 struct phy_device* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (char*,int,char*,int ,scalar_t__) ;

__attribute__((used)) static struct phy_device *FUNC_8(struct net_device *VAR_4)
{
 struct altera_tse_private *VAR_5 = FUNC_3(VAR_4);
 struct phy_device *VAR_6 = ((void*)0);
 char VAR_7[VAR_0 + 3];

 if (VAR_5->phy_addr != VAR_2) {
  FUNC_7(VAR_7, VAR_0 + 3, VAR_1,
    VAR_5->mdio->id, VAR_5->phy_addr);

  FUNC_1(VAR_4, "trying to attach to %s\n", VAR_7);

  VAR_6 = FUNC_4(VAR_4, VAR_7, &VAR_3,
         VAR_5->phy_iface);
  if (FUNC_0(VAR_6)) {
   FUNC_2(VAR_4, "Could not attach to PHY\n");
   VAR_6 = ((void*)0);
  }

 } else {
  int VAR_8;
  VAR_6 = FUNC_6(VAR_5->mdio);
  if (VAR_6 == ((void*)0)) {
   FUNC_2(VAR_4, "No PHY found\n");
   return VAR_6;
  }

  VAR_8 = FUNC_5(VAR_4, VAR_6, &VAR_3,
    VAR_5->phy_iface);
  if (VAR_8 != 0) {
   FUNC_2(VAR_4, "Could not attach to PHY\n");
   VAR_6 = ((void*)0);
  }
 }
 return VAR_6;
}
