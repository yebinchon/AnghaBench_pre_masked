
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct velocity_rd_info {int skb_dma; TYPE_2__* skb; } ;
struct TYPE_4__ {int buf_sz; struct velocity_rd_info* info; struct rx_desc* ring; } ;
struct velocity_info {TYPE_1__ rx; int dev; int netdev; } ;
struct rx_desc {int size; scalar_t__ pa_high; int pa_low; int rdesc0; } ;
struct TYPE_5__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_5(struct velocity_info *VAR_3, int VAR_4)
{
 struct rx_desc *VAR_5 = &(VAR_3->rx.ring[VAR_4]);
 struct velocity_rd_info *VAR_6 = &(VAR_3->rx.info[VAR_4]);

 VAR_6->skb = FUNC_3(VAR_3->netdev, VAR_3->rx.buf_sz + 64);
 if (VAR_6->skb == ((void*)0))
  return -VAR_1;





 FUNC_4(VAR_6->skb,
   64 - ((unsigned long) VAR_6->skb->data & 63));
 VAR_6->skb_dma = FUNC_2(VAR_3->dev, VAR_6->skb->data,
     VAR_3->rx.buf_sz, VAR_0);





 *((u32 *) & (VAR_5->rdesc0)) = 0;
 VAR_5->size = FUNC_0(VAR_3->rx.buf_sz) | VAR_2;
 VAR_5->pa_low = FUNC_1(VAR_6->skb_dma);
 VAR_5->pa_high = 0;
 return 0;
}
