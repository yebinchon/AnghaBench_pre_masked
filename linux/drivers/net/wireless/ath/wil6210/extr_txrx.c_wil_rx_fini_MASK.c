
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring {scalar_t__ va; } ;
struct wil6210_priv {struct wil_ring ring_rx; } ;


 int FUNC_0 (struct wil6210_priv*,char*) ;
 int FUNC_1 (struct wil6210_priv*,struct wil_ring*) ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_0)
{
 struct wil_ring *VAR_1 = &VAR_0->ring_rx;

 FUNC_0(VAR_0, "rx_fini\n");

 if (VAR_1->va)
  FUNC_1(VAR_0, VAR_1);
}
