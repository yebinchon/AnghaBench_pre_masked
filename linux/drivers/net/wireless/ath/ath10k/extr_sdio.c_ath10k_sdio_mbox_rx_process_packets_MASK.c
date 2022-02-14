
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_sdio_rx_data {scalar_t__ alloc_len; int * skb; int trailer_only; int last_in_bundle; scalar_t__ part_of_bundle; } ;
struct ath10k_sdio {int n_rx_pkts; struct ath10k_sdio_rx_data* rx_pkts; int ar; } ;
struct ath10k_htc_hdr {int eid; } ;
struct TYPE_2__ {int (* ep_rx_complete ) (int ,int *) ;} ;
struct ath10k_htc_ep {scalar_t__ service_id; TYPE_1__ ep_ops; } ;
struct ath10k_htc {struct ath10k_htc_ep* endpoint; } ;
struct ath10k {struct ath10k_htc htc; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k_sdio_rx_data*) ;
 int FUNC_1 (struct ath10k*,struct ath10k_sdio_rx_data*,int *,int*) ;
 struct ath10k_sdio* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_2,
            u32 VAR_3[],
            int *VAR_4)
{
 struct ath10k_sdio *VAR_5 = FUNC_2(VAR_2);
 struct ath10k_htc *VAR_6 = &VAR_2->htc;
 struct ath10k_sdio_rx_data *VAR_7;
 struct ath10k_htc_ep *VAR_8;
 enum ath10k_htc_ep_id VAR_9;
 int VAR_10, VAR_11, *VAR_12;
 u32 *VAR_13;
 int VAR_14 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_5->n_rx_pkts; VAR_11++) {
  VAR_13 = VAR_3;
  VAR_12 = VAR_4;

  VAR_9 = ((struct ath10k_htc_hdr *)
        &VAR_3[VAR_14++])->eid;

  if (VAR_9 >= VAR_0) {
   FUNC_3(VAR_2, "invalid endpoint in look-ahead: %d\n",
        VAR_9);
   VAR_10 = -VAR_1;
   goto out;
  }

  VAR_8 = &VAR_6->endpoint[VAR_9];

  if (VAR_8->service_id == 0) {
   FUNC_3(VAR_2, "ep %d is not connected\n", VAR_9);
   VAR_10 = -VAR_1;
   goto out;
  }

  VAR_7 = &VAR_5->rx_pkts[VAR_11];

  if (VAR_7->part_of_bundle && !VAR_7->last_in_bundle) {



   VAR_14--;
   VAR_13 = ((void*)0);
   VAR_12 = ((void*)0);
  }

  VAR_10 = FUNC_1(VAR_2,
        VAR_7,
        VAR_13,
        VAR_12);
  if (VAR_10)
   goto out;

  if (!VAR_7->trailer_only)
   VAR_8->ep_ops.ep_rx_complete(VAR_5->ar, VAR_7->skb);
  else
   FUNC_4(VAR_7->skb);


  VAR_7->skb = ((void*)0);
  VAR_7->alloc_len = 0;
 }

 VAR_10 = 0;

out:



 for (; VAR_11 < VAR_5->n_rx_pkts; VAR_11++)
  FUNC_0(&VAR_5->rx_pkts[VAR_11]);

 return VAR_10;
}
