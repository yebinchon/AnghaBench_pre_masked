
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mlxsw_sp_port {TYPE_2__* mlxsw_sp; } ;
struct TYPE_4__ {TYPE_1__* ptp_ops; } ;
struct TYPE_3__ {int (* get_stats_count ) () ;} ;


 int VAR_0 ;

 int VAR_1 ;
 struct mlxsw_sp_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, int VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 128:
  return VAR_1 +
         VAR_4->mlxsw_sp->ptp_ops->get_stats_count();
 default:
  return -VAR_0;
 }
}
