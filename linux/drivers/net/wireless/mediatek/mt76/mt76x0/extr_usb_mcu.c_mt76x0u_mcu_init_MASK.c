
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int state; } ;
struct mt76x02_dev {TYPE_1__ mt76; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt76x02_dev*) ;
 int FUNC_1 (int ,int *) ;

int FUNC_2(struct mt76x02_dev *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_1(VAR_0, &VAR_1->mt76.state);

 return 0;
}
