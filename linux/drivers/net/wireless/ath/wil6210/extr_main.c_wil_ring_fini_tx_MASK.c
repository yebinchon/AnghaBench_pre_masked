
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wil_ring_tx_data {int dot1x_open; int lock; scalar_t__ enabled; int mid; } ;
struct wil_ring {int va; } ;
struct TYPE_2__ {int (* ring_fini_tx ) (struct wil6210_priv*,struct wil_ring*) ;} ;
struct wil6210_priv {TYPE_1__ txrx_ops; int napi_tx; int status; int mutex; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wil6210_priv*,struct wil_ring*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct wil6210_priv*,char*,int) ;
 int VAR_1 ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct wil6210_priv *VAR_2, int VAR_3)
{
 struct wil_ring *VAR_4 = &VAR_2->ring_tx[VAR_3];
 struct wil_ring_tx_data *VAR_5 = &VAR_2->ring_tx_data[VAR_3];

 FUNC_0(&VAR_2->mutex);

 if (!VAR_4->va)
  return;

 FUNC_6(VAR_2, "vring_fini_tx: id=%d\n", VAR_3);

 FUNC_2(&VAR_5->lock);
 VAR_5->dot1x_open = 0;
 VAR_5->mid = VAR_0;
 VAR_5->enabled = 0;
 FUNC_3(&VAR_5->lock);






 FUNC_7();

 if (FUNC_5(VAR_1, VAR_2->status))
  FUNC_1(&VAR_2->napi_tx);

 VAR_2->txrx_ops.ring_fini_tx(VAR_2, VAR_4);
}
