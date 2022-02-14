
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rvin_parallel_entity {int dummy; } ;
struct TYPE_13__ {int * ops; } ;
struct rvin_dev {TYPE_5__ notifier; int v4l2_dev; TYPE_4__* parallel; TYPE_1__* info; int dev; } ;
struct TYPE_10__ {int fwnode; } ;
struct TYPE_11__ {TYPE_2__ match; } ;
struct TYPE_12__ {TYPE_3__ asd; } ;
struct TYPE_9__ {scalar_t__ use_mc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,TYPE_5__*,int,int ,int ) ;
 int FUNC_4 (int *,TYPE_5__*) ;
 int FUNC_5 (struct rvin_dev*,char*,int ) ;
 int FUNC_6 (struct rvin_dev*,char*) ;

__attribute__((used)) static int FUNC_7(struct rvin_dev *VAR_3)
{
 int VAR_4;

 FUNC_2(&VAR_3->notifier);

 VAR_4 = FUNC_3(
  VAR_3->dev, &VAR_3->notifier, sizeof(struct rvin_parallel_entity),
  0, VAR_2);
 if (VAR_4)
  return VAR_4;


 if (!VAR_3->parallel)
  return VAR_3->info->use_mc ? 0 : -VAR_0;

 FUNC_5(VAR_3, "Found parallel subdevice %pOF\n",
  FUNC_0(VAR_3->parallel->asd.match.fwnode));

 VAR_3->notifier.ops = &VAR_1;
 VAR_4 = FUNC_4(&VAR_3->v4l2_dev, &VAR_3->notifier);
 if (VAR_4 < 0) {
  FUNC_6(VAR_3, "Notifier registration failed\n");
  FUNC_1(&VAR_3->notifier);
  return VAR_4;
 }

 return 0;
}
