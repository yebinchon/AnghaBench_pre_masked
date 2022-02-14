
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {struct ieee_maxrate* maxrate; } ;
struct mlxsw_sp_port {TYPE_1__ dcb; } ;
struct ieee_maxrate {int * tc_maxrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee_maxrate*,struct ieee_maxrate*,int) ;
 int FUNC_1 (struct mlxsw_sp_port*,int ,int,int ,int ) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
       struct ieee_maxrate *VAR_3)
{
 struct mlxsw_sp_port *VAR_4 = FUNC_3(VAR_2);
 struct ieee_maxrate *VAR_5 = VAR_4->dcb.maxrate;
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4,
          VAR_1,
          VAR_7, 0,
          VAR_3->tc_maxrate[VAR_7]);
  if (VAR_6) {
   FUNC_2(VAR_2, "Failed to set maxrate for TC %d\n", VAR_7);
   goto err_port_ets_maxrate_set;
  }
 }

 FUNC_0(VAR_4->dcb.maxrate, VAR_3, sizeof(*VAR_3));

 return 0;

err_port_ets_maxrate_set:
 for (VAR_7--; VAR_7 >= 0; VAR_7--)
  FUNC_1(VAR_4,
           VAR_1,
           VAR_7, 0, VAR_5->tc_maxrate[VAR_7]);
 return VAR_6;
}
