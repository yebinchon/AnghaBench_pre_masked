
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nixge_tx_skb {int * skb; scalar_t__ mapping; int size; scalar_t__ mapped_as_page; } ;
struct nixge_priv {TYPE_2__* ndev; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct nixge_priv *VAR_1,
          struct nixge_tx_skb *VAR_2)
{
 if (VAR_2->mapping) {
  if (VAR_2->mapped_as_page)
   FUNC_1(VAR_1->ndev->dev.parent, VAR_2->mapping,
           VAR_2->size, VAR_0);
  else
   FUNC_2(VAR_1->ndev->dev.parent,
      VAR_2->mapping,
      VAR_2->size, VAR_0);
  VAR_2->mapping = 0;
 }

 if (VAR_2->skb) {
  FUNC_0(VAR_2->skb);
  VAR_2->skb = ((void*)0);
 }
}
