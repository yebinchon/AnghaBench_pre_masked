
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ltq_etop_priv {int dummy; } ;
struct TYPE_2__ {size_t desc; scalar_t__ irq; } ;
struct ltq_etop_chan {TYPE_1__ dma; int * skb; int idx; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,struct ltq_etop_priv*) ;
 int FUNC_3 (TYPE_1__*) ;
 struct ltq_etop_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_1, struct ltq_etop_chan *VAR_2)
{
 struct ltq_etop_priv *VAR_3 = FUNC_4(VAR_1);

 FUNC_3(&VAR_2->dma);
 if (VAR_2->dma.irq)
  FUNC_2(VAR_2->dma.irq, VAR_3);
 if (FUNC_0(VAR_2->idx)) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_1(VAR_2->skb[VAR_2->dma.desc]);
 }
}
