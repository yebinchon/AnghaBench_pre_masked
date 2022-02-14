
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct xlgmac_pdata {int dev; } ;
struct TYPE_15__ {scalar_t__ error; scalar_t__ len; int * skb; } ;
struct TYPE_13__ {scalar_t__ pages; scalar_t__ pages_len; scalar_t__ pages_dma; } ;
struct TYPE_12__ {scalar_t__ pages; } ;
struct TYPE_14__ {TYPE_5__ pa_unmap; TYPE_4__ pa; } ;
struct TYPE_10__ {scalar_t__ pages; scalar_t__ pages_len; scalar_t__ pages_dma; } ;
struct TYPE_9__ {scalar_t__ pages; } ;
struct TYPE_11__ {TYPE_2__ pa_unmap; TYPE_1__ pa; } ;
struct TYPE_16__ {TYPE_6__ buf; TYPE_3__ hdr; } ;
struct xlgmac_desc_data {TYPE_7__ state; scalar_t__ state_saved; scalar_t__ mapped_as_page; TYPE_8__ rx; TYPE_8__ tx; int * skb; scalar_t__ skb_dma_len; scalar_t__ skb_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (TYPE_8__*,int ,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct xlgmac_pdata *VAR_2,
       struct xlgmac_desc_data *VAR_3)
{
 if (VAR_3->skb_dma) {
  if (VAR_3->mapped_as_page) {
   FUNC_1(VAR_2->dev, VAR_3->skb_dma,
           VAR_3->skb_dma_len, VAR_1);
  } else {
   FUNC_2(VAR_2->dev, VAR_3->skb_dma,
      VAR_3->skb_dma_len, VAR_1);
  }
  VAR_3->skb_dma = 0;
  VAR_3->skb_dma_len = 0;
 }

 if (VAR_3->skb) {
  FUNC_0(VAR_3->skb);
  VAR_3->skb = ((void*)0);
 }

 if (VAR_3->rx.hdr.pa.pages)
  FUNC_4(VAR_3->rx.hdr.pa.pages);

 if (VAR_3->rx.hdr.pa_unmap.pages) {
  FUNC_1(VAR_2->dev, VAR_3->rx.hdr.pa_unmap.pages_dma,
          VAR_3->rx.hdr.pa_unmap.pages_len,
          VAR_0);
  FUNC_4(VAR_3->rx.hdr.pa_unmap.pages);
 }

 if (VAR_3->rx.buf.pa.pages)
  FUNC_4(VAR_3->rx.buf.pa.pages);

 if (VAR_3->rx.buf.pa_unmap.pages) {
  FUNC_1(VAR_2->dev, VAR_3->rx.buf.pa_unmap.pages_dma,
          VAR_3->rx.buf.pa_unmap.pages_len,
          VAR_0);
  FUNC_4(VAR_3->rx.buf.pa_unmap.pages);
 }

 FUNC_3(&VAR_3->tx, 0, sizeof(VAR_3->tx));
 FUNC_3(&VAR_3->rx, 0, sizeof(VAR_3->rx));

 VAR_3->mapped_as_page = 0;

 if (VAR_3->state_saved) {
  VAR_3->state_saved = 0;
  VAR_3->state.skb = ((void*)0);
  VAR_3->state.len = 0;
  VAR_3->state.error = 0;
 }
}
