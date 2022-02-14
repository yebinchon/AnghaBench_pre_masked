
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_status_ring {int swhead; int size; int hwtail; int va; } ;
struct wil_ring {int va; } ;
struct wil6210_vif {int dummy; } ;
struct wil6210_priv {int num_rx_status_rings; struct wil6210_vif** vifs; scalar_t__ use_rx_hw_reordering; struct wil_status_ring* srings; struct wil_ring ring_rx; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 struct net_device* FUNC_2 (struct wil6210_vif*) ;
 int FUNC_3 (struct wil6210_priv*,char*,...) ;
 int FUNC_4 (struct wil6210_priv*,char*,...) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (struct wil6210_priv*) ;
 int FUNC_7 (struct wil6210_priv*,struct sk_buff*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct wil6210_priv*,struct wil_status_ring*) ;
 int FUNC_11 (struct wil6210_priv*,int ,int) ;

void FUNC_12(struct wil6210_priv *VAR_0, int *VAR_1)
{
 struct net_device *VAR_2;
 struct wil_ring *VAR_3 = &VAR_0->ring_rx;
 struct wil_status_ring *VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6;

 if (FUNC_1(!VAR_3->va)) {
  FUNC_4(VAR_0, "Rx IRQ while Rx not yet initialized\n");
  return;
 }
 FUNC_3(VAR_0, "rx_handle\n");

 for (VAR_6 = 0; VAR_6 < VAR_0->num_rx_status_rings; VAR_6++) {
  VAR_4 = &VAR_0->srings[VAR_6];
  if (FUNC_1(!VAR_4->va)) {
   FUNC_4(VAR_0,
    "Rx IRQ while Rx status ring %d not yet initialized\n",
    VAR_6);
   continue;
  }

  while ((*VAR_1 > 0) &&
         (((void*)0) != (VAR_5 =
   FUNC_10(VAR_0, VAR_4)))) {
   (*VAR_1)--;
   if (VAR_0->use_rx_hw_reordering) {
    void *VAR_7 = FUNC_9(VAR_5);
    int VAR_8 = FUNC_8(VAR_7);
    struct wil6210_vif *VAR_9 = VAR_0->vifs[VAR_8];

    if (FUNC_1(!VAR_9)) {
     FUNC_3(VAR_0,
           "RX desc invalid mid %d",
           VAR_8);
     FUNC_0(VAR_5);
     continue;
    }
    VAR_2 = FUNC_2(VAR_9);
    FUNC_5(VAR_5, VAR_2);
   } else {
    FUNC_7(VAR_0, VAR_5);
   }
  }

  FUNC_11(VAR_0, VAR_4->hwtail, (VAR_4->swhead - 1) % VAR_4->size);
 }

 FUNC_6(VAR_0);
}
