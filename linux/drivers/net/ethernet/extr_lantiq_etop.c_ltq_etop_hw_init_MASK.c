
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ltq_etop_priv {TYPE_2__* pdev; struct ltq_etop_chan* ch; TYPE_1__* pldata; } ;
struct TYPE_7__ {int nr; scalar_t__ desc; int irq; int * dev; } ;
struct ltq_etop_chan {int idx; TYPE_3__ dma; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int mii_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct ltq_etop_chan*) ;
 int VAR_13 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*,char*,int) ;
 struct ltq_etop_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (int,int ,int ,char*,struct ltq_etop_priv*) ;

__attribute__((used)) static int
FUNC_12(struct net_device *VAR_14)
{
 struct ltq_etop_priv *VAR_15 = FUNC_10(VAR_14);
 int VAR_16;

 FUNC_8(VAR_11);

 switch (VAR_15->pldata->mii_mode) {
 case 128:
  FUNC_7(VAR_3,
   VAR_5, VAR_9);
  break;

 case 129:
  FUNC_7(VAR_3,
   VAR_4, VAR_9);
  break;

 default:
  FUNC_9(VAR_14, "unknown mii mode %d\n",
   VAR_15->pldata->mii_mode);
  return -VAR_2;
 }


 FUNC_6(VAR_12, VAR_6);

 FUNC_4(VAR_0);

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  int VAR_17 = VAR_8 + VAR_16;
  struct ltq_etop_chan *VAR_18 = &VAR_15->ch[VAR_16];

  VAR_18->idx = VAR_18->dma.nr = VAR_16;
  VAR_18->dma.dev = &VAR_15->pdev->dev;

  if (FUNC_1(VAR_16)) {
   FUNC_3(&VAR_18->dma);
   FUNC_11(VAR_17, VAR_13, 0, "etop_tx", VAR_15);
  } else if (FUNC_0(VAR_16)) {
   FUNC_2(&VAR_18->dma);
   for (VAR_18->dma.desc = 0; VAR_18->dma.desc < VAR_7;
     VAR_18->dma.desc++)
    if (FUNC_5(VAR_18))
     return -VAR_1;
   VAR_18->dma.desc = 0;
   FUNC_11(VAR_17, VAR_13, 0, "etop_rx", VAR_15);
  }
  VAR_18->dma.irq = VAR_17;
 }
 return 0;
}
