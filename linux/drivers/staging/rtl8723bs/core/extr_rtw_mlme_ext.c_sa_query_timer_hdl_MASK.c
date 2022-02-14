
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct mlme_priv {int lock; } ;
struct adapter {struct mlme_priv mlmepriv; } ;
struct TYPE_2__ {int sa_query_timer; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct mlme_priv*,int ) ;
 struct adapter* FUNC_2 (int ,struct timer_list*,int ) ;
 TYPE_1__ VAR_1 ;
 struct adapter* VAR_2 ;
 int FUNC_3 (struct adapter*,int ,int) ;
 int FUNC_4 (struct adapter*,int) ;
 int FUNC_5 (struct adapter*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct timer_list *VAR_3)
{
 struct adapter *VAR_4 =
  FUNC_2(VAR_4, VAR_3, VAR_1.sa_query_timer);
 struct mlme_priv *VAR_5 = &VAR_4->mlmepriv;

 FUNC_6(&VAR_5->lock);

 if (FUNC_1(VAR_5, VAR_0)) {
  FUNC_3(VAR_4, 0, 1);
  FUNC_5(VAR_4);
  FUNC_4(VAR_4, 1);
 }

 FUNC_7(&VAR_5->lock);
 FUNC_0("SA query timeout disconnect\n");
}
