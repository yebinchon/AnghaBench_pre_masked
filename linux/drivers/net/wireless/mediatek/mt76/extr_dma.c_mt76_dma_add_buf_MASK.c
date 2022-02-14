
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct mt76_queue_buf {int len; int addr; } ;
struct mt76_queue {size_t head; int ndesc; TYPE_1__* entry; int queued; struct mt76_desc* desc; } ;
struct mt76_dev {int dummy; } ;
struct mt76_desc {int ctrl; int info; int buf1; int buf0; } ;
struct TYPE_2__ {int skip_buf0; struct sk_buff* skb; void* txwi; } ;


 void* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct mt76_dev *VAR_5, struct mt76_queue *VAR_6,
   struct mt76_queue_buf *VAR_7, int VAR_8, u32 VAR_9,
   struct sk_buff *VAR_10, void *VAR_11)
{
 struct mt76_desc *VAR_12;
 u32 VAR_13;
 int VAR_14, VAR_15 = -1;

 if (VAR_11) {
  VAR_6->entry[VAR_6->head].txwi = VAR_0;
  VAR_6->entry[VAR_6->head].skip_buf0 = 1;
 }

 for (VAR_14 = 0; VAR_14 < VAR_8; VAR_14 += 2, VAR_7 += 2) {
  u32 VAR_16 = VAR_7[0].addr, VAR_17 = 0;

  VAR_13 = FUNC_0(VAR_3, VAR_7[0].len);
  if (VAR_14 < VAR_8 - 1) {
   VAR_17 = VAR_7[1].addr;
   VAR_13 |= FUNC_0(VAR_4, VAR_7[1].len);
  }

  if (VAR_14 == VAR_8 - 1)
   VAR_13 |= VAR_1;
  else if (VAR_14 == VAR_8 - 2)
   VAR_13 |= VAR_2;

  VAR_15 = VAR_6->head;
  VAR_6->head = (VAR_6->head + 1) % VAR_6->ndesc;

  VAR_12 = &VAR_6->desc[VAR_15];

  FUNC_1(VAR_12->buf0, FUNC_2(VAR_16));
  FUNC_1(VAR_12->buf1, FUNC_2(VAR_17));
  FUNC_1(VAR_12->info, FUNC_2(VAR_9));
  FUNC_1(VAR_12->ctrl, FUNC_2(VAR_13));

  VAR_6->queued++;
 }

 VAR_6->entry[VAR_15].txwi = VAR_11;
 VAR_6->entry[VAR_15].skb = VAR_10;

 return VAR_15;
}
