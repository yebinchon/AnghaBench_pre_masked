
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ data; } ;
struct iwl_txq {int dummy; } ;
struct iwl_trans {int dev; } ;
struct iwl_cmd_meta {int tbs; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iwl_trans*,struct iwl_txq*,int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int const*) ;
 int FUNC_5 (int ,int const*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (int const*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 TYPE_1__* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct iwl_trans *VAR_2, struct sk_buff *VAR_3,
        struct iwl_txq *VAR_4, u8 VAR_5,
        struct iwl_cmd_meta *VAR_6)
{
 u16 VAR_7;
 int VAR_8;





 VAR_7 = FUNC_7(VAR_3) - VAR_5;

 if (VAR_7 > 0) {
  dma_addr_t VAR_9 = FUNC_1(VAR_2->dev,
          VAR_3->data + VAR_5,
          VAR_7, VAR_0);
  if (FUNC_10(FUNC_2(VAR_2->dev, VAR_9)))
   return -VAR_1;
  FUNC_9(VAR_2->dev, VAR_3,
     VAR_3->data + VAR_5,
     VAR_7);
  FUNC_3(VAR_2, VAR_4, VAR_9, VAR_7, 0);
 }


 for (VAR_8 = 0; VAR_8 < FUNC_8(VAR_3)->nr_frags; VAR_8++) {
  const skb_frag_t *VAR_10 = &FUNC_8(VAR_3)->frags[VAR_8];
  dma_addr_t VAR_11;
  int VAR_12;

  if (!FUNC_6(VAR_10))
   continue;

  VAR_11 = FUNC_5(VAR_2->dev, VAR_10, 0,
        FUNC_6(VAR_10), VAR_0);

  if (FUNC_10(FUNC_2(VAR_2->dev, VAR_11)))
   return -VAR_1;
  FUNC_9(VAR_2->dev, VAR_3,
     FUNC_4(VAR_10),
     FUNC_6(VAR_10));
  VAR_12 = FUNC_3(VAR_2, VAR_4, VAR_11,
      FUNC_6(VAR_10), 0);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_6->tbs |= FUNC_0(VAR_12);
 }

 return 0;
}
