
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_1__* wmi; int fw_flags; } ;
struct TYPE_2__ {int m_rmw_cnt; } ;


 int VAR_0 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_1)
{
 struct ath_hw *VAR_2 = VAR_1;
 struct ath_common *VAR_3 = FUNC_0(VAR_2);
 struct ath9k_htc_priv *VAR_4 = (struct ath9k_htc_priv *) VAR_3->priv;

 if (FUNC_2(VAR_0, &VAR_4->fw_flags))
  return;

 FUNC_1(&VAR_4->wmi->m_rmw_cnt);
}
