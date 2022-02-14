
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring_tx_data {int lock; int enabled; } ;
struct wil_ring {int va; } ;
struct wil6210_priv {int napi_tx; int status; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (struct wil6210_priv*,char*) ;
 int FUNC_8 (struct wil6210_priv*,char*) ;
 int FUNC_9 (struct wil6210_priv*) ;
 int FUNC_10 (struct wil_ring*) ;
 int VAR_3 ;

bool FUNC_11(struct wil6210_priv *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 int VAR_7 = FUNC_9(VAR_4);

 for (VAR_5 = VAR_7; VAR_5 < VAR_0; VAR_5++) {
  struct wil_ring *VAR_8 = &VAR_4->ring_tx[VAR_5];
  int VAR_9 = VAR_8 - VAR_4->ring_tx;
  struct wil_ring_tx_data *VAR_10 =
   &VAR_4->ring_tx_data[VAR_9];

  FUNC_3(&VAR_10->lock);

  if (!VAR_8->va || !VAR_10->enabled) {
   FUNC_4(&VAR_10->lock);
   continue;
  }

  VAR_6 = VAR_2 + FUNC_0(
     VAR_1);
  if (FUNC_5(VAR_3, VAR_4->status)) {
   while (!FUNC_10(VAR_8)) {
    if (FUNC_6(VAR_2, VAR_6)) {
     FUNC_7(VAR_4,
         "TO waiting for idle tx\n");
     FUNC_4(&VAR_10->lock);
     return 0;
    }
    FUNC_8(VAR_4,
          "tx vring is not empty -> NAPI\n");
    FUNC_4(&VAR_10->lock);
    FUNC_2(&VAR_4->napi_tx);
    FUNC_1(20);
    FUNC_3(&VAR_10->lock);
    if (!VAR_8->va || !VAR_10->enabled)
     break;
   }
  }

  FUNC_4(&VAR_10->lock);
 }

 return 1;
}
