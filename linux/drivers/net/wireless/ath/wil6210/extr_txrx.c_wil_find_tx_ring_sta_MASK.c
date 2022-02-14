
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wil_ring_tx_data {scalar_t__ mid; int dot1x_open; int enabled; } ;
struct wil_ring {int va; } ;
struct wil6210_vif {scalar_t__ mid; } ;
struct wil6210_priv {scalar_t__** ring2cid_tid; scalar_t__ max_assoc_sta; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;
struct sk_buff {scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct wil6210_priv*,char*,...) ;
 int FUNC_2 (struct wil6210_priv*) ;

__attribute__((used)) static struct wil_ring *FUNC_3(struct wil6210_priv *VAR_2,
          struct wil6210_vif *VAR_3,
          struct sk_buff *VAR_4)
{
 struct wil_ring *VAR_5;
 int VAR_6;
 u8 VAR_7;
 struct wil_ring_tx_data *VAR_8;
 int VAR_9 = FUNC_2(VAR_2);





 for (VAR_6 = VAR_9; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = &VAR_2->ring_tx[VAR_6];
  VAR_8 = &VAR_2->ring_tx_data[VAR_6];
  if (!VAR_5->va || !VAR_8->enabled || VAR_8->mid != VAR_3->mid)
   continue;

  VAR_7 = VAR_2->ring2cid_tid[VAR_6][0];
  if (VAR_7 >= VAR_2->max_assoc_sta)
   continue;

  if (!VAR_2->ring_tx_data[VAR_6].dot1x_open &&
      VAR_4->protocol != FUNC_0(VAR_0))
   continue;

  FUNC_1(VAR_2, "Tx -> ring %d\n", VAR_6);

  return VAR_5;
 }

 FUNC_1(VAR_2, "Tx while no rings active?\n");

 return ((void*)0);
}
