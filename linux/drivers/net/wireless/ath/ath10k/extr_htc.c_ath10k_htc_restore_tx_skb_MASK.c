
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct ath10k_skb_cb {int paddr; } ;
struct ath10k_htc_hdr {int dummy; } ;
struct ath10k_htc {TYPE_2__* ar; } ;
struct TYPE_3__ {scalar_t__ dev_type; } ;
struct TYPE_4__ {int dev; TYPE_1__ bus_param; } ;


 scalar_t__ VAR_0 ;
 struct ath10k_skb_cb* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_3(struct ath10k_htc *VAR_2,
          struct sk_buff *VAR_3)
{
 struct ath10k_skb_cb *VAR_4 = FUNC_0(VAR_3);

 if (VAR_2->ar->bus_param.dev_type != VAR_0)
  FUNC_1(VAR_2->ar->dev, VAR_4->paddr, VAR_3->len, VAR_1);
 FUNC_2(VAR_3, sizeof(struct ath10k_htc_hdr));
}
