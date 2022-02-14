
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring_tx_data {scalar_t__ mid; int enabled; } ;
struct wil_ring {int va; } ;
struct wil6210_vif {scalar_t__ mid; int net_queue_stopped; } ;
struct wil6210_priv {struct wil_ring* ring_tx; struct wil_ring_tx_data* ring_tx_data; int status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct wil6210_vif*) ;
 int FUNC_5 (struct wil6210_priv*,char*,...) ;
 int FUNC_6 (struct wil6210_priv*) ;
 scalar_t__ FUNC_7 (struct wil_ring*) ;
 int FUNC_8 (struct wil_ring*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline void FUNC_9(struct wil6210_priv *VAR_4,
        struct wil6210_vif *VAR_5,
        struct wil_ring *VAR_6,
        bool VAR_7)
{
 int VAR_8;
 int VAR_9 = FUNC_6(VAR_4);

 if (FUNC_3(!VAR_5))
  return;

 if (VAR_6)
  FUNC_5(VAR_4, "vring %d, mid %d, check_stop=%d, stopped=%d",
        (int)(VAR_6 - VAR_4->ring_tx), VAR_5->mid, VAR_7,
        VAR_5->net_queue_stopped);
 else
  FUNC_5(VAR_4, "check_stop=%d, mid=%d, stopped=%d",
        VAR_7, VAR_5->mid, VAR_5->net_queue_stopped);

 if (VAR_6 && VAR_1)

  return;

 if (VAR_7 == VAR_5->net_queue_stopped)

  return;

 if (VAR_7) {
  if (!VAR_6 || FUNC_3(FUNC_8(VAR_6))) {

   FUNC_0(FUNC_4(VAR_5));
   VAR_5->net_queue_stopped = 1;
   FUNC_5(VAR_4, "netif_tx_stop called\n");
  }
  return;
 }


 if (FUNC_2(VAR_3, VAR_4->status) ||
     FUNC_2(VAR_2, VAR_4->status))
  return;


 for (VAR_8 = VAR_9; VAR_8 < VAR_0; VAR_8++) {
  struct wil_ring *VAR_10 = &VAR_4->ring_tx[VAR_8];
  struct wil_ring_tx_data *VAR_11 = &VAR_4->ring_tx_data[VAR_8];

  if (VAR_11->mid != VAR_5->mid || !VAR_10->va ||
      !VAR_11->enabled || VAR_10 == VAR_6)
   continue;

  if (FUNC_8(VAR_10)) {
   FUNC_5(VAR_4, "ring %d full, can't wake\n",
         (int)(VAR_10 - VAR_4->ring_tx));
   return;
  }
 }

 if (!VAR_6 || FUNC_7(VAR_6)) {

  FUNC_5(VAR_4, "calling netif_tx_wake\n");
  FUNC_1(FUNC_4(VAR_5));
  VAR_5->net_queue_stopped = 0;
 }
}
