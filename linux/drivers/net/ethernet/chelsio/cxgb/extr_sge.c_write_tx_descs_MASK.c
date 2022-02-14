
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {int data; } ;
struct cmdQ_e {int addr_hi; int len_gen; unsigned int flags; scalar_t__ addr_lo; } ;
struct cmdQ_ce {struct sk_buff* skb; } ;
struct cmdQ {unsigned int size; struct cmdQ_ce* centries; struct cmdQ_e* entries; } ;
struct adapter {TYPE_2__* pdev; } ;
typedef int skb_frag_t ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {unsigned int nr_frags; int * frags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct cmdQ_ce*,int ,scalar_t__) ;
 int FUNC_5 (struct cmdQ_ce*,int ,unsigned int) ;
 scalar_t__ FUNC_6 (unsigned int) ;
 scalar_t__ FUNC_7 (TYPE_2__*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_8 (int *,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_9 (int *) ;
 unsigned int FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 () ;
 unsigned int FUNC_13 (unsigned int,struct cmdQ_e**,struct cmdQ_ce**,unsigned int*,scalar_t__*,unsigned int*,unsigned int,struct cmdQ*) ;
 int FUNC_14 (struct cmdQ_e*,scalar_t__,unsigned int,unsigned int,int) ;

__attribute__((used)) static inline void FUNC_15(struct adapter *VAR_8, struct sk_buff *VAR_9,
      unsigned int VAR_10, unsigned int VAR_11,
      struct cmdQ *VAR_12)
{
 dma_addr_t VAR_13, VAR_14;
 struct cmdQ_e *VAR_15, *VAR_16;
 struct cmdQ_ce *VAR_17;
 unsigned int VAR_18, VAR_19, VAR_20, VAR_21,
     VAR_22 = FUNC_11(VAR_9)->nr_frags;

 VAR_15 = VAR_16 = &VAR_12->entries[VAR_10];
 VAR_17 = &VAR_12->centries[VAR_10];

 VAR_13 = FUNC_7(VAR_8->pdev, VAR_9->data,
     FUNC_10(VAR_9), VAR_4);

 VAR_14 = VAR_13;
 VAR_21 = FUNC_10(VAR_9);

 VAR_19 = VAR_1 | VAR_2 |
     FUNC_0(VAR_22 == 0 && VAR_21 <= VAR_5) |
     FUNC_2(VAR_11);
 VAR_20 = (VAR_21 <= VAR_5) ?
     VAR_21 : VAR_5;
 VAR_15->addr_lo = (u32)VAR_14;
 VAR_15->addr_hi = (u64)VAR_14 >> 32;
 VAR_15->len_gen = FUNC_3(VAR_20) | FUNC_1(VAR_11);
 VAR_17->skb = ((void*)0);
 FUNC_5(VAR_17, VAR_7, 0);

 if (VAR_3 > VAR_5 &&
     VAR_21 > VAR_5) {
  VAR_14 += VAR_20;
  VAR_21 -= VAR_20;
  VAR_16++;
  VAR_17++;
  if (++VAR_10 == VAR_12->size) {
   VAR_10 = 0;
   VAR_11 ^= 1;
   VAR_16 = VAR_12->entries;
   VAR_17 = VAR_12->centries;
  }
  VAR_10 = FUNC_13(VAR_10, &VAR_16, &VAR_17, &VAR_11,
       &VAR_14, &VAR_21,
       VAR_22, VAR_12);

  if (FUNC_6(VAR_21))
   FUNC_14(VAR_16, VAR_14, VAR_21, VAR_11,
          VAR_22 == 0);
 }

 VAR_17->skb = ((void*)0);
 FUNC_4(VAR_17, VAR_6, VAR_13);
 FUNC_5(VAR_17, VAR_7, FUNC_10(VAR_9));

 for (VAR_18 = 0; VAR_22--; VAR_18++) {
  skb_frag_t *VAR_23 = &FUNC_11(VAR_9)->frags[VAR_18];
  VAR_16++;
  VAR_17++;
  if (++VAR_10 == VAR_12->size) {
   VAR_10 = 0;
   VAR_11 ^= 1;
   VAR_16 = VAR_12->entries;
   VAR_17 = VAR_12->centries;
  }

  VAR_13 = FUNC_8(&VAR_8->pdev->dev, VAR_23, 0,
        FUNC_9(VAR_23), VAR_0);
  VAR_14 = VAR_13;
  VAR_21 = FUNC_9(VAR_23);

  VAR_10 = FUNC_13(VAR_10, &VAR_16, &VAR_17, &VAR_11,
       &VAR_14, &VAR_21,
       VAR_22, VAR_12);
  if (FUNC_6(VAR_21))
   FUNC_14(VAR_16, VAR_14, VAR_21, VAR_11,
          VAR_22 == 0);
  VAR_17->skb = ((void*)0);
  FUNC_4(VAR_17, VAR_6, VAR_13);
  FUNC_5(VAR_17, VAR_7, FUNC_9(VAR_23));
 }
 VAR_17->skb = VAR_9;
 FUNC_12();
 VAR_15->flags = VAR_19;
}
