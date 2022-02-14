
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct switchdev_obj {int id; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct switchdev_obj const*) ;
 int FUNC_1 (struct switchdev_obj const*) ;
 int FUNC_2 (struct net_device*,int ,struct switchdev_trans*) ;
 int FUNC_3 (struct net_device*,int ,struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
          const struct switchdev_obj *VAR_2,
          struct switchdev_trans *VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_2->id) {
 case 128:
  VAR_5 = FUNC_3(VAR_1,
            FUNC_1(VAR_2),
            VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_1, FUNC_0(VAR_2),
           VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return VAR_5;
}
