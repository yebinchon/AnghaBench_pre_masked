
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ hw_owned; } ;
union desc_stat {TYPE_3__ tx; int data; } ;
struct net_device {int dummy; } ;
struct ksz_desc_info {int last; scalar_t__ avail; scalar_t__ alloc; int mask; struct ksz_desc* ring; } ;
struct ksz_hw {struct ksz_desc_info tx_desc_info; } ;
struct ksz_dma_buf {TYPE_4__* skb; int len; int dma; } ;
struct ksz_desc {TYPE_2__* phw; } ;
struct dev_info {int hwlock; int pdev; struct ksz_hw hw; } ;
struct TYPE_8__ {struct net_device* dev; } ;
struct TYPE_5__ {int data; } ;
struct TYPE_6__ {TYPE_1__ ctrl; } ;


 struct ksz_dma_buf* FUNC_0 (struct ksz_desc*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct ksz_desc*,union desc_stat) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dev_info *VAR_1, int VAR_2)
{
 int VAR_3;
 union desc_stat VAR_4;
 struct ksz_hw *VAR_5 = &VAR_1->hw;
 struct ksz_desc_info *VAR_6 = &VAR_5->tx_desc_info;
 struct ksz_desc *VAR_7;
 struct ksz_dma_buf *VAR_8;
 struct net_device *VAR_9 = ((void*)0);

 FUNC_6(&VAR_1->hwlock);
 VAR_3 = VAR_6->last;

 while (VAR_6->avail < VAR_6->alloc) {

  VAR_7 = &VAR_6->ring[VAR_3];
  VAR_4.data = FUNC_2(VAR_7->phw->ctrl.data);
  if (VAR_4.tx.hw_owned) {
   if (VAR_2)
    break;
   else
    FUNC_5(VAR_7, VAR_4);
  }

  VAR_8 = FUNC_0(VAR_7);
  FUNC_4(
   VAR_1->pdev, VAR_8->dma, VAR_8->len,
   VAR_0);


  if (VAR_8->skb) {
   VAR_9 = VAR_8->skb->dev;


   FUNC_1(VAR_8->skb);
   VAR_8->skb = ((void*)0);
  }


  VAR_3++;
  VAR_3 &= VAR_6->mask;
  VAR_6->avail++;
 }
 VAR_6->last = VAR_3;
 FUNC_7(&VAR_1->hwlock);


 if (VAR_9)
  FUNC_3(VAR_9);
}
