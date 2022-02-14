
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil6210_priv {int n_msi; } ;


 int FUNC_0 (int,struct wil6210_priv*) ;
 int FUNC_1 (struct wil6210_priv*,char*) ;
 int FUNC_2 (struct wil6210_priv*) ;

void FUNC_3(struct wil6210_priv *VAR_0, int VAR_1)
{
 FUNC_1(VAR_0, "fini_irq:\n");

 FUNC_2(VAR_0);
 FUNC_0(VAR_1, VAR_0);
 if (VAR_0->n_msi == 3) {
  FUNC_0(VAR_1 + 1, VAR_0);
  FUNC_0(VAR_1 + 2, VAR_0);
 }
}
