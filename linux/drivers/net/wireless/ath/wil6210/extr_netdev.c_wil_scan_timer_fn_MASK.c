
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int status; } ;
struct timer_list {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 struct wil6210_vif* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_0 ;
 struct wil6210_vif* VAR_1 ;
 struct wil6210_priv* FUNC_2 (struct wil6210_vif*) ;
 int FUNC_3 (struct wil6210_priv*,char*) ;
 int FUNC_4 (struct wil6210_priv*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct wil6210_vif *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_0);
 struct wil6210_priv *VAR_5 = FUNC_2(VAR_4);

 FUNC_0(VAR_2, VAR_5->status);
 FUNC_3(VAR_5, "Scan timeout detected, start fw error recovery\n");
 FUNC_4(VAR_5);
}
