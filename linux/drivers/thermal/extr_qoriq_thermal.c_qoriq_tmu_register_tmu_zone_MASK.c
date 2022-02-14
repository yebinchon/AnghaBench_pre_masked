
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qoriq_tmu_data {TYPE_1__* regs; TYPE_2__** sensor; } ;
struct qoriq_sensor {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_5__ {int id; int tzd; struct qoriq_tmu_data* qdata; } ;
struct TYPE_4__ {int tmr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,TYPE_2__*,int *) ;
 struct qoriq_tmu_data* FUNC_4 (struct platform_device*) ;
 int VAR_6 ;
 int FUNC_5 (struct qoriq_tmu_data*,int,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_7)
{
 struct qoriq_tmu_data *VAR_8 = FUNC_4(VAR_7);
 int VAR_9, VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_8->sensor[VAR_9] = FUNC_2(&VAR_7->dev,
    sizeof(struct qoriq_sensor), VAR_2);
  if (!VAR_8->sensor[VAR_9])
   return -VAR_1;

  VAR_8->sensor[VAR_9]->id = VAR_9;
  VAR_8->sensor[VAR_9]->qdata = VAR_8;
  VAR_8->sensor[VAR_9]->tzd = FUNC_3(
    &VAR_7->dev, VAR_9, VAR_8->sensor[VAR_9], &VAR_6);
  if (FUNC_0(VAR_8->sensor[VAR_9]->tzd)) {
   if (FUNC_1(VAR_8->sensor[VAR_9]->tzd) == -VAR_0)
    continue;
   else
    return FUNC_1(VAR_8->sensor[VAR_9]->tzd);
  }

  VAR_10 |= 0x1 << (15 - VAR_9);
 }


 if (VAR_10 != 0)
  FUNC_5(VAR_8, VAR_10 | VAR_5 | VAR_4, &VAR_8->regs->tmr);

 return 0;
}
