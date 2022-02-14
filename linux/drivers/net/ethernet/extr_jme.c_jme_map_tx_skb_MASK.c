
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct txdesc {int dummy; } ;
struct sk_buff {int data; int len; } ;
struct jme_ring {struct jme_buffer_info* bufinf; struct txdesc* desc; } ;
struct jme_buffer_info {int dummy; } ;
struct jme_adapter {int tx_ring_mask; int pdev; TYPE_1__* dev; struct jme_ring* txring; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int nr_frags; int * frags; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (struct jme_adapter*,int,int) ;
 int FUNC_1 (int ,struct txdesc*,struct jme_buffer_info*,int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 TYPE_2__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct jme_adapter *VAR_1, struct sk_buff *VAR_2, int VAR_3)
{
 struct jme_ring *VAR_4 = &(VAR_1->txring[0]);
 struct txdesc *VAR_5 = VAR_4->desc, *VAR_6;
 struct jme_buffer_info *VAR_7 = VAR_4->bufinf, *VAR_8;
 bool VAR_9 = VAR_1->dev->features & VAR_0;
 int VAR_10, VAR_11 = FUNC_8(VAR_2)->nr_frags;
 int VAR_12 = VAR_1->tx_ring_mask;
 u32 VAR_13;
 int VAR_14 = 0;

 for (VAR_10 = 0 ; VAR_10 < VAR_11 ; ++VAR_10) {
  const skb_frag_t *VAR_15 = &FUNC_8(VAR_2)->frags[VAR_10];

  VAR_6 = VAR_5 + ((VAR_3 + VAR_10 + 2) & (VAR_12));
  VAR_8 = VAR_7 + ((VAR_3 + VAR_10 + 2) & (VAR_12));

  VAR_14 = FUNC_1(VAR_1->pdev, VAR_6, VAR_8,
          FUNC_4(VAR_15), FUNC_3(VAR_15),
          FUNC_5(VAR_15), VAR_9);
  if (VAR_14) {
   FUNC_0(VAR_1, VAR_3, VAR_10);
   goto out;
  }
 }

 VAR_13 = FUNC_7(VAR_2) ? FUNC_6(VAR_2) : VAR_2->len;
 VAR_6 = VAR_5 + ((VAR_3 + 1) & (VAR_12));
 VAR_8 = VAR_7 + ((VAR_3 + 1) & (VAR_12));
 VAR_14 = FUNC_1(VAR_1->pdev, VAR_6, VAR_8, FUNC_9(VAR_2->data),
   FUNC_2(VAR_2->data), VAR_13, VAR_9);
 if (VAR_14)
  FUNC_0(VAR_1, VAR_3, VAR_10);

out:
 return VAR_14;

}
