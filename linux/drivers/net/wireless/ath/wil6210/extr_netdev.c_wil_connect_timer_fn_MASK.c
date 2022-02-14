
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int disconnect_worker; } ;
struct wil6210_priv {int wmi_wq; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 struct wil6210_vif* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int ,int *) ;
 struct wil6210_vif* VAR_1 ;
 struct wil6210_priv* FUNC_2 (struct wil6210_vif*) ;
 int FUNC_3 (struct wil6210_priv*,char*,int) ;
 int FUNC_4 (struct wil6210_priv*,char*) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct wil6210_vif *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 struct wil6210_priv *VAR_4 = FUNC_2(VAR_3);
 bool VAR_5;

 FUNC_4(VAR_4, "Connect timeout detected, disconnect station\n");





 VAR_5 = FUNC_1(VAR_4->wmi_wq, &VAR_3->disconnect_worker);
 FUNC_3(VAR_4, "queue_work of disconnect_worker -> %d\n", VAR_5);
}
