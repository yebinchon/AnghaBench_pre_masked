
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct snd_queue {int free_cnt; } ;
struct sk_buff {int len; int data; } ;
struct nicvf {int netdev; struct nicvf* pnicvf; scalar_t__ t88; TYPE_1__* pdev; int hw_tso; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int nr_frags; scalar_t__ gso_size; int * frags; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct snd_queue*,int) ;
 int FUNC_5 (struct snd_queue*,int) ;
 int FUNC_6 (struct snd_queue*,int,int) ;
 int FUNC_7 (struct snd_queue*,int,int,struct sk_buff*) ;
 int FUNC_8 (struct snd_queue*,int,int,int ) ;
 int FUNC_9 (struct nicvf*,struct snd_queue*,int,int,struct sk_buff*,int) ;
 int FUNC_10 (struct nicvf*,struct snd_queue*,int ,int,struct sk_buff*) ;
 int FUNC_11 (struct nicvf*,struct sk_buff*,int ,int) ;
 int FUNC_12 (struct nicvf*,struct sk_buff*) ;
 int FUNC_13 (struct nicvf*,struct snd_queue*,int,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int const*) ;
 int FUNC_16 (int const*) ;
 int FUNC_17 (int const*) ;
 int FUNC_18 (struct sk_buff*) ;
 scalar_t__ FUNC_19 (struct sk_buff*) ;
 TYPE_2__* FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (int ) ;

int FUNC_22(struct nicvf *VAR_2, struct snd_queue *VAR_3,
   struct sk_buff *VAR_4, u8 VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8, VAR_9 = 0;
 int VAR_10;
 u64 VAR_11;

 VAR_8 = FUNC_12(VAR_2, VAR_4);
 if (VAR_8 > FUNC_0(&VAR_3->free_cnt))
  goto append_fail;

 VAR_10 = FUNC_5(VAR_3, VAR_8);


 if (FUNC_20(VAR_4)->gso_size && !VAR_2->hw_tso)
  return FUNC_10(VAR_2, VAR_3, VAR_5, VAR_10, VAR_4);


 FUNC_9(VAR_2, VAR_3, VAR_10, VAR_8 - 1,
     VAR_4, VAR_4->len);
 VAR_9 = VAR_10;


 VAR_10 = FUNC_4(VAR_3, VAR_10);
 VAR_7 = FUNC_19(VAR_4) ? FUNC_18(VAR_4) : VAR_4->len;

 VAR_11 = FUNC_1(&VAR_2->pdev->dev, FUNC_21(VAR_4->data),
          FUNC_14(VAR_4->data), VAR_7,
          VAR_1, VAR_0);
 if (FUNC_2(&VAR_2->pdev->dev, VAR_11)) {
  FUNC_6(VAR_3, VAR_10, VAR_8);
  return 0;
 }

 FUNC_8(VAR_3, VAR_10, VAR_7, VAR_11);


 if (!FUNC_19(VAR_4))
  goto doorbell;

 for (VAR_6 = 0; VAR_6 < FUNC_20(VAR_4)->nr_frags; VAR_6++) {
  const skb_frag_t *VAR_12 = &FUNC_20(VAR_4)->frags[VAR_6];

  VAR_10 = FUNC_4(VAR_3, VAR_10);
  VAR_7 = FUNC_17(VAR_12);
  VAR_11 = FUNC_1(&VAR_2->pdev->dev,
           FUNC_16(VAR_12),
           FUNC_15(VAR_12), VAR_7,
           VAR_1,
           VAR_0);
  if (FUNC_2(&VAR_2->pdev->dev, VAR_11)) {



   FUNC_13(VAR_2, VAR_3, VAR_9, VAR_6);
   FUNC_6(VAR_3, VAR_10, VAR_8);
   return 0;
  }
  FUNC_8(VAR_3, VAR_10, VAR_7, VAR_11);
 }

doorbell:
 if (VAR_2->t88 && FUNC_20(VAR_4)->gso_size) {
  VAR_10 = FUNC_4(VAR_3, VAR_10);
  FUNC_7(VAR_3, VAR_10, VAR_9, VAR_4);
 }

 FUNC_11(VAR_2, VAR_4, VAR_5, VAR_8);

 return 1;

append_fail:

 VAR_2 = VAR_2->pnicvf;
 FUNC_3(VAR_2->netdev, "Not enough SQ descriptors to xmit pkt\n");
 return 0;
}
