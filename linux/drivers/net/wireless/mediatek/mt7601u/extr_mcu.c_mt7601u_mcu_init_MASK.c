
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct mt7601u_dev {int state; TYPE_1__ mcu; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt7601u_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

int FUNC_3(struct mt7601u_dev *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->mcu.mutex);

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 FUNC_2(VAR_0, &VAR_1->state);

 return 0;
}
