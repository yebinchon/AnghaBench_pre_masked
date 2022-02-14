
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_queue {int ndesc; int * entry; int hw_idx; int lock; } ;
struct mt76_dev {int dev; TYPE_1__* q_tx; } ;
struct TYPE_2__ {struct mt76_queue* q; int swq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_1 (int ,int,int,int ) ;
 struct mt76_queue* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mt76_dev*,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mt76_dev *VAR_6)
{
 struct mt76_queue *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 for (VAR_8 = 0; VAR_8 <= VAR_4; VAR_8++) {
  FUNC_0(&VAR_6->q_tx[VAR_8].swq);

  if (VAR_8 >= VAR_2) {
   VAR_6->q_tx[VAR_8].q = VAR_6->q_tx[0].q;
   continue;
  }

  VAR_7 = FUNC_2(VAR_6->dev, sizeof(*VAR_7), VAR_1);
  if (!VAR_7)
   return -VAR_0;

  FUNC_5(&VAR_7->lock);
  VAR_7->hw_idx = FUNC_3(VAR_8);
  VAR_6->q_tx[VAR_8].q = VAR_7;

  VAR_7->entry = FUNC_1(VAR_6->dev,
     VAR_3, sizeof(*VAR_7->entry),
     VAR_1);
  if (!VAR_7->entry)
   return -VAR_0;

  VAR_7->ndesc = VAR_3;
  for (VAR_9 = 0; VAR_9 < VAR_7->ndesc; VAR_9++) {
   VAR_10 = FUNC_4(VAR_6, &VAR_7->entry[VAR_9],
           VAR_5);
   if (VAR_10 < 0)
    return VAR_10;
  }
 }
 return 0;
}
