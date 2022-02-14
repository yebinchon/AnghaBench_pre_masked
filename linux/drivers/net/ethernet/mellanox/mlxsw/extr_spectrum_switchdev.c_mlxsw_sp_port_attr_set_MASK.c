
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct TYPE_2__ {int mrouter; int mc_disabled; int vlan_filtering; int ageing_time; int brport_flags; int stp_state; } ;
struct switchdev_attr {int id; TYPE_1__ u; int orig_dev; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {int mlxsw_sp; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp_port*,struct switchdev_trans*,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*,struct switchdev_trans*,int ,int ) ;
 int FUNC_2 (struct mlxsw_sp_port*,struct switchdev_trans*,int ,int ) ;
 int FUNC_3 (struct mlxsw_sp_port*,struct switchdev_trans*,int ) ;
 int FUNC_4 (struct mlxsw_sp_port*,struct switchdev_trans*,int ,int ) ;
 int FUNC_5 (struct mlxsw_sp_port*,struct switchdev_trans*,int ,int ) ;
 int FUNC_6 (struct mlxsw_sp_port*,struct switchdev_trans*,int ,int ) ;
 int FUNC_7 (struct mlxsw_sp_port*,struct switchdev_trans*,int ,int ) ;
 int FUNC_8 (int ) ;
 struct mlxsw_sp_port* FUNC_9 (struct net_device*) ;
 scalar_t__ FUNC_10 (struct switchdev_trans*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1,
      const struct switchdev_attr *VAR_2,
      struct switchdev_trans *VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = FUNC_9(VAR_1);
 int VAR_5;

 switch (VAR_2->id) {
 case 128:
  VAR_5 = FUNC_6(VAR_4, VAR_3,
             VAR_2->orig_dev,
             VAR_2->u.stp_state);
  break;
 case 129:
  VAR_5 = FUNC_3(VAR_4,
         VAR_3,
         VAR_2->u.brport_flags);
  break;
 case 131:
  VAR_5 = FUNC_1(VAR_4, VAR_3,
            VAR_2->orig_dev,
            VAR_2->u.brport_flags);
  break;
 case 135:
  VAR_5 = FUNC_0(VAR_4, VAR_3,
             VAR_2->u.ageing_time);
  break;
 case 132:
  VAR_5 = FUNC_4(VAR_4, VAR_3,
           VAR_2->orig_dev,
           VAR_2->u.vlan_filtering);
  break;
 case 130:
  VAR_5 = FUNC_5(VAR_4, VAR_3,
           VAR_2->orig_dev,
           VAR_2->u.mrouter);
  break;
 case 134:
  VAR_5 = FUNC_7(VAR_4, VAR_3,
          VAR_2->orig_dev,
          VAR_2->u.mc_disabled);
  break;
 case 133:
  VAR_5 = FUNC_2(VAR_4, VAR_3,
       VAR_2->orig_dev,
       VAR_2->u.mrouter);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }

 if (FUNC_10(VAR_3))
  FUNC_8(VAR_4->mlxsw_sp);

 return VAR_5;
}
