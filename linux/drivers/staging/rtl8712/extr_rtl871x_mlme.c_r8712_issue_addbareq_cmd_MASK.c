
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ht_priv {int ht_option; int* baddbareq_issued; scalar_t__ ampdu_enable; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (struct _adapter*,int ) ;

void FUNC_1(struct _adapter *VAR_0, int VAR_1)
{
 struct mlme_priv *VAR_2 = &VAR_0->mlmepriv;
 struct ht_priv *VAR_3 = &VAR_2->htpriv;

 if ((VAR_3->ht_option == 1) && (VAR_3->ampdu_enable)) {
  if (!VAR_3->baddbareq_issued[VAR_1]) {
   FUNC_0(VAR_0, (u8)VAR_1);
   VAR_3->baddbareq_issued[VAR_1] = 1;
  }
 }
}
