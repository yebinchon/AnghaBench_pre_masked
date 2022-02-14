
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct ieee_ets* ets; } ;
struct mlxsw_sp_port {struct net_device* dev; TYPE_1__ dcb; } ;
struct ieee_ets {scalar_t__* tc_tsa; int * tc_tx_bw; int * prio_tc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlxsw_sp_port*,int ,int,int ,int,int ) ;
 int FUNC_1 (struct mlxsw_sp_port*,struct ieee_ets*) ;
 int FUNC_2 (struct mlxsw_sp_port*,int,int ) ;
 int FUNC_3 (struct net_device*,char*,int,...) ;

__attribute__((used)) static int FUNC_4(struct mlxsw_sp_port *VAR_3,
     struct ieee_ets *VAR_4)
{
 struct ieee_ets *VAR_5 = VAR_3->dcb.ets;
 struct net_device *VAR_6 = VAR_3->dev;
 int VAR_7, VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  bool VAR_9 = VAR_4->tc_tsa[VAR_7] == VAR_1;
  u8 VAR_10 = VAR_4->tc_tx_bw[VAR_7];

  VAR_8 = FUNC_0(VAR_3,
         VAR_2, VAR_7,
         0, VAR_9, VAR_10);
  if (VAR_8) {
   FUNC_3(VAR_6, "Failed to link subgroup ETS element %d to group\n",
       VAR_7);
   goto err_port_ets_set;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_8 = FUNC_2(VAR_3, VAR_7,
      VAR_4->prio_tc[VAR_7]);
  if (VAR_8) {
   FUNC_3(VAR_6, "Failed to map prio %d to TC %d\n", VAR_7,
       VAR_4->prio_tc[VAR_7]);
   goto err_port_prio_tc_set;
  }
 }


 VAR_8 = FUNC_1(VAR_3, VAR_4);
 if (VAR_8)
  goto err_port_headroom_set;

 return 0;

err_port_headroom_set:
 VAR_7 = VAR_0;
err_port_prio_tc_set:
 for (VAR_7--; VAR_7 >= 0; VAR_7--)
  FUNC_2(VAR_3, VAR_7, VAR_5->prio_tc[VAR_7]);
 VAR_7 = VAR_0;
err_port_ets_set:
 for (VAR_7--; VAR_7 >= 0; VAR_7--) {
  bool VAR_11 = VAR_5->tc_tsa[VAR_7] == VAR_1;
  u8 VAR_12 = VAR_5->tc_tx_bw[VAR_7];

  VAR_8 = FUNC_0(VAR_3,
         VAR_2, VAR_7,
         0, VAR_11, VAR_12);
 }
 return VAR_8;
}
