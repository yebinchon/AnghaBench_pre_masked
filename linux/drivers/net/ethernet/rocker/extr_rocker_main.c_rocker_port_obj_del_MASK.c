
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj {int id; } ;
struct rocker_port {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (struct switchdev_obj const*) ;
 struct rocker_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct rocker_port*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
          const struct switchdev_obj *VAR_2)
{
 struct rocker_port *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0;

 switch (VAR_2->id) {
 case 128:
  VAR_4 = FUNC_2(VAR_3,
           FUNC_0(VAR_2));
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
