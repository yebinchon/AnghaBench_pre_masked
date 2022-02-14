
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct emac_instance {int rx_skb_size; int ndev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct emac_instance*,int) ;
 struct sk_buff* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct emac_instance *VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_1(VAR_1->ndev, VAR_1->rx_skb_size,
       VAR_0);

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
