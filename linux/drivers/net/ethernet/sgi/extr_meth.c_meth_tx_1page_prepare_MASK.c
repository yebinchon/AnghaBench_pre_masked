
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* cat_buf; scalar_t__ dt; } ;
struct TYPE_7__ {int raw; } ;
struct TYPE_12__ {TYPE_5__ data; TYPE_1__ header; } ;
typedef TYPE_6__ tx_packet ;
struct sk_buff {int len; scalar_t__ data; } ;
struct meth_private {size_t tx_write; TYPE_2__* pdev; TYPE_6__* tx_ring; } ;
typedef int dma_addr_t ;
struct TYPE_9__ {int start_addr; int len; } ;
struct TYPE_10__ {TYPE_3__ form; } ;
struct TYPE_8__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,void*,int,int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct meth_private *VAR_3,
      struct sk_buff *VAR_4)
{
 tx_packet *VAR_5 = &VAR_3->tx_ring[VAR_3->tx_write];
 void *VAR_6 = (void *)(((unsigned long)VAR_4->data + 7) & ~7);
 int VAR_7 = (int)((unsigned long)VAR_6 - (unsigned long)VAR_4->data);
 int VAR_8 = VAR_4->len - VAR_7;
 dma_addr_t VAR_9;

 VAR_5->header.raw = VAR_1 | VAR_2 | (VAR_4->len - 1);


 if (VAR_7) {
  FUNC_1(VAR_4, VAR_5->data.dt + (120 - VAR_7),
         VAR_7);
  VAR_5->header.raw |= (128 - VAR_7) << 16;
 }


 VAR_9 = FUNC_0(&VAR_3->pdev->dev, VAR_6, VAR_8,
    VAR_0);
 VAR_5->data.cat_buf[0].form.start_addr = VAR_9 >> 3;
 VAR_5->data.cat_buf[0].form.len = VAR_8 - 1;
}
