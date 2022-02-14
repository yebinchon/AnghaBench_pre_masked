
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_status_ring {int dummy; } ;
struct wil6210_priv {size_t tx_sring_idx; struct wil_status_ring* srings; } ;


 int FUNC_0 (struct wil6210_priv*,char*) ;
 int FUNC_1 (struct wil6210_priv*,struct wil_status_ring*) ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_0)
{
 struct wil_status_ring *VAR_1 = &VAR_0->srings[VAR_0->tx_sring_idx];

 FUNC_0(VAR_0, "free TX sring\n");

 FUNC_1(VAR_0, VAR_1);
}
