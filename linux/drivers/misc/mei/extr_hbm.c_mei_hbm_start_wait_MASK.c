
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {scalar_t__ hbm_state; int dev; int device_lock; int wait_hbm_start; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ) ;

int FUNC_5(struct mei_device *VAR_4)
{
 int VAR_5;

 if (VAR_4->hbm_state > VAR_2)
  return 0;

 FUNC_3(&VAR_4->device_lock);
 VAR_5 = FUNC_4(VAR_4->wait_hbm_start,
   VAR_4->hbm_state != VAR_2,
   FUNC_1(VAR_3));
 FUNC_2(&VAR_4->device_lock);

 if (VAR_5 == 0 && (VAR_4->hbm_state <= VAR_2)) {
  VAR_4->hbm_state = VAR_1;
  FUNC_0(VAR_4->dev, "waiting for mei start failed\n");
  return -VAR_0;
 }
 return 0;
}
