
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int pfc; } ;
struct mlxsw_sp_port {TYPE_1__ dcb; } ;
struct ieee_pfc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee_pfc*,int ,int) ;
 int FUNC_1 (struct mlxsw_sp_port*,int) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 struct mlxsw_sp_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
          struct ieee_pfc *VAR_2)
{
 struct mlxsw_sp_port *VAR_3 = FUNC_3(VAR_1);
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3, VAR_5);
  if (VAR_4) {
   FUNC_2(VAR_1, "Failed to get PFC count for priority %d\n",
       VAR_5);
   return VAR_4;
  }
 }

 FUNC_0(VAR_2, VAR_3->dcb.pfc, sizeof(*VAR_2));

 return 0;
}
