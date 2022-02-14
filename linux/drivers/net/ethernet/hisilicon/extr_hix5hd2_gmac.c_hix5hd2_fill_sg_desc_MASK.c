
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct sg_desc {TYPE_2__* frags; void* linear_len; void* linear_addr; void* total_len; } ;
struct TYPE_4__ {struct sg_desc* desc; } ;
struct hix5hd2_priv {int dev; TYPE_1__ tx_ring; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_6__ {int nr_frags; int * frags; } ;
struct TYPE_5__ {void* size; void* addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int *,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sk_buff*) ;
 TYPE_3__* FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct hix5hd2_priv *VAR_2,
    struct sk_buff *VAR_3, u32 VAR_4)
{
 struct sg_desc *VAR_5;
 dma_addr_t VAR_6;
 int VAR_7;
 int VAR_8;

 VAR_5 = VAR_2->tx_ring.desc + VAR_4;

 VAR_5->total_len = FUNC_0(VAR_3->len);
 VAR_6 = FUNC_1(VAR_2->dev, VAR_3->data, FUNC_5(VAR_3),
         VAR_0);
 if (FUNC_7(FUNC_2(VAR_2->dev, VAR_6)))
  return -VAR_1;
 VAR_5->linear_addr = FUNC_0(VAR_6);
 VAR_5->linear_len = FUNC_0(FUNC_5(VAR_3));

 for (VAR_8 = 0; VAR_8 < FUNC_6(VAR_3)->nr_frags; VAR_8++) {
  skb_frag_t *VAR_9 = &FUNC_6(VAR_3)->frags[VAR_8];
  int VAR_10 = FUNC_4(VAR_9);

  VAR_6 = FUNC_3(VAR_2->dev, VAR_9, 0, VAR_10, VAR_0);
  VAR_7 = FUNC_2(VAR_2->dev, VAR_6);
  if (FUNC_7(VAR_7))
   return -VAR_1;
  VAR_5->frags[VAR_8].addr = FUNC_0(VAR_6);
  VAR_5->frags[VAR_8].size = FUNC_0(VAR_10);
 }

 return 0;
}
