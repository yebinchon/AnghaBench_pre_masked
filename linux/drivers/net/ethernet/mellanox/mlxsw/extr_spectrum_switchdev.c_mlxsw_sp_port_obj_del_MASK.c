
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj {int id; } ;
struct net_device {int dummy; } ;
struct mlxsw_sp_port {int mlxsw_sp; } ;


 int VAR_0 ;


 int FUNC_0 (struct switchdev_obj const*) ;
 int FUNC_1 (struct switchdev_obj const*) ;
 int FUNC_2 (struct mlxsw_sp_port*,int ) ;
 int FUNC_3 (struct mlxsw_sp_port*,int ) ;
 int FUNC_4 (int ) ;
 struct mlxsw_sp_port* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_1,
     const struct switchdev_obj *VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = FUNC_5(VAR_1);
 int VAR_4 = 0;

 switch (VAR_2->id) {
 case 128:
  VAR_4 = FUNC_3(VAR_3,
           FUNC_1(VAR_2));
  break;
 case 129:
  VAR_4 = FUNC_2(VAR_3,
         FUNC_0(VAR_2));
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 FUNC_4(VAR_3->mlxsw_sp);

 return VAR_4;
}
