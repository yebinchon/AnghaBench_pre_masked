
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct switchdev_trans {int dummy; } ;
struct switchdev_obj_port_vlan {scalar_t__ vid_begin; scalar_t__ vid_end; int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
        const struct switchdev_obj_port_vlan *VAR_3,
        struct switchdev_trans *VAR_4)
{
 int VAR_5;
 u16 VAR_6;

 for (VAR_6 = VAR_3->vid_begin; VAR_6 <= VAR_3->vid_end; VAR_6++) {
  VAR_5 = FUNC_0(VAR_2, VAR_6,
       VAR_3->flags & VAR_0,
       VAR_3->flags & VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
