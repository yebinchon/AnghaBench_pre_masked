
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int recvd_hw_ready; int dev; int device_lock; int wait_hw_ready; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct mei_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct mei_device *VAR_2)
{
 if (FUNC_1(VAR_2))
  return 0;

 FUNC_4(&VAR_2->device_lock);
 FUNC_5(VAR_2->wait_hw_ready, VAR_2->recvd_hw_ready,
   FUNC_2(VAR_1));
 FUNC_3(&VAR_2->device_lock);
 if (!VAR_2->recvd_hw_ready) {
  FUNC_0(VAR_2->dev, "wait for readiness failed\n");
  return -VAR_0;
 }

 VAR_2->recvd_hw_ready = 0;
 return 0;
}
