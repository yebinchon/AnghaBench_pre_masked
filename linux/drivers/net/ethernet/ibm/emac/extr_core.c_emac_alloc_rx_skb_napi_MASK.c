
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct emac_instance {int rx_skb_size; TYPE_1__* mal; } ;
struct TYPE_2__ {int napi; } ;


 int FUNC_0 (struct sk_buff*,struct emac_instance*,int) ;
 struct sk_buff* FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct emac_instance *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2;

 VAR_2 = FUNC_1(&VAR_0->mal->napi, VAR_0->rx_skb_size);

 return FUNC_0(VAR_2, VAR_0, VAR_1);
}
