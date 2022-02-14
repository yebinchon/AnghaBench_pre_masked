
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ht_priv {int ampdu_enable; int* baddbareq_issued; scalar_t__ ht_option; } ;
struct mlme_priv {struct ht_priv htpriv; } ;
struct _adapter {struct mlme_priv mlmepriv; } ;


 int FUNC_0 (struct _adapter*,int,int) ;

void FUNC_1(struct _adapter *VAR_0)
{
 int VAR_1;
 struct mlme_priv *VAR_2 = &VAR_0->mlmepriv;
 struct ht_priv *VAR_3 = &VAR_2->htpriv;




 VAR_3->ampdu_enable = 0;
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++)
  VAR_3->baddbareq_issued[VAR_1] = 0;
 if (VAR_3->ht_option) {

  FUNC_0(VAR_0, 0x102500D9, 48);
 } else {


  FUNC_0(VAR_0, 0x102500D9, 1);
 }
}
