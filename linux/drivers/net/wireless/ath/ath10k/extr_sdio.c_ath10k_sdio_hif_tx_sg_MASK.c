
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ len; } ;
struct ath10k_sdio {int wr_async_work; int workqueue; scalar_t__* mbox_size; scalar_t__* mbox_addr; } ;
struct ath10k_hif_sg_item {struct sk_buff* transfer_context; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_htc_ep_id { ____Placeholder_ath10k_htc_ep_id } ath10k_htc_ep_id ;


 size_t FUNC_0 (struct ath10k_sdio*,scalar_t__) ;
 int FUNC_1 (struct ath10k*,scalar_t__,struct sk_buff*,int *,int,int) ;
 struct ath10k_sdio* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sk_buff*,size_t) ;

__attribute__((used)) static int FUNC_6(struct ath10k *VAR_0, u8 VAR_1,
     struct ath10k_hif_sg_item *VAR_2, int VAR_3)
{
 struct ath10k_sdio *VAR_4 = FUNC_2(VAR_0);
 enum ath10k_htc_ep_id VAR_5;
 struct sk_buff *VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = FUNC_3(VAR_1);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  size_t VAR_9;
  u32 VAR_10;

  VAR_6 = VAR_2[VAR_8].transfer_context;
  VAR_9 = FUNC_0(VAR_4,
             VAR_6->len);
  FUNC_5(VAR_6, VAR_9);


  VAR_10 = VAR_4->mbox_addr[VAR_5] + VAR_4->mbox_size[VAR_5] -
     VAR_6->len;
  VAR_7 = FUNC_1(VAR_0, VAR_10, VAR_6,
       ((void*)0), 1, VAR_5);
  if (VAR_7)
   return VAR_7;
 }

 FUNC_4(VAR_4->workqueue, &VAR_4->wr_async_work);

 return 0;
}
