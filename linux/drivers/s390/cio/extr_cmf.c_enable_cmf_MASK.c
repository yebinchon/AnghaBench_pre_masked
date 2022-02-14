
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int kobj; } ;
struct ccw_device {TYPE_1__ dev; } ;
struct TYPE_7__ {int (* alloc ) (struct ccw_device*) ;int (* set ) (struct ccw_device*,int) ;int (* free ) (struct ccw_device*) ;int attr_group; int (* reset ) (struct ccw_device*) ;} ;


 TYPE_5__* VAR_0 ;
 scalar_t__ FUNC_0 (struct ccw_device*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (struct ccw_device*) ;
 int FUNC_7 (struct ccw_device*) ;
 int FUNC_8 (struct ccw_device*) ;
 int FUNC_9 (struct ccw_device*,int) ;
 int FUNC_10 (struct ccw_device*) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,int ) ;

int FUNC_13(struct ccw_device *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(&VAR_1->dev);
 if (FUNC_0(VAR_1)) {
  VAR_0->reset(VAR_1);
  goto out_unlock;
 }
 FUNC_3(&VAR_1->dev);
 VAR_2 = VAR_0->alloc(VAR_1);
 if (VAR_2)
  goto out;
 VAR_0->reset(VAR_1);
 VAR_2 = FUNC_11(&VAR_1->dev.kobj, VAR_0->attr_group);
 if (VAR_2) {
  VAR_0->free(VAR_1);
  goto out;
 }
 VAR_2 = VAR_0->set(VAR_1, 2);
 if (VAR_2) {
  FUNC_12(&VAR_1->dev.kobj, VAR_0->attr_group);
  VAR_0->free(VAR_1);
 }
out:
 if (VAR_2)
  FUNC_4(&VAR_1->dev);
out_unlock:
 FUNC_2(&VAR_1->dev);
 return VAR_2;
}
