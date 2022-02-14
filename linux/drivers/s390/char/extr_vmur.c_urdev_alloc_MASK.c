
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urdev {struct ccw_device* cdev; int ref_count; int open_lock; int wait; int io_mutex; int dev_id; int reclen; } ;
struct TYPE_2__ {int driver_info; } ;
struct ccw_device {int dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccw_device*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct urdev* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct urdev *FUNC_7(struct ccw_device *VAR_1)
{
 struct urdev *VAR_2;

 VAR_2 = FUNC_3(sizeof(struct urdev), VAR_0);
 if (!VAR_2)
  return ((void*)0);
 VAR_2->reclen = VAR_1->id.driver_info;
 FUNC_0(VAR_1, &VAR_2->dev_id);
 FUNC_4(&VAR_2->io_mutex);
 FUNC_2(&VAR_2->wait);
 FUNC_6(&VAR_2->open_lock);
 FUNC_5(&VAR_2->ref_count, 1);
 VAR_2->cdev = VAR_1;
 FUNC_1(&VAR_1->dev);
 return VAR_2;
}
