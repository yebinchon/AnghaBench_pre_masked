
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int * tc_tsa; } ;
struct mlx5e_priv {TYPE_1__ dcbx; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ieee_ets {int ets_cap; scalar_t__* tc_tx_bw; int tc_tsa; int * prio_tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct mlx5_core_dev*,struct ieee_ets*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,int,int *) ;
 int FUNC_4 (struct mlx5_core_dev*,int,scalar_t__*) ;
 int FUNC_5 (struct mlx5_core_dev*,int,int*) ;
 struct mlx5e_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7,
       struct ieee_ets *VAR_8)
{
 struct mlx5e_priv *VAR_9 = FUNC_6(VAR_7);
 struct mlx5_core_dev *VAR_10 = VAR_9->mdev;
 u8 VAR_11[VAR_1];
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15;

 if (!FUNC_0(VAR_9->mdev, VAR_8))
  return -VAR_0;

 VAR_8->ets_cap = FUNC_2(VAR_9->mdev) + 1;
 for (VAR_15 = 0; VAR_15 < VAR_8->ets_cap; VAR_15++) {
  VAR_14 = FUNC_3(VAR_10, VAR_15, &VAR_8->prio_tc[VAR_15]);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_5(VAR_10, VAR_15, &VAR_11[VAR_15]);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_4(VAR_10, VAR_15, &VAR_8->tc_tx_bw[VAR_15]);
  if (VAR_14)
   return VAR_14;

  if (VAR_8->tc_tx_bw[VAR_15] < VAR_5 &&
      VAR_11[VAR_15] == (VAR_4 + 1))
   VAR_13 = 1;

  if (VAR_11[VAR_15] == (VAR_6 - 1))
   VAR_12 = 1;
 }


 if (VAR_13) {
  for (VAR_15 = 0; VAR_15 < VAR_8->ets_cap; VAR_15++)
   if (VAR_11[VAR_15] == VAR_4)
    VAR_8->tc_tx_bw[VAR_15] = 0;
 }


 for (VAR_15 = 0; VAR_15 < VAR_8->ets_cap; VAR_15++) {
  if (VAR_8->tc_tx_bw[VAR_15] < VAR_5)
   VAR_9->dcbx.tc_tsa[VAR_15] = VAR_2;
  else if (VAR_11[VAR_15] == VAR_6 &&
    !VAR_12)
   VAR_9->dcbx.tc_tsa[VAR_15] = VAR_3;
 }
 FUNC_1(VAR_8->tc_tsa, VAR_9->dcbx.tc_tsa, sizeof(VAR_8->tc_tsa));

 return VAR_14;
}
