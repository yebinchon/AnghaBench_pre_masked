
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct mt76_queue_buf {int len; int addr; } ;
struct mt76_queue {int lock; } ;
struct mt76_dev {int dev; TYPE_1__* q_tx; } ;
typedef enum mt76_txq_id { ____Placeholder_mt76_txq_id } mt76_txq_id ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct mt76_queue* q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mt76_dev*,struct mt76_queue*,struct mt76_queue_buf*,int,int ,struct sk_buff*,int *) ;
 int FUNC_3 (struct mt76_dev*,struct mt76_queue*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct mt76_dev *VAR_2, enum mt76_txq_id VAR_3,
     struct sk_buff *VAR_4, u32 VAR_5)
{
 struct mt76_queue *VAR_6 = VAR_2->q_tx[VAR_3].q;
 struct mt76_queue_buf VAR_7;
 dma_addr_t VAR_8;

 VAR_8 = FUNC_0(VAR_2->dev, VAR_4->data, VAR_4->len,
         VAR_0);
 if (FUNC_6(FUNC_1(VAR_2->dev, VAR_8)))
  return -VAR_1;

 VAR_7.addr = VAR_8;
 VAR_7.len = VAR_4->len;

 FUNC_4(&VAR_6->lock);
 FUNC_2(VAR_2, VAR_6, &VAR_7, 1, VAR_5, VAR_4, ((void*)0));
 FUNC_3(VAR_2, VAR_6);
 FUNC_5(&VAR_6->lock);

 return 0;
}
