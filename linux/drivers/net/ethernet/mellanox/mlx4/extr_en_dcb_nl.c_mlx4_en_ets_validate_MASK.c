
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_priv {int dummy; } ;
struct ieee_ets {scalar_t__* prio_tc; int* tc_tsa; int* tc_tx_bw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,int,...) ;

__attribute__((used)) static int FUNC_1(struct mlx4_en_priv *VAR_5, struct ieee_ets *VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_6->prio_tc[VAR_7] >= VAR_4) {
   FUNC_0(VAR_5, "Bad priority in UP <=> TC mapping. TC: %d, UP: %d\n",
     VAR_7, VAR_6->prio_tc[VAR_7]);
   return -VAR_0;
  }

  switch (VAR_6->tc_tsa[VAR_7]) {
  case 128:
  case 129:
   break;
  case 130:
   VAR_9 = 1;
   VAR_8 += VAR_6->tc_tx_bw[VAR_7];
   break;
  default:
   FUNC_0(VAR_5, "TC[%d]: Not supported TSA: %d\n",
     VAR_7, VAR_6->tc_tsa[VAR_7]);
   return -VAR_1;
  }
 }

 if (VAR_9 && VAR_8 != VAR_3) {
  FUNC_0(VAR_5, "Bad ETS BW sum: %d. Should be exactly 100%%\n",
    VAR_8);
  return -VAR_0;
 }

 return 0;
}
