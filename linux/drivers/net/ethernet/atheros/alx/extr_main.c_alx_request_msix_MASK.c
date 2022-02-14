
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {char* name; } ;
struct TYPE_6__ {int pdev; } ;
struct alx_priv {int num_napi; char* irq_lbl; int vec_idx; struct alx_priv** qnapi; TYPE_3__ hw; TYPE_2__* rxq; TYPE_1__* txq; struct net_device* dev; } ;
struct alx_napi {int num_napi; char* irq_lbl; int vec_idx; struct alx_napi** qnapi; TYPE_3__ hw; TYPE_2__* rxq; TYPE_1__* txq; struct net_device* dev; } ;
struct TYPE_5__ {int queue_idx; } ;
struct TYPE_4__ {int queue_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct alx_priv*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,char*,struct alx_priv*) ;
 int FUNC_3 (char*,char*,char*,...) ;

__attribute__((used)) static int FUNC_4(struct alx_priv *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 int VAR_4, VAR_5, VAR_6 = 0, VAR_7 = 0;

 VAR_5 = FUNC_2(FUNC_1(VAR_2->hw.pdev, 0), VAR_0,
     0, VAR_3->name, VAR_2);
 if (VAR_5)
  goto out_err;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_napi; VAR_4++) {
  struct alx_napi *VAR_8 = VAR_2->qnapi[VAR_4];

  VAR_6++;

  if (VAR_8->txq && VAR_8->rxq)
   FUNC_3(VAR_8->irq_lbl, "%s-TxRx-%u", VAR_3->name,
    VAR_8->txq->queue_idx);
  else if (VAR_8->txq)
   FUNC_3(VAR_8->irq_lbl, "%s-tx-%u", VAR_3->name,
    VAR_8->txq->queue_idx);
  else if (VAR_8->rxq)
   FUNC_3(VAR_8->irq_lbl, "%s-rx-%u", VAR_3->name,
    VAR_8->rxq->queue_idx);
  else
   FUNC_3(VAR_8->irq_lbl, "%s-unused", VAR_3->name);

  VAR_8->vec_idx = VAR_6;
  VAR_5 = FUNC_2(FUNC_1(VAR_2->hw.pdev, VAR_6),
      VAR_1, 0, VAR_8->irq_lbl, VAR_8);
  if (VAR_5)
   goto out_free;
 }
 return 0;

out_free:
 FUNC_0(FUNC_1(VAR_2->hw.pdev, VAR_7++), VAR_2);

 VAR_6--;
 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
  FUNC_0(FUNC_1(VAR_2->hw.pdev,VAR_7++),
    VAR_2->qnapi[VAR_4]);

out_err:
 return VAR_5;
}
