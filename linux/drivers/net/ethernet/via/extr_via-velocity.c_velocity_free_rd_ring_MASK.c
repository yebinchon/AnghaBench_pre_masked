
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct velocity_rd_info {int * skb; scalar_t__ skb_dma; } ;
struct TYPE_4__ {struct velocity_rd_info* info; int buf_sz; struct rx_desc* ring; } ;
struct TYPE_3__ {int numrx; } ;
struct velocity_info {TYPE_2__ rx; int dev; TYPE_1__ options; } ;
struct rx_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (struct velocity_rd_info*) ;
 int FUNC_3 (struct rx_desc*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct velocity_info *VAR_1)
{
 int VAR_2;

 if (VAR_1->rx.info == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->options.numrx; VAR_2++) {
  struct velocity_rd_info *VAR_3 = &(VAR_1->rx.info[VAR_2]);
  struct rx_desc *VAR_4 = VAR_1->rx.ring + VAR_2;

  FUNC_3(VAR_4, 0, sizeof(*VAR_4));

  if (!VAR_3->skb)
   continue;
  FUNC_1(VAR_1->dev, VAR_3->skb_dma, VAR_1->rx.buf_sz,
     VAR_0);
  VAR_3->skb_dma = 0;

  FUNC_0(VAR_3->skb);
  VAR_3->skb = ((void*)0);
 }

 FUNC_2(VAR_1->rx.info);
 VAR_1->rx.info = ((void*)0);
}
