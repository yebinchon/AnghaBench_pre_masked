
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dummy; } ;
struct notifier_block {int dummy; } ;
struct netdev_notifier_changeupper_info {int upper_dev; int linking; int master; } ;
struct net_device {int dummy; } ;



 int VAR_0 ;
 struct net_device* FUNC_0 (void*) ;
 struct rocker_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct rocker_port*,int ) ;
 int FUNC_5 (struct rocker_port*,int ) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_1,
      unsigned long VAR_2, void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_0(VAR_3);
 struct netdev_notifier_changeupper_info *VAR_5;
 struct rocker_port *VAR_6;
 int VAR_7;

 if (!FUNC_3(VAR_4))
  return VAR_0;

 switch (VAR_2) {
 case 128:
  VAR_5 = VAR_3;
  if (!VAR_5->master)
   goto out;
  VAR_6 = FUNC_1(VAR_4);
  if (VAR_5->linking) {
   VAR_7 = FUNC_4(VAR_6,
             VAR_5->upper_dev);
   if (VAR_7)
    FUNC_2(VAR_4, "failed to reflect master linked (err %d)\n",
         VAR_7);
  } else {
   VAR_7 = FUNC_5(VAR_6,
        VAR_5->upper_dev);
   if (VAR_7)
    FUNC_2(VAR_4, "failed to reflect master unlinked (err %d)\n",
         VAR_7);
  }
 }
out:
 return VAR_0;
}
