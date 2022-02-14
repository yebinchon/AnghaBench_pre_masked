
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int dummy; } ;
struct mt76_queue {size_t first; size_t tail; int ndesc; TYPE_1__* entry; } ;
struct mt76_dev {int dev; int state; } ;
struct TYPE_2__ {struct urb* urb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mt76_dev*,struct urb*) ;
 int FUNC_3 (struct urb*,int ) ;

__attribute__((used)) static void FUNC_4(struct mt76_dev *VAR_3, struct mt76_queue *VAR_4)
{
 struct urb *VAR_5;
 int VAR_6;

 while (VAR_4->first != VAR_4->tail) {
  VAR_5 = VAR_4->entry[VAR_4->first].urb;

  FUNC_2(VAR_3, VAR_5);
  VAR_6 = FUNC_3(VAR_5, VAR_1);
  if (VAR_6 < 0) {
   if (VAR_6 == -VAR_0)
    FUNC_1(VAR_2, &VAR_3->state);
   else
    FUNC_0(VAR_3->dev, "tx urb submit failed:%d\n",
     VAR_6);
   break;
  }
  VAR_4->first = (VAR_4->first + 1) % VAR_4->ndesc;
 }
}
