
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wil_ring_tx_data {int dot1x_open; int lock; scalar_t__ enabled; } ;
struct wil_ring {int size; } ;
struct wil6210_vif {int privacy; } ;
struct wil6210_priv {int** ring2cid_tid; int max_assoc_sta; int tx_sring_idx; int mutex; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct wil6210_priv* FUNC_3 (struct wil6210_vif*) ;
 int FUNC_4 (struct wil6210_priv*,int,scalar_t__) ;
 int FUNC_5 (struct wil6210_priv*,char*,int,int,int,int ) ;
 int FUNC_6 (struct wil6210_priv*,char*) ;
 int FUNC_7 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_8 (struct wil6210_priv*,struct wil_ring*) ;
 int FUNC_9 (struct wil_ring_tx_data*) ;
 int FUNC_10 (struct wil6210_vif*,int,int,int) ;

__attribute__((used)) static int FUNC_11(struct wil6210_vif *VAR_1, int VAR_2,
     int VAR_3, int VAR_4, int VAR_5)
{
 struct wil6210_priv *VAR_6 = FUNC_3(VAR_1);
 int VAR_7;
 struct wil_ring *VAR_8 = &VAR_6->ring_tx[VAR_2];
 struct wil_ring_tx_data *VAR_9 = &VAR_6->ring_tx_data[VAR_2];

 FUNC_0(&VAR_6->mutex);

 FUNC_5(VAR_6,
       "init TX ring: ring_id=%u, cid=%u, tid=%u, sring_id=%u\n",
       VAR_2, VAR_4, VAR_5, VAR_6->tx_sring_idx);

 FUNC_9(VAR_9);
 VAR_8->size = VAR_3;
 VAR_7 = FUNC_7(VAR_6, VAR_8);
 if (VAR_7)
  goto out;

 VAR_6->ring2cid_tid[VAR_2][0] = VAR_4;
 VAR_6->ring2cid_tid[VAR_2][1] = VAR_5;
 if (!VAR_1->privacy)
  VAR_9->dot1x_open = 1;

 VAR_7 = FUNC_10(VAR_1, VAR_2, VAR_4, VAR_5);
 if (VAR_7) {
  FUNC_6(VAR_6, "WMI_TX_DESC_RING_ADD_CMD failed\n");
  goto out_free;
 }

 if (VAR_9->dot1x_open && VAR_0 >= 0)
  FUNC_4(VAR_6, VAR_2, VAR_0);

 return 0;
 out_free:
 FUNC_1(&VAR_9->lock);
 VAR_9->dot1x_open = 0;
 VAR_9->enabled = 0;
 FUNC_2(&VAR_9->lock);
 FUNC_8(VAR_6, VAR_8);
 VAR_6->ring2cid_tid[VAR_2][0] = VAR_6->max_assoc_sta;
 VAR_6->ring2cid_tid[VAR_2][1] = 0;

 out:
 return VAR_7;
}
