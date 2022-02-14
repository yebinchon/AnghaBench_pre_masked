
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ath10k_sdio_rx_data {int status; scalar_t__ act_len; scalar_t__ alloc_len; struct sk_buff* skb; } ;
struct TYPE_2__ {int htc_addr; } ;
struct ath10k_sdio {TYPE_1__ mbox_info; } ;
struct ath10k_htc_hdr {int len; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 struct ath10k_sdio* FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ath10k*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_1,
          struct ath10k_sdio_rx_data *VAR_2)
{
 struct ath10k_sdio *VAR_3 = FUNC_0(VAR_1);
 struct sk_buff *VAR_4 = VAR_2->skb;
 struct ath10k_htc_hdr *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_3->mbox_info.htc_addr,
     VAR_4->data, VAR_2->alloc_len);
 if (VAR_6)
  goto out;





 VAR_5 = (struct ath10k_htc_hdr *)VAR_4->data;
 VAR_2->act_len = FUNC_3(VAR_5->len) + sizeof(*VAR_5);
 if (VAR_2->act_len > VAR_2->alloc_len) {
  FUNC_2(VAR_1, "rx packet too large (%zu > %zu)\n",
       VAR_2->act_len, VAR_2->alloc_len);
  VAR_6 = -VAR_0;
  goto out;
 }

 FUNC_4(VAR_4, VAR_2->act_len);

out:
 VAR_2->status = VAR_6;

 return VAR_6;
}
