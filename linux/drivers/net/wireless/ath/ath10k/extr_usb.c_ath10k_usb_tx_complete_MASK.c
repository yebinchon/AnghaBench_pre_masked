
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ath10k_htc_hdr {size_t eid; } ;
struct ath10k_htc_ep {int dummy; } ;
struct TYPE_2__ {struct ath10k_htc_ep* endpoint; } ;
struct ath10k {TYPE_1__ htc; } ;


 int FUNC_0 (struct ath10k_htc_ep*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct ath10k *VAR_0, struct sk_buff *VAR_1)
{
 struct ath10k_htc_hdr *VAR_2;
 struct ath10k_htc_ep *VAR_3;

 VAR_2 = (struct ath10k_htc_hdr *)VAR_1->data;
 VAR_3 = &VAR_0->htc.endpoint[VAR_2->eid];
 FUNC_0(VAR_3, VAR_1);

}
