
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; int data; } ;
struct ath10k_sdio_bus_request {size_t eid; scalar_t__ comp; scalar_t__ htc_msg; int address; struct sk_buff* skb; } ;
struct ath10k_htc_ep {int dummy; } ;
struct TYPE_2__ {struct ath10k_htc_ep* endpoint; } ;
struct ath10k {TYPE_1__ htc; } ;


 int FUNC_0 (struct ath10k_htc_ep*,struct sk_buff*) ;
 int FUNC_1 (struct ath10k*,struct ath10k_sdio_bus_request*) ;
 int FUNC_2 (struct ath10k*,int ,int ,int ) ;
 int FUNC_3 (struct ath10k*,char*,int ,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ath10k *VAR_0,
          struct ath10k_sdio_bus_request *VAR_1)
{
 struct ath10k_htc_ep *VAR_2;
 struct sk_buff *VAR_3;
 int VAR_4;

 VAR_3 = VAR_1->skb;
 VAR_4 = FUNC_2(VAR_0, VAR_1->address, VAR_3->data, VAR_3->len);
 if (VAR_4)
  FUNC_3(VAR_0, "failed to write skb to 0x%x asynchronously: %d",
       VAR_1->address, VAR_4);

 if (VAR_1->htc_msg) {
  VAR_2 = &VAR_0->htc.endpoint[VAR_1->eid];
  FUNC_0(VAR_2, VAR_3);
 } else if (VAR_1->comp) {
  FUNC_4(VAR_1->comp);
 }

 FUNC_1(VAR_0, VAR_1);
}
