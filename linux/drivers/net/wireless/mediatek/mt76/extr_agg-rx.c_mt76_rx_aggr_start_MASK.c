
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u16 ;
struct mt76_wcid {int * aggr; } ;
struct mt76_rx_tid {size_t size; int lock; int reorder_work; int head; struct mt76_dev* dev; } ;
struct mt76_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 struct mt76_rx_tid* FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct mt76_dev*,struct mt76_wcid*,size_t) ;
 int FUNC_3 (int ,struct mt76_rx_tid*) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct mt76_rx_tid*,int ,size_t) ;

int FUNC_6(struct mt76_dev *VAR_4, struct mt76_wcid *VAR_5, u8 VAR_6,
         u16 VAR_7, u8 VAR_8)
{
 struct mt76_rx_tid *VAR_9;

 FUNC_2(VAR_4, VAR_5, VAR_6);

 VAR_9 = FUNC_1(FUNC_5(VAR_9, VAR_3, VAR_8), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = VAR_4;
 VAR_9->head = VAR_7;
 VAR_9->size = VAR_8;
 FUNC_0(&VAR_9->reorder_work, VAR_2);
 FUNC_4(&VAR_9->lock);

 FUNC_3(VAR_5->aggr[VAR_6], VAR_9);

 return 0;
}
