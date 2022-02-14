
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct device {int dummy; } ;
struct ccwgroup_driver {scalar_t__ ccw_driver; int (* setup ) (struct ccwgroup_device*) ;int driver; } ;
struct TYPE_12__ {int * driver; int groups; int release; struct device* parent; int * bus; } ;
struct ccwgroup_device {int count; TYPE_2__ dev; int reg_mutex; TYPE_3__** cdev; int ungroup_work; int onoff; } ;
struct ccw_dev_id {int dummy; } ;
struct TYPE_11__ {scalar_t__ driver_info; } ;
struct TYPE_13__ {scalar_t__ drv; TYPE_2__ dev; int ccwlock; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ccwgroup_device*) ;
 int FUNC_2 (char const**,struct ccw_dev_id*) ;
 int FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ccwgroup_device* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,struct ccwgroup_device*) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 TYPE_3__* FUNC_11 (struct ccw_dev_id*) ;
 struct ccwgroup_device* FUNC_12 (int ,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (char const*) ;
 int FUNC_20 (struct ccwgroup_device*,int ,int) ;
 int FUNC_21 (struct ccwgroup_device*) ;

int FUNC_22(struct device *VAR_8, struct ccwgroup_driver *VAR_9,
   int VAR_10, const char *VAR_11)
{
 struct ccwgroup_device *VAR_12;
 struct ccw_dev_id VAR_13;
 int VAR_14, VAR_15;

 if (VAR_10 < 1)
  return -VAR_0;

 VAR_12 = FUNC_12(FUNC_20(VAR_12, VAR_7, VAR_10), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_3(&VAR_12->onoff, 0);
 FUNC_13(&VAR_12->reg_mutex);
 FUNC_14(&VAR_12->reg_mutex);
 FUNC_0(&VAR_12->ungroup_work, VAR_6);
 VAR_12->count = VAR_10;
 VAR_12->dev.bus = &VAR_4;
 VAR_12->dev.parent = VAR_8;
 VAR_12->dev.release = VAR_5;
 FUNC_10(&VAR_12->dev);

 for (VAR_15 = 0; VAR_15 < VAR_10 && VAR_11; VAR_15++) {
  VAR_14 = FUNC_2(&VAR_11, &VAR_13);
  if (VAR_14 != 0)
   goto error;
  VAR_12->cdev[VAR_15] = FUNC_11(&VAR_13);




  if (!VAR_12->cdev[VAR_15] || !VAR_12->cdev[VAR_15]->drv ||
      VAR_12->cdev[VAR_15]->drv != VAR_12->cdev[0]->drv ||
      VAR_12->cdev[VAR_15]->id.driver_info !=
      VAR_12->cdev[0]->id.driver_info) {
   VAR_14 = -VAR_0;
   goto error;
  }

  FUNC_17(VAR_12->cdev[VAR_15]->ccwlock);
  if (FUNC_4(&VAR_12->cdev[VAR_15]->dev)) {
   FUNC_18(VAR_12->cdev[VAR_15]->ccwlock);
   VAR_14 = -VAR_0;
   goto error;
  }
  FUNC_6(&VAR_12->cdev[VAR_15]->dev, VAR_12);
  FUNC_18(VAR_12->cdev[VAR_15]->ccwlock);
 }

 if (VAR_15 < VAR_10) {
  VAR_14 = -VAR_0;
  goto error;
 }

 if (VAR_15 == VAR_10 && VAR_11 && FUNC_19(VAR_11) > 0) {
  VAR_14 = -VAR_0;
  goto error;
 }

 if (VAR_9 && VAR_9->ccw_driver &&
     VAR_12->cdev[0]->drv != VAR_9->ccw_driver) {
  VAR_14 = -VAR_0;
  goto error;
 }

 FUNC_7(&VAR_12->dev, "%s", FUNC_5(&VAR_12->cdev[0]->dev));
 VAR_12->dev.groups = VAR_3;

 if (VAR_9) {
  VAR_12->dev.driver = &VAR_9->driver;
  VAR_14 = VAR_9->setup ? VAR_9->setup(VAR_12) : 0;
  if (VAR_14)
   goto error;
 }
 VAR_14 = FUNC_8(&VAR_12->dev);
 if (VAR_14)
  goto error;
 VAR_14 = FUNC_1(VAR_12);
 if (VAR_14) {
  FUNC_9(&VAR_12->dev);
  goto error;
 }
 FUNC_15(&VAR_12->reg_mutex);
 return 0;
error:
 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
  if (VAR_12->cdev[VAR_15]) {
   FUNC_17(VAR_12->cdev[VAR_15]->ccwlock);
   if (FUNC_4(&VAR_12->cdev[VAR_15]->dev) == VAR_12)
    FUNC_6(&VAR_12->cdev[VAR_15]->dev, ((void*)0));
   FUNC_18(VAR_12->cdev[VAR_15]->ccwlock);
   FUNC_16(&VAR_12->cdev[VAR_15]->dev);
   VAR_12->cdev[VAR_15] = ((void*)0);
  }
 FUNC_15(&VAR_12->reg_mutex);
 FUNC_16(&VAR_12->dev);
 return VAR_14;
}
