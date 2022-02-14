
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_1__* wmi; int fw_flags; } ;
struct TYPE_2__ {int m_rmw_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_hw*,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (void*,int ,int ,int ) ;
 int FUNC_4 (void*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static u32 FUNC_7(void *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct ath_hw *VAR_5 = VAR_1;
 struct ath_common *VAR_6 = FUNC_2(VAR_5);
 struct ath9k_htc_priv *VAR_7 = (struct ath9k_htc_priv *) VAR_6->priv;

 if (FUNC_6(VAR_0, &VAR_7->fw_flags)) {
  u32 VAR_8;

  VAR_8 = FUNC_0(VAR_5, VAR_2);
  VAR_8 &= ~VAR_4;
  VAR_8 |= VAR_3;
  FUNC_1(VAR_5, VAR_2, VAR_8);

  return 0;
 }

 if (FUNC_5(&VAR_7->wmi->m_rmw_cnt))
  FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4);

 return 0;
}
