
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct TYPE_2__ {int ageing_time; int brport_flags; int stp_state; } ;
struct switchdev_attr {int id; TYPE_1__ u; } ;
struct rocker_port {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;




 struct rocker_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rocker_port*,int ,struct switchdev_trans*) ;
 int FUNC_2 (struct rocker_port*,int ,struct switchdev_trans*) ;
 int FUNC_3 (struct rocker_port*,int ,struct switchdev_trans*) ;
 int FUNC_4 (struct rocker_port*,int ,struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1,
    const struct switchdev_attr *VAR_2,
    struct switchdev_trans *VAR_3)
{
 struct rocker_port *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = 0;

 switch (VAR_2->id) {
 case 128:
  VAR_5 = FUNC_4(VAR_4,
          VAR_2->u.stp_state,
          VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_3(VAR_4,
             VAR_2->u.brport_flags,
             VAR_3);
  break;
 case 130:
  VAR_5 = FUNC_2(VAR_4,
             VAR_2->u.brport_flags,
             VAR_3);
  break;
 case 131:
  VAR_5 = FUNC_1(VAR_4,
            VAR_2->u.ageing_time,
            VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 return VAR_5;
}
