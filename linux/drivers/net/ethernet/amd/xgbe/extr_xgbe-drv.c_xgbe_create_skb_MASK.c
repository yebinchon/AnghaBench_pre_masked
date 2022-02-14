
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int pages_offset; int pages; } ;
struct TYPE_5__ {TYPE_1__ pa; int dma_len; int dma_off; int dma_base; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
struct xgbe_ring_data {TYPE_3__ rx; } ;
struct xgbe_prv_data {int dev; } ;
struct sk_buff {int dummy; } ;
struct napi_struct {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ,int ) ;
 struct sk_buff* FUNC_1 (struct napi_struct*,int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int *,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static struct sk_buff *FUNC_5(struct xgbe_prv_data *VAR_1,
           struct napi_struct *VAR_2,
           struct xgbe_ring_data *VAR_3,
           unsigned int VAR_4)
{
 struct sk_buff *VAR_5;
 u8 *VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_3->rx.hdr.dma_len);
 if (!VAR_5)
  return ((void*)0);




 FUNC_0(VAR_1->dev, VAR_3->rx.hdr.dma_base,
          VAR_3->rx.hdr.dma_off,
          VAR_3->rx.hdr.dma_len, VAR_0);

 VAR_6 = FUNC_2(VAR_3->rx.hdr.pa.pages) +
   VAR_3->rx.hdr.pa.pages_offset;
 FUNC_3(VAR_5, VAR_6, VAR_4);
 FUNC_4(VAR_5, VAR_4);

 return VAR_5;
}
