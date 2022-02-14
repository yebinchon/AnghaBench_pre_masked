
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx4_en_priv {int dcbx_cap; } ;
struct ieee_pfc {void* pfc_cap; int member_0; } ;
struct ieee_ets {void* ets_cap; int member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ FUNC_0 (struct net_device*,int ) ;
 scalar_t__ FUNC_1 (struct net_device*,struct ieee_ets*) ;
 scalar_t__ FUNC_2 (struct net_device*,struct ieee_pfc*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct mlx4_en_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static u8 FUNC_5(struct net_device *VAR_5, u8 VAR_6)
{
 struct mlx4_en_priv *VAR_7 = FUNC_4(VAR_5);
 struct ieee_ets VAR_8 = {0};
 struct ieee_pfc VAR_9 = {0};

 if (VAR_6 == VAR_7->dcbx_cap)
  return 0;

 if ((VAR_6 & VAR_1) ||
     ((VAR_6 & VAR_3) &&
      (VAR_6 & VAR_2)) ||
     !(VAR_6 & VAR_0))
  goto err;

 VAR_7->dcbx_cap = VAR_6;

 VAR_8.ets_cap = VAR_4;
 VAR_9.pfc_cap = VAR_4;

 if (VAR_6 & VAR_3) {
  if (FUNC_1(VAR_5, &VAR_8))
   goto err;
  if (FUNC_2(VAR_5, &VAR_9))
   goto err;
 } else if (VAR_6 & VAR_2) {
  if (FUNC_3(VAR_5))
   goto err;
 } else {
  if (FUNC_1(VAR_5, &VAR_8))
   goto err;
  if (FUNC_2(VAR_5, &VAR_9))
   goto err;
  if (FUNC_0(VAR_5, 0))
   goto err;
 }

 return 0;
err:
 return 1;
}
