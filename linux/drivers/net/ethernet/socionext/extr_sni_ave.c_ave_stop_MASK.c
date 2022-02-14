
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int phydev; } ;
struct TYPE_6__ {int ndesc; TYPE_3__* desc; scalar_t__ done_idx; scalar_t__ proc_idx; } ;
struct TYPE_5__ {int ndesc; TYPE_3__* desc; scalar_t__ done_idx; scalar_t__ proc_idx; } ;
struct ave_private {TYPE_2__ rx; TYPE_1__ tx; int napi_rx; int napi_tx; int irq; } ;
struct TYPE_7__ {int * skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,TYPE_3__*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct net_device*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 struct ave_private* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_3)
{
 struct ave_private *VAR_4 = FUNC_8(VAR_3);
 int VAR_5;

 FUNC_2(VAR_3);
 FUNC_4(VAR_4->irq);
 FUNC_5(VAR_4->irq, VAR_3);

 FUNC_9(VAR_3);
 FUNC_10(VAR_3->phydev);
 FUNC_7(&VAR_4->napi_tx);
 FUNC_7(&VAR_4->napi_rx);

 FUNC_0(VAR_3, VAR_0);


 for (VAR_5 = 0; VAR_5 < VAR_4->tx.ndesc; VAR_5++) {
  if (!VAR_4->tx.desc[VAR_5].skbs)
   continue;

  FUNC_1(VAR_3, &VAR_4->tx.desc[VAR_5], VAR_2);
  FUNC_3(VAR_4->tx.desc[VAR_5].skbs);
  VAR_4->tx.desc[VAR_5].skbs = ((void*)0);
 }
 VAR_4->tx.proc_idx = 0;
 VAR_4->tx.done_idx = 0;


 for (VAR_5 = 0; VAR_5 < VAR_4->rx.ndesc; VAR_5++) {
  if (!VAR_4->rx.desc[VAR_5].skbs)
   continue;

  FUNC_1(VAR_3, &VAR_4->rx.desc[VAR_5], VAR_1);
  FUNC_3(VAR_4->rx.desc[VAR_5].skbs);
  VAR_4->rx.desc[VAR_5].skbs = ((void*)0);
 }
 VAR_4->rx.proc_idx = 0;
 VAR_4->rx.done_idx = 0;

 FUNC_6(VAR_4->tx.desc);
 FUNC_6(VAR_4->rx.desc);

 return 0;
}
