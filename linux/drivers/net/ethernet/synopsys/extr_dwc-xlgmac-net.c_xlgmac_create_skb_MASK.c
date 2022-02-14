
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


typedef int u8 ;
struct xlgmac_pdata {int dev; } ;
struct TYPE_9__ {int * pages; int pages_offset; } ;
struct TYPE_10__ {TYPE_3__ pa; int dma_len; int dma_off; int dma_base; } ;
struct TYPE_7__ {int pages_offset; int pages; } ;
struct TYPE_8__ {int dma_len; TYPE_1__ pa; int dma_off; int dma_base; } ;
struct TYPE_11__ {unsigned int hdr_len; TYPE_4__ buf; TYPE_2__ hdr; } ;
struct xlgmac_desc_data {TYPE_5__ rx; } ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;
struct TYPE_12__ {int nr_frags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 struct sk_buff* FUNC_2 (struct napi_struct*,int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*,int ,int *,int ,unsigned int,int ) ;
 int FUNC_5 (struct sk_buff*,int *,unsigned int) ;
 int FUNC_6 (struct sk_buff*,unsigned int) ;
 TYPE_6__* FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct xlgmac_pdata *VAR_1,
      struct napi_struct *VAR_2,
      struct xlgmac_desc_data *VAR_3,
      unsigned int VAR_4)
{
 unsigned int VAR_5;
 struct sk_buff *VAR_6;
 u8 *VAR_7;

 VAR_6 = FUNC_2(VAR_2, VAR_3->rx.hdr.dma_len);
 if (!VAR_6)
  return ((void*)0);




 FUNC_0(VAR_1->dev, VAR_3->rx.hdr.dma_base,
          VAR_3->rx.hdr.dma_off,
          VAR_3->rx.hdr.dma_len,
          VAR_0);

 VAR_7 = FUNC_3(VAR_3->rx.hdr.pa.pages) +
   VAR_3->rx.hdr.pa.pages_offset;
 VAR_5 = (VAR_3->rx.hdr_len) ? VAR_3->rx.hdr_len : VAR_4;
 VAR_5 = FUNC_1(VAR_3->rx.hdr.dma_len, VAR_5);
 FUNC_5(VAR_6, VAR_7, VAR_5);
 FUNC_6(VAR_6, VAR_5);

 VAR_4 -= VAR_5;
 if (VAR_4) {

  FUNC_0(VAR_1->dev,
           VAR_3->rx.buf.dma_base,
           VAR_3->rx.buf.dma_off,
           VAR_3->rx.buf.dma_len,
           VAR_0);

  FUNC_4(VAR_6, FUNC_7(VAR_6)->nr_frags,
    VAR_3->rx.buf.pa.pages,
    VAR_3->rx.buf.pa.pages_offset,
    VAR_4, VAR_3->rx.buf.dma_len);
  VAR_3->rx.buf.pa.pages = ((void*)0);
 }

 return VAR_6;
}
