
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct TYPE_2__ {int brport_flags; int stp_state; } ;
struct switchdev_attr {int id; TYPE_1__ u; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (struct net_device*,struct switchdev_trans*,int ) ;
 int FUNC_1 (struct net_device*,struct switchdev_trans*,int ) ;
 int FUNC_2 (struct net_device*,struct switchdev_trans*,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
          const struct switchdev_attr *VAR_2,
          struct switchdev_trans *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_2->id) {
 case 128:
  VAR_4 = FUNC_2(VAR_1, VAR_3,
           VAR_2->u.stp_state);
  break;
 case 129:
  VAR_4 = FUNC_0(VAR_1, VAR_3,
       VAR_2->u.brport_flags);
  break;
 case 130:
  VAR_4 = FUNC_1(VAR_1, VAR_3,
          VAR_2->u.brport_flags);
  break;
 case 131:

  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
