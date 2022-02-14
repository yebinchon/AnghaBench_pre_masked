
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct txdb {TYPE_2__* wptr; } ;
struct txd_desc {struct pbl* pbl; } ;
struct sk_buff {int data; } ;
struct pbl {void* pa_hi; void* pa_lo; void* len; } ;
struct bdx_priv {TYPE_5__* pdev; struct txdb txdb; } ;
typedef int skb_frag_t ;
struct TYPE_10__ {int dev; } ;
struct TYPE_9__ {int nr_frags; int * frags; } ;
struct TYPE_8__ {int bytes; } ;
struct TYPE_6__ {struct sk_buff* skb; int dma; } ;
struct TYPE_7__ {TYPE_1__ addr; int len; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (char*,void*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (struct txdb*) ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_6 (int *,int const*,int ,int ,int ) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_4__* FUNC_9 (struct sk_buff*) ;
 TYPE_3__* VAR_2 ;

__attribute__((used)) static inline void
FUNC_10(struct bdx_priv *VAR_3, struct sk_buff *VAR_4,
        struct txd_desc *VAR_5)
{
 struct txdb *VAR_6 = &VAR_3->txdb;
 struct pbl *VAR_7 = &VAR_5->pbl[0];
 int VAR_8 = FUNC_9(VAR_4)->nr_frags;
 int VAR_9;

 VAR_6->wptr->len = FUNC_8(VAR_4);
 VAR_6->wptr->addr.dma = FUNC_5(VAR_3->pdev, VAR_4->data,
         VAR_6->wptr->len, VAR_1);
 VAR_7->len = FUNC_0(VAR_6->wptr->len);
 VAR_7->pa_lo = FUNC_0(FUNC_3(VAR_6->wptr->addr.dma));
 VAR_7->pa_hi = FUNC_0(FUNC_2(VAR_6->wptr->addr.dma));
 FUNC_1("=== pbl   len: 0x%x ================\n", VAR_7->len);
 FUNC_1("=== pbl pa_lo: 0x%x ================\n", VAR_7->pa_lo);
 FUNC_1("=== pbl pa_hi: 0x%x ================\n", VAR_7->pa_hi);
 FUNC_4(VAR_6);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  const skb_frag_t *VAR_10;

  VAR_10 = &FUNC_9(VAR_4)->frags[VAR_9];
  VAR_6->wptr->len = FUNC_7(VAR_10);
  VAR_6->wptr->addr.dma = FUNC_6(&VAR_3->pdev->dev, VAR_10,
            0, FUNC_7(VAR_10),
            VAR_0);

  VAR_7++;
  VAR_7->len = FUNC_0(VAR_6->wptr->len);
  VAR_7->pa_lo = FUNC_0(FUNC_3(VAR_6->wptr->addr.dma));
  VAR_7->pa_hi = FUNC_0(FUNC_2(VAR_6->wptr->addr.dma));
  FUNC_4(VAR_6);
 }


 VAR_6->wptr->len = -VAR_2[VAR_8].bytes;
 VAR_6->wptr->addr.skb = VAR_4;
 FUNC_4(VAR_6);
}
