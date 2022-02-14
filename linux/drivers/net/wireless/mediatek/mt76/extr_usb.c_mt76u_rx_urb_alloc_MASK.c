
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt76_queue_entry {int urb; } ;
struct mt76_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt76_dev*,int ,int ,int ) ;
 int FUNC_1 (struct mt76_dev*,struct mt76_queue_entry*,int ) ;

__attribute__((used)) static int
FUNC_2(struct mt76_dev *VAR_2, struct mt76_queue_entry *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, VAR_3->urb, VAR_1,
          VAR_0);
}
