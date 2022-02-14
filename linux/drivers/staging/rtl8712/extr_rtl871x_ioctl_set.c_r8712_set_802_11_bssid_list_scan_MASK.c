
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ traffic_busy; } ;
struct mlme_priv {int lock; TYPE_1__ sitesurveyctrl; } ;
struct _adapter {int hw_init_completed; struct mlme_priv mlmepriv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlme_priv*,int) ;
 int FUNC_1 (struct _adapter*) ;
 int FUNC_2 (struct _adapter*,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

u8 FUNC_5(struct _adapter *VAR_2)
{
 struct mlme_priv *VAR_3 = ((void*)0);
 unsigned long VAR_4;
 u8 VAR_5 = 1;

 if (!VAR_2)
  return 0;
 VAR_3 = &VAR_2->mlmepriv;
 if (!VAR_2->hw_init_completed)
  return 0;
 FUNC_3(&VAR_3->lock, VAR_4);
 if (FUNC_0(VAR_3, VAR_1 | VAR_0) ||
     VAR_3->sitesurveyctrl.traffic_busy) {

  VAR_5 = (u8)FUNC_0(VAR_3, VAR_1);
 } else {
  FUNC_1(VAR_2);
  VAR_5 = FUNC_2(VAR_2, ((void*)0));
 }
 FUNC_4(&VAR_3->lock, VAR_4);
 return VAR_5;
}
