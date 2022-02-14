
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct register_write {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_1__* wmi; } ;
typedef int rsp_status ;
struct TYPE_2__ {int multi_write_idx; int multi_write; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int,int *,int,int) ;
 int FUNC_1 (struct ath_common*,int ,char*,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct ath_common *VAR_2)
{
 struct ath9k_htc_priv *VAR_3 = (struct ath9k_htc_priv *) VAR_2->priv;
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_3->wmi, VAR_1,
     (u8 *) &VAR_3->wmi->multi_write,
     sizeof(struct register_write) * VAR_3->wmi->multi_write_idx,
     (u8 *) &VAR_4, sizeof(VAR_4),
     100);
 if (FUNC_2(VAR_5)) {
  FUNC_1(VAR_2, VAR_0,
   "REGISTER WRITE FAILED, multi len: %d\n",
   VAR_3->wmi->multi_write_idx);
 }
 VAR_3->wmi->multi_write_idx = 0;
}
