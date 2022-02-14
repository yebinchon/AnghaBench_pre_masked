
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi {int stopped; int op_mutex; } ;
struct ath9k_htc_priv {struct wmi* wmi; } ;


 int FUNC_0 (struct wmi*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ath9k_htc_priv *VAR_0)
{
 struct wmi *VAR_1 = VAR_0->wmi;

 FUNC_1(&VAR_1->op_mutex);
 VAR_1->stopped = 1;
 FUNC_2(&VAR_1->op_mutex);

 FUNC_0(VAR_0->wmi);
}
