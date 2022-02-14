
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ dev_state; int reset_work; int dev; int device_lock; scalar_t__ reset_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mei_device*) ;
 int FUNC_2 (struct mei_device*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct mei_device *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_3->device_lock);

 FUNC_2(VAR_3, VAR_2);
 VAR_3->reset_count = 0;

 VAR_4 = FUNC_1(VAR_3);

 FUNC_4(&VAR_3->device_lock);

 if (VAR_4 == -VAR_0 || VAR_3->dev_state == VAR_1) {
  FUNC_0(VAR_3->dev, "device disabled = %d\n", VAR_4);
  return -VAR_0;
 }


 if (VAR_4)
  FUNC_5(&VAR_3->reset_work);


 return 0;
}
