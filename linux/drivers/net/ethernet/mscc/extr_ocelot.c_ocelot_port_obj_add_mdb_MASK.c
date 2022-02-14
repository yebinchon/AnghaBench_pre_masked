
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_trans {int dummy; } ;
struct switchdev_obj_port_mdb {unsigned char* addr; scalar_t__ vid; } ;
struct ocelot_port {int chip_port; scalar_t__ pvid; struct ocelot* ocelot; } ;
struct ocelot_multicast {unsigned char* addr; unsigned char ports; int list; scalar_t__ vid; } ;
struct ocelot {int multicast; int dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocelot_multicast* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 struct ocelot_port* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct ocelot*,unsigned char*,scalar_t__) ;
 int FUNC_6 (struct ocelot*,int ,unsigned char*,scalar_t__,int ) ;
 struct ocelot_multicast* FUNC_7 (struct ocelot*,unsigned char*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4,
       const struct switchdev_obj_port_mdb *VAR_5,
       struct switchdev_trans *VAR_6)
{
 struct ocelot_port *VAR_7 = FUNC_4(VAR_4);
 struct ocelot *VAR_8 = VAR_7->ocelot;
 struct ocelot_multicast *VAR_9;
 unsigned char VAR_10[VAR_2];
 u16 VAR_11 = VAR_5->vid;
 bool VAR_12 = 0;

 if (!VAR_11)
  VAR_11 = VAR_7->pvid;

 VAR_9 = FUNC_7(VAR_8, VAR_5->addr, VAR_11);
 if (!VAR_9) {
  VAR_9 = FUNC_1(VAR_8->dev, sizeof(*VAR_9), VAR_3);
  if (!VAR_9)
   return -VAR_0;

  FUNC_3(VAR_9->addr, VAR_5->addr, VAR_2);
  VAR_9->vid = VAR_11;

  FUNC_2(&VAR_9->list, &VAR_8->multicast);
  VAR_12 = 1;
 }

 FUNC_3(VAR_10, VAR_9->addr, VAR_2);
 VAR_10[0] = 0;

 if (!VAR_12) {
  VAR_10[2] = VAR_9->ports << 0;
  VAR_10[1] = VAR_9->ports << 8;
  FUNC_5(VAR_8, VAR_10, VAR_11);
 }

 VAR_9->ports |= FUNC_0(VAR_7->chip_port);
 VAR_10[2] = VAR_9->ports << 0;
 VAR_10[1] = VAR_9->ports << 8;

 return FUNC_6(VAR_8, 0, VAR_10, VAR_11, VAR_1);
}
