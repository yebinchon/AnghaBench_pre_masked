
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ pending; } ;
struct softing_priv {TYPE_4__ tx; } ;
struct TYPE_6__ {int last_bus; scalar_t__ pending; } ;
struct TYPE_5__ {int svc_count; } ;
struct softing {TYPE_3__* pdat; struct net_device** net; TYPE_2__ tx; int spin; TYPE_1__ irq; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_7__ {int nbus; } ;


 int FUNC_0 (struct net_device**) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 struct softing_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct softing*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct softing *VAR_6 = (struct softing *)VAR_5;
 struct net_device *VAR_7;
 struct softing_priv *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_11 = 0;
 FUNC_5(&VAR_6->spin);
 while (FUNC_4(VAR_6) > 0) {
  ++VAR_6->irq.svc_count;
  ++VAR_11;
 }
 FUNC_6(&VAR_6->spin);

 VAR_10 = VAR_6->tx.last_bus;
 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_6->net); ++VAR_9) {
  if (VAR_6->tx.pending >= VAR_2)
   break;
  VAR_7 = VAR_6->net[(VAR_9 + VAR_10 + 1) % VAR_6->pdat->nbus];
  if (!VAR_7)
   continue;
  VAR_8 = FUNC_2(VAR_7);
  if (!FUNC_1(VAR_7))

   continue;
  if (VAR_8->tx.pending >= VAR_3)
   continue;
  ++VAR_11;
  FUNC_3(VAR_7);
 }
 return VAR_11 ? VAR_0 : VAR_1;
}
