
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt76_sw_queue {struct mt76_queue* q; int swq; } ;
struct mt76_queue {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct mt7615_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 struct mt76_queue* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct mt7615_dev*,struct mt76_queue*,int,int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct mt7615_dev *VAR_3, struct mt76_sw_queue *VAR_4,
        int VAR_5, int VAR_6)
{
 struct mt76_queue *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_1(VAR_3->mt76.dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_3, VAR_7, VAR_5, VAR_6, 0, VAR_2);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_0(&VAR_4->swq);
 VAR_4->q = VAR_7;

 return 0;
}
