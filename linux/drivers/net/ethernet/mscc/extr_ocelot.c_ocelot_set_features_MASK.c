
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offload_cnt; } ;
struct ocelot_port {TYPE_1__ tc; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct ocelot_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ocelot_port*,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3,
          netdev_features_t VAR_4)
{
 struct ocelot_port *VAR_5 = FUNC_1(VAR_3);
 netdev_features_t VAR_6 = VAR_3->features ^ VAR_4;

 if ((VAR_3->features & VAR_1) > (VAR_4 & VAR_1) &&
     VAR_5->tc.offload_cnt) {
  FUNC_0(VAR_3,
      "Cannot disable HW TC offload while offloads active\n");
  return -VAR_0;
 }

 if (VAR_6 & VAR_2)
  FUNC_2(VAR_5, VAR_4);

 return 0;
}
