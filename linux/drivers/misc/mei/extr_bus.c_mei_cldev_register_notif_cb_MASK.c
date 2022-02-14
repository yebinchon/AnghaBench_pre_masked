
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int device_lock; } ;
struct mei_cl_device {int cl; int notif_work; scalar_t__ notif_cb; struct mei_device* bus; } ;
typedef scalar_t__ mei_cldev_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct mei_cl_device *VAR_3,
    mei_cldev_cb_t VAR_4)
{
 struct mei_device *VAR_5 = VAR_3->bus;
 int VAR_6;

 if (!VAR_4)
  return -VAR_1;

 if (VAR_3->notif_cb)
  return -VAR_0;

 VAR_3->notif_cb = VAR_4;
 FUNC_0(&VAR_3->notif_work, VAR_2);

 FUNC_2(&VAR_5->device_lock);
 VAR_6 = FUNC_1(VAR_3->cl, ((void*)0), 1);
 FUNC_3(&VAR_5->device_lock);
 if (VAR_6)
  return VAR_6;

 return 0;
}
