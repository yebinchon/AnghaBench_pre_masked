
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wil_ring {int dummy; } ;
struct TYPE_2__ {int * buff_arr; } ;
struct wil6210_priv {TYPE_1__ rx_buff_mgmt; struct wil_ring ring_rx; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct wil6210_priv*,struct wil_ring*) ;

__attribute__((used)) static void FUNC_2(struct wil6210_priv *VAR_0)
{
 struct wil_ring *VAR_1 = &VAR_0->ring_rx;

 if (!VAR_0->rx_buff_mgmt.buff_arr)
  return;




 FUNC_1(VAR_0, VAR_1);

 FUNC_0(VAR_0->rx_buff_mgmt.buff_arr);
 VAR_0->rx_buff_mgmt.buff_arr = ((void*)0);
}
