
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring {int dummy; } ;
struct wil6210_priv {int num_rx_status_rings; int * srings; struct wil_ring ring_rx; } ;


 int FUNC_0 (struct wil6210_priv*,char*) ;
 int FUNC_1 (struct wil6210_priv*) ;
 int FUNC_2 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wil6210_priv*,int *) ;

__attribute__((used)) static void FUNC_5(struct wil6210_priv *VAR_0)
{
 struct wil_ring *VAR_1 = &VAR_0->ring_rx;
 int VAR_2;

 FUNC_0(VAR_0, "rx_fini_edma\n");

 FUNC_2(VAR_0, VAR_1);

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rx_status_rings; VAR_2++) {
  FUNC_3(&VAR_0->srings[VAR_2]);
  FUNC_4(VAR_0, &VAR_0->srings[VAR_2]);
 }

 FUNC_1(VAR_0);
}
