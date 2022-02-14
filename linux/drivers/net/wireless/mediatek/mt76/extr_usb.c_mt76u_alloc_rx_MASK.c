
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data; } ;
struct mt76_usb {TYPE_1__ mcu; } ;
struct mt76_queue {int ndesc; int * entry; int buf_size; int lock; } ;
struct mt76_dev {int dev; struct mt76_queue* q_rx; struct mt76_usb usb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct mt76_dev*,int *) ;
 int FUNC_3 (struct mt76_dev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mt76_dev *VAR_6)
{
 struct mt76_usb *VAR_7 = &VAR_6->usb;
 struct mt76_queue *VAR_8 = &VAR_6->q_rx[VAR_4];
 int VAR_9, VAR_10;

 VAR_7->mcu.data = FUNC_1(VAR_6->dev, VAR_2, VAR_1);
 if (!VAR_7->mcu.data)
  return -VAR_0;

 FUNC_4(&VAR_8->lock);
 VAR_8->entry = FUNC_0(VAR_6->dev,
    VAR_3, sizeof(*VAR_8->entry),
    VAR_1);
 if (!VAR_8->entry)
  return -VAR_0;

 VAR_8->ndesc = VAR_3;
 VAR_8->buf_size = VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_8->ndesc; VAR_9++) {
  VAR_10 = FUNC_2(VAR_6, &VAR_8->entry[VAR_9]);
  if (VAR_10 < 0)
   return VAR_10;
 }

 return FUNC_3(VAR_6);
}
