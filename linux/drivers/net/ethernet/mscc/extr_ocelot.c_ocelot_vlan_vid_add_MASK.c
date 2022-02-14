
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct ocelot_port {size_t pvid; size_t vid; int chip_port; struct ocelot* ocelot; } ;
struct ocelot {int dev; int * vlan_mask; } ;
struct net_device {int dev_addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,size_t) ;
 struct ocelot_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ocelot*,int ,int ,size_t,int ) ;
 int FUNC_4 (struct ocelot*,struct ocelot_port*) ;
 int FUNC_5 (struct ocelot*,size_t,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_3, u16 VAR_4, bool VAR_5,
          bool VAR_6)
{
 struct ocelot_port *VAR_7 = FUNC_2(VAR_3);
 struct ocelot *VAR_8 = VAR_7->ocelot;
 int VAR_9;


 FUNC_3(VAR_8, VAR_2, VAR_3->dev_addr, VAR_4,
     VAR_1);


 VAR_8->vlan_mask[VAR_4] |= FUNC_0(VAR_7->chip_port);
 VAR_9 = FUNC_5(VAR_8, VAR_4, VAR_8->vlan_mask[VAR_4]);
 if (VAR_9)
  return VAR_9;


 if (VAR_5)
  VAR_7->pvid = VAR_4;


 if (VAR_6 && VAR_7->vid != VAR_4) {
  if (VAR_7->vid) {
   FUNC_1(VAR_8->dev,
    "Port already has a native VLAN: %d\n",
    VAR_7->vid);
   return -VAR_0;
  }
  VAR_7->vid = VAR_4;
 }

 FUNC_4(VAR_8, VAR_7);

 return 0;
}
