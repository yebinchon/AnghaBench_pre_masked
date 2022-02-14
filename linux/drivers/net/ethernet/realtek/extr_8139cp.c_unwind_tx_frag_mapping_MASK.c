
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct cp_private {TYPE_1__* pdev; struct cp_desc* tx_ring; int ** tx_skb; } ;
struct cp_desc {int addr; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int * frags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct cp_private *VAR_1, struct sk_buff *VAR_2,
       int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 struct cp_desc *VAR_7;
 skb_frag_t *VAR_8;
 for (VAR_5 = 0; VAR_5+VAR_3 < VAR_4; VAR_5++) {
  VAR_6 = VAR_3+VAR_5;
  VAR_1->tx_skb[VAR_6] = ((void*)0);
  VAR_7 = &VAR_1->tx_ring[VAR_6];
  VAR_8 = &FUNC_3(VAR_2)->frags[VAR_5];
  FUNC_0(&VAR_1->pdev->dev, FUNC_1(VAR_7->addr),
     FUNC_2(VAR_8), VAR_0);
 }
}
