
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct completion {int dummy; } ;
struct ath10k_sdio_bus_request {int eid; int htc_msg; int list; struct completion* comp; int address; struct sk_buff* skb; } ;
struct ath10k_sdio {int wr_async_lock; int wr_asyncq; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 int VAR_0 ;
 struct ath10k_sdio_bus_request* FUNC_0 (struct ath10k*) ;
 struct ath10k_sdio* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_1, u32 VAR_2,
          struct sk_buff *VAR_3,
          struct completion *VAR_4,
          bool VAR_5, enum ath10k_htc_ep_id VAR_6)
{
 struct ath10k_sdio *VAR_7 = FUNC_1(VAR_1);
 struct ath10k_sdio_bus_request *VAR_8;




 VAR_8 = FUNC_0(VAR_1);
 if (!VAR_8) {
  FUNC_2(VAR_1,
       "unable to allocate bus request for async request\n");
  return -VAR_0;
 }

 VAR_8->skb = VAR_3;
 VAR_8->eid = VAR_6;
 VAR_8->address = VAR_2;
 VAR_8->htc_msg = VAR_5;
 VAR_8->comp = VAR_4;

 FUNC_4(&VAR_7->wr_async_lock);
 FUNC_3(&VAR_8->list, &VAR_7->wr_asyncq);
 FUNC_5(&VAR_7->wr_async_lock);

 return 0;
}
