
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int vif_mutex; struct wil6210_vif** vifs; } ;


 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wil6210_priv*,struct wil6210_vif*,int *,int) ;

__attribute__((used)) static void FUNC_4(struct wil6210_priv *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->vif_mutex);
 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); VAR_1++) {
  struct wil6210_vif *VAR_2 = VAR_0->vifs[VAR_1];

  if (VAR_2)
   FUNC_3(VAR_0, VAR_2, ((void*)0), 1);
 }
 FUNC_2(&VAR_0->vif_mutex);
}
