
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlxsw_sp_port {struct net_device* dev; } ;
struct ieee_ets {int* tc_tsa; int* tc_tx_bw; int* prio_tc; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct net_device*,char*) ;

__attribute__((used)) static int FUNC_1(struct mlxsw_sp_port *VAR_2,
          struct ieee_ets *VAR_3)
{
 struct net_device *VAR_4 = VAR_2->dev;
 bool VAR_5 = 0;
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  switch (VAR_3->tc_tsa[VAR_6]) {
  case 128:
   break;
  case 129:
   VAR_5 = 1;
   VAR_7 += VAR_3->tc_tx_bw[VAR_6];
   break;
  default:
   FUNC_0(VAR_4, "Only strict priority and ETS are supported\n");
   return -VAR_0;
  }

  if (VAR_3->prio_tc[VAR_6] >= VAR_1) {
   FUNC_0(VAR_4, "Invalid TC\n");
   return -VAR_0;
  }
 }

 if (VAR_5 && VAR_7 != 100) {
  FUNC_0(VAR_4, "Total ETS bandwidth should equal 100\n");
  return -VAR_0;
 }

 return 0;
}
