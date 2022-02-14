
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t desc; TYPE_2__* desc_base; } ;
struct xrx200_chan {TYPE_3__ dma; TYPE_4__** skb; TYPE_1__* priv; } ;
struct TYPE_9__ {int data; } ;
struct TYPE_7__ {int ctl; int addr; } ;
struct TYPE_6__ {int dev; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_4__* FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct xrx200_chan *VAR_5)
{
 int VAR_6 = 0;

 VAR_5->skb[VAR_5->dma.desc] = FUNC_4(VAR_5->priv->net_dev,
         VAR_4);
 if (!VAR_5->skb[VAR_5->dma.desc]) {
  VAR_6 = -VAR_1;
  goto skip;
 }

 VAR_5->dma.desc_base[VAR_5->dma.desc].addr = FUNC_2(VAR_5->priv->dev,
   VAR_5->skb[VAR_5->dma.desc]->data, VAR_4,
   VAR_0);
 if (FUNC_5(FUNC_3(VAR_5->priv->dev,
           VAR_5->dma.desc_base[VAR_5->dma.desc].addr))) {
  FUNC_1(VAR_5->skb[VAR_5->dma.desc]);
  VAR_6 = -VAR_1;
  goto skip;
 }

skip:
 VAR_5->dma.desc_base[VAR_5->dma.desc].ctl =
  VAR_2 | FUNC_0(VAR_3) |
  VAR_4;

 return VAR_6;
}
