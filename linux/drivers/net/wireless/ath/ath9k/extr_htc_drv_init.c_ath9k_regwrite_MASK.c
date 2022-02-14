
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {scalar_t__ priv; } ;
struct ath9k_htc_priv {TYPE_1__* wmi; } ;
struct TYPE_2__ {int mwrite_cnt; } ;


 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (void*,int ,int ) ;
 int FUNC_2 (void*,int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct ath_hw *VAR_3 = VAR_0;
 struct ath_common *VAR_4 = FUNC_0(VAR_3);
 struct ath9k_htc_priv *VAR_5 = (struct ath9k_htc_priv *) VAR_4->priv;

 if (FUNC_3(&VAR_5->wmi->mwrite_cnt))
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2);
}
