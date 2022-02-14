
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct bnad_tx_unmap {int nvecs; int * vectors; struct sk_buff* skb; } ;
struct bnad {TYPE_1__* pcidev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static u32
FUNC_7(struct bnad *VAR_4,
         struct bnad_tx_unmap *VAR_5,
         u32 VAR_6, u32 VAR_7)
{
 struct bnad_tx_unmap *VAR_8;
 struct sk_buff *VAR_9;
 int VAR_10, VAR_11;

 VAR_8 = &VAR_5[VAR_7];
 VAR_11 = VAR_8->nvecs;

 VAR_9 = VAR_8->skb;
 VAR_8->skb = ((void*)0);
 VAR_8->nvecs = 0;
 FUNC_5(&VAR_4->pcidev->dev,
  FUNC_1(&VAR_8->vectors[0], VAR_2),
  FUNC_6(VAR_9), VAR_1);
 FUNC_2(&VAR_8->vectors[0], VAR_2, 0);
 VAR_11--;

 VAR_10 = 0;
 while (VAR_11) {
  VAR_10++;
  if (VAR_10 == VAR_0) {
   VAR_10 = 0;
   FUNC_0(VAR_7, VAR_6);
   VAR_8 = &VAR_5[VAR_7];
  }

  FUNC_4(&VAR_4->pcidev->dev,
   FUNC_1(&VAR_8->vectors[VAR_10], VAR_2),
   FUNC_3(&VAR_8->vectors[VAR_10], VAR_3),
   VAR_1);
  FUNC_2(&VAR_8->vectors[VAR_10], VAR_2, 0);
  VAR_11--;
 }

 FUNC_0(VAR_7, VAR_6);

 return VAR_7;
}
