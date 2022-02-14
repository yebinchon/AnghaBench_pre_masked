
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct register_write {int dummy; } ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_2__* wmi; } ;
typedef int rsp_status ;
struct TYPE_4__ {size_t multi_rmw_idx; int multi_rmw_mutex; TYPE_1__* multi_rmw; } ;
struct TYPE_3__ {void* clr; void* set; void* reg; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (TYPE_2__*,int ,int *,int,int *,int,int) ;
 int FUNC_2 (struct ath_common*,int ,char*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(void *VAR_3,
     u32 VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct ath_hw *VAR_7 = VAR_3;
 struct ath_common *VAR_8 = FUNC_0(VAR_7);
 struct ath9k_htc_priv *VAR_9 = (struct ath9k_htc_priv *) VAR_8->priv;
 u32 VAR_10;
 int VAR_11;

 FUNC_4(&VAR_9->wmi->multi_rmw_mutex);


 VAR_9->wmi->multi_rmw[VAR_9->wmi->multi_rmw_idx].reg =
  FUNC_3(VAR_4);
 VAR_9->wmi->multi_rmw[VAR_9->wmi->multi_rmw_idx].set =
  FUNC_3(VAR_5);
 VAR_9->wmi->multi_rmw[VAR_9->wmi->multi_rmw_idx].clr =
  FUNC_3(VAR_6);

 VAR_9->wmi->multi_rmw_idx++;


 if (VAR_9->wmi->multi_rmw_idx == VAR_0) {
  VAR_11 = FUNC_1(VAR_9->wmi, VAR_2,
     (u8 *) &VAR_9->wmi->multi_rmw,
     sizeof(struct register_write) * VAR_9->wmi->multi_rmw_idx,
     (u8 *) &VAR_10, sizeof(VAR_10),
     100);
  if (FUNC_6(VAR_11)) {
   FUNC_2(VAR_8, VAR_1,
    "REGISTER RMW FAILED, multi len: %d\n",
    VAR_9->wmi->multi_rmw_idx);
  }
  VAR_9->wmi->multi_rmw_idx = 0;
 }

 FUNC_5(&VAR_9->wmi->multi_rmw_mutex);
}
