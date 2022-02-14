
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
         const struct switchdev_obj_port_vlan *VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 for (VAR_3 = VAR_1->vid_begin; VAR_3 <= VAR_1->vid_end; VAR_3++) {
  VAR_2 = FUNC_0(VAR_0, VAR_3);

  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
