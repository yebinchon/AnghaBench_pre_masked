
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int status; } ;
struct wil6210_priv {int vif_mutex; struct wil6210_vif** vifs; } ;


 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wil6210_priv*,struct wil6210_vif*,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct wil6210_priv *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->vif_mutex);
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1); VAR_2++) {
  struct wil6210_vif *VAR_3 = VAR_1->vifs[VAR_2];

  if (VAR_3 && FUNC_3(VAR_0, VAR_3->status))
   FUNC_4(VAR_1, VAR_3, ((void*)0), 0);
 }
 FUNC_2(&VAR_1->vif_mutex);
}
