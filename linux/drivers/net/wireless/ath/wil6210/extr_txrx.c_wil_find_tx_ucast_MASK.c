
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wil_ring_tx_data {scalar_t__ enabled; int dot1x_open; } ;
struct wil_ring {scalar_t__ va; } ;
struct wil6210_vif {int mid; } ;
struct wil6210_priv {int max_assoc_sta; int** ring2cid_tid; struct wil_ring_tx_data* ring_tx_data; struct wil_ring* ring_tx; } ;
struct sk_buff {scalar_t__ protocol; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct wil6210_priv*,char*,int,...) ;
 int FUNC_3 (struct wil6210_priv*,int ,int const*) ;
 int FUNC_4 (struct wil6210_priv*) ;
 int * FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct wil_ring *FUNC_6(struct wil6210_priv *VAR_1,
       struct wil6210_vif *VAR_2,
       struct sk_buff *VAR_3)
{
 int VAR_4, VAR_5;
 const u8 *VAR_6 = FUNC_5(VAR_3);
 int VAR_7 = FUNC_4(VAR_1);

 VAR_5 = FUNC_3(VAR_1, VAR_2->mid, VAR_6);

 if (VAR_5 < 0 || VAR_5 >= VAR_1->max_assoc_sta)
  return ((void*)0);


 for (VAR_4 = VAR_7; VAR_4 < FUNC_0(VAR_1->ring2cid_tid); VAR_4++) {
  if (!VAR_1->ring_tx_data[VAR_4].dot1x_open &&
      VAR_3->protocol != FUNC_1(VAR_0))
   continue;
  if (VAR_1->ring2cid_tid[VAR_4][0] == VAR_5) {
   struct wil_ring *VAR_8 = &VAR_1->ring_tx[VAR_4];
   struct wil_ring_tx_data *VAR_9 = &VAR_1->ring_tx_data[VAR_4];

   FUNC_2(VAR_1, "find_tx_ucast: (%pM) -> [%d]\n",
         VAR_6, VAR_4);
   if (VAR_8->va && VAR_9->enabled) {
    return VAR_8;
   } else {
    FUNC_2(VAR_1,
          "find_tx_ucast: vring[%d] not valid\n",
          VAR_4);
    return ((void*)0);
   }
  }
 }

 return ((void*)0);
}
