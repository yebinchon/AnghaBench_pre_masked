
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_vif {int mid; } ;
struct wil6210_priv {struct wil6210_vif** vifs; } ;


 int FUNC_0 (struct wil6210_priv*) ;
 int FUNC_1 (struct wil6210_vif*) ;
 int FUNC_2 (struct wil6210_priv*,int ) ;

__attribute__((used)) static void FUNC_3(struct wil6210_priv *VAR_0)
{
 struct wil6210_vif *VAR_1;
 int VAR_2;

 for (VAR_2 = 1; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  VAR_1 = VAR_0->vifs[VAR_2];
  if (VAR_1) {
   FUNC_1(VAR_1);
   FUNC_2(VAR_0, VAR_1->mid);
  }
 }
}
