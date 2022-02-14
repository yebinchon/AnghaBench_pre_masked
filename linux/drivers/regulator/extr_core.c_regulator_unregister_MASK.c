
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int work; } ;
struct regulator_dev {int dev; int list; int open_count; int debugfs; TYPE_1__ disable_work; scalar_t__ supply; int use_count; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct regulator_dev*) ;
 int VAR_0 ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct regulator_dev*) ;
 int FUNC_11 (struct regulator_dev*) ;

void FUNC_12(struct regulator_dev *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;

 if (VAR_1->supply) {
  while (VAR_1->use_count--)
   FUNC_7(VAR_1->supply);
  FUNC_9(VAR_1->supply);
 }

 FUNC_3(&VAR_1->disable_work.work);

 FUNC_5(&VAR_0);

 FUNC_1(VAR_1->debugfs);
 FUNC_0(VAR_1->open_count);
 FUNC_10(VAR_1);
 FUNC_11(VAR_1);
 FUNC_4(&VAR_1->list);
 FUNC_8(VAR_1);
 FUNC_2(&VAR_1->dev);

 FUNC_6(&VAR_0);
}
