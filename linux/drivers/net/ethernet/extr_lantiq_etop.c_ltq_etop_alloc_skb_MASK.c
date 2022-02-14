
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ltq_etop_priv {TYPE_1__* pdev; } ;
struct TYPE_8__ {size_t desc; TYPE_2__* desc_base; } ;
struct ltq_etop_chan {TYPE_3__ dma; TYPE_4__** skb; int netdev; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_7__ {int ctl; int addr; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int,int ) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 struct ltq_etop_priv* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_4__*,int ) ;

__attribute__((used)) static int
FUNC_6(struct ltq_etop_chan *VAR_5)
{
 struct ltq_etop_priv *VAR_6 = FUNC_4(VAR_5->netdev);

 VAR_5->skb[VAR_5->dma.desc] = FUNC_3(VAR_5->netdev, VAR_3);
 if (!VAR_5->skb[VAR_5->dma.desc])
  return -VAR_1;
 VAR_5->dma.desc_base[VAR_5->dma.desc].addr = FUNC_2(&VAR_6->pdev->dev,
  VAR_5->skb[VAR_5->dma.desc]->data, VAR_3,
  VAR_0);
 VAR_5->dma.desc_base[VAR_5->dma.desc].addr =
  FUNC_0(VAR_5->skb[VAR_5->dma.desc]->data);
 VAR_5->dma.desc_base[VAR_5->dma.desc].ctl =
  VAR_2 | FUNC_1(VAR_4) |
  VAR_3;
 FUNC_5(VAR_5->skb[VAR_5->dma.desc], VAR_4);
 return 0;
}
