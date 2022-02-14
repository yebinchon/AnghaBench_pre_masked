
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct register_rmw {int dummy; } ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_1__* wmi; int fw_flags; } ;
typedef int rsp_status ;
struct TYPE_2__ {int multi_rmw_idx; int multi_rmw_mutex; int multi_rmw; int m_rmw_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int,int *,int,int) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(void *VAR_3)
{
 struct ath_hw *VAR_4 = VAR_3;
 struct ath_common *VAR_5 = FUNC_0(VAR_4);
 struct ath9k_htc_priv *VAR_6 = (struct ath9k_htc_priv *) VAR_5->priv;
 u32 VAR_7;
 int VAR_8;

 if (FUNC_6(VAR_0, &VAR_6->fw_flags))
  return;

 FUNC_3(&VAR_6->wmi->m_rmw_cnt);

 FUNC_4(&VAR_6->wmi->multi_rmw_mutex);

 if (VAR_6->wmi->multi_rmw_idx) {
  VAR_8 = FUNC_1(VAR_6->wmi, VAR_2,
     (u8 *) &VAR_6->wmi->multi_rmw,
     sizeof(struct register_rmw) * VAR_6->wmi->multi_rmw_idx,
     (u8 *) &VAR_7, sizeof(VAR_7),
     100);
  if (FUNC_7(VAR_8)) {
   FUNC_2(VAR_5, VAR_1,
    "REGISTER RMW FAILED, multi len: %d\n",
    VAR_6->wmi->multi_rmw_idx);
  }
  VAR_6->wmi->multi_rmw_idx = 0;
 }

 FUNC_5(&VAR_6->wmi->multi_rmw_mutex);
}
