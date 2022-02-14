
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring_tx_data {int dot1x_open; int lock; scalar_t__ enabled; } ;
struct wil_ring {int size; int is_rx; } ;
struct wil6210_vif {int privacy; } ;
struct wil6210_priv {scalar_t__** ring2cid_tid; int mutex; int tx_sring_idx; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wil6210_priv* FUNC_3 (struct wil6210_vif*) ;
 int FUNC_4 (struct wil6210_priv*,char*,int,int ) ;
 int FUNC_5 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_6 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_7 (struct wil_ring_tx_data*) ;
 int FUNC_8 (struct wil6210_vif*,int) ;

__attribute__((used)) static int FUNC_9(struct wil6210_vif *VAR_1, int VAR_2,
        int VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_3(VAR_1);
 struct wil_ring *VAR_5 = &VAR_4->ring_tx[VAR_2];
 int VAR_6;
 struct wil_ring_tx_data *VAR_7 = &VAR_4->ring_tx_data[VAR_2];

 FUNC_4(VAR_4, "init bcast: ring_id=%d, sring_id=%d\n",
       VAR_2, VAR_4->tx_sring_idx);

 FUNC_0(&VAR_4->mutex);

 FUNC_7(VAR_7);
 VAR_5->size = VAR_3;
 VAR_5->is_rx = 0;
 VAR_6 = FUNC_5(VAR_4, VAR_5);
 if (VAR_6)
  goto out;

 VAR_4->ring2cid_tid[VAR_2][0] = VAR_0;
 VAR_4->ring2cid_tid[VAR_2][1] = 0;
 if (!VAR_1->privacy)
  VAR_7->dot1x_open = 1;

 VAR_6 = FUNC_8(VAR_1, VAR_2);
 if (VAR_6)
  goto out_free;

 return 0;

 out_free:
 FUNC_1(&VAR_7->lock);
 VAR_7->enabled = 0;
 VAR_7->dot1x_open = 0;
 FUNC_2(&VAR_7->lock);
 FUNC_6(VAR_4, VAR_5);

out:
 return VAR_6;
}
