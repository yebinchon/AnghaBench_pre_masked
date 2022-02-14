
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct ath10k_sdio_rx_data {TYPE_1__* skb; } ;
struct ath10k_htc_hdr {scalar_t__ trailer_len; int len; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(struct ath10k_sdio_rx_data *VAR_0)
{
 bool VAR_1 = 0;
 struct ath10k_htc_hdr *VAR_2 =
  (struct ath10k_htc_hdr *)VAR_0->skb->data;
 u16 VAR_3 = FUNC_0(VAR_2->len);

 if (VAR_3 == VAR_2->trailer_len)
  VAR_1 = 1;

 return VAR_1;
}
