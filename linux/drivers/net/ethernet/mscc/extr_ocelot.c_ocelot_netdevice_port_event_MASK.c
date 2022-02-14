
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocelot_port {int ocelot; } ;
struct netdev_notifier_changeupper_info {int upper_dev; int linking; } ;
struct net_device {int dummy; } ;



 struct ocelot_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ocelot_port*,int ) ;
 int FUNC_4 (struct ocelot_port*,int ) ;
 int FUNC_5 (struct ocelot_port*,int ) ;
 int FUNC_6 (struct ocelot_port*,int ) ;
 int FUNC_7 (int ,struct ocelot_port*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_0,
           unsigned long VAR_1,
           struct netdev_notifier_changeupper_info *VAR_2)
{
 struct ocelot_port *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = 0;

 switch (VAR_1) {
 case 128:
  if (FUNC_1(VAR_2->upper_dev)) {
   if (VAR_2->linking)
    VAR_4 = FUNC_3(VAR_3,
             VAR_2->upper_dev);
   else
    FUNC_4(VAR_3,
        VAR_2->upper_dev);

   FUNC_7(VAR_3->ocelot,
            VAR_3);
  }
  if (FUNC_2(VAR_2->upper_dev)) {
   if (VAR_2->linking)
    VAR_4 = FUNC_5(VAR_3,
          VAR_2->upper_dev);
   else
    FUNC_6(VAR_3,
            VAR_2->upper_dev);
  }
  break;
 default:
  break;
 }

 return VAR_4;
}
