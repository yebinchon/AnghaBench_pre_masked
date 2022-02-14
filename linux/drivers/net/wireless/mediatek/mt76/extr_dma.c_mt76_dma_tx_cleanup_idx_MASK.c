
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mt76_queue_entry {int * skb; int * txwi; int skip_buf0; } ;
struct mt76_queue {TYPE_1__* desc; struct mt76_queue_entry* entry; } ;
struct mt76_dev {int dev; } ;
typedef int __le32 ;
struct TYPE_2__ {int buf1; int buf0; int ctrl; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mt76_queue_entry*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct mt76_dev *VAR_5, struct mt76_queue *VAR_6, int VAR_7,
   struct mt76_queue_entry *VAR_8)
{
 struct mt76_queue_entry *VAR_9 = &VAR_6->entry[VAR_7];
 __le32 VAR_10 = FUNC_1(VAR_6->desc[VAR_7].ctrl);
 u32 VAR_11 = FUNC_3(VAR_10);

 if (!VAR_9->skip_buf0) {
  __le32 VAR_12 = FUNC_1(VAR_6->desc[VAR_7].buf0);
  u32 VAR_13 = FUNC_0(VAR_3, VAR_11);

  FUNC_2(VAR_5->dev, FUNC_3(VAR_12), VAR_13,
     VAR_1);
 }

 if (!(VAR_11 & VAR_2)) {
  __le32 VAR_14 = FUNC_1(VAR_6->desc[VAR_7].buf1);
  u32 VAR_15 = FUNC_0(VAR_4, VAR_11);

  FUNC_2(VAR_5->dev, FUNC_3(VAR_14), VAR_15,
     VAR_1);
 }

 if (VAR_9->txwi == VAR_0)
  VAR_9->txwi = ((void*)0);

 if (VAR_9->skb == VAR_0)
  VAR_9->skb = ((void*)0);

 *VAR_8 = *VAR_9;
 FUNC_4(VAR_9, 0, sizeof(*VAR_9));
}
