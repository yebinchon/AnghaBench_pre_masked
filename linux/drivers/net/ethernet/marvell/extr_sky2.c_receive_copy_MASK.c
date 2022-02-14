
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sky2_port {TYPE_1__* hw; int netdev; } ;
struct sk_buff {int csum; int ip_summed; int data; } ;
struct rx_ring_info {TYPE_2__* skb; int data_addr; } ;
struct TYPE_8__ {int ip_summed; int csum; } ;
struct TYPE_7__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct sk_buff*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int ,int ,unsigned int,int ) ;
 int FUNC_5 (int ,int ,unsigned int,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,unsigned int) ;
 int FUNC_8 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_9 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct sky2_port *VAR_2,
        const struct rx_ring_info *VAR_3,
        unsigned VAR_4)
{
 struct sk_buff *VAR_5;

 VAR_5 = FUNC_3(VAR_2->netdev, VAR_4);
 if (FUNC_2(VAR_5)) {
  FUNC_4(VAR_2->hw->pdev, VAR_3->data_addr,
         VAR_4, VAR_1);
  FUNC_7(VAR_3->skb, VAR_5->data, VAR_4);
  VAR_5->ip_summed = VAR_3->skb->ip_summed;
  VAR_5->csum = VAR_3->skb->csum;
  FUNC_8(VAR_5, VAR_3->skb);
  FUNC_1(VAR_5, VAR_3->skb);

  FUNC_5(VAR_2->hw->pdev, VAR_3->data_addr,
            VAR_4, VAR_1);
  FUNC_0(VAR_3->skb);
  FUNC_6(VAR_3->skb);
  VAR_3->skb->ip_summed = VAR_0;
  FUNC_9(VAR_5, VAR_4);
 }
 return VAR_5;
}
