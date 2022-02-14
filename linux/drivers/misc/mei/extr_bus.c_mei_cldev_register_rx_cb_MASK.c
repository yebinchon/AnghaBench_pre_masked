
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int device_lock; } ;
struct mei_cl_device {int cl; int rx_work; scalar_t__ rx_cb; struct mei_device* bus; } ;
typedef scalar_t__ mei_cldev_cb_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mei_cl_device *VAR_4, mei_cldev_cb_t VAR_5)
{
 struct mei_device *VAR_6 = VAR_4->bus;
 int VAR_7;

 if (!VAR_5)
  return -VAR_2;
 if (VAR_4->rx_cb)
  return -VAR_0;

 VAR_4->rx_cb = VAR_5;
 FUNC_0(&VAR_4->rx_work, VAR_3);

 FUNC_3(&VAR_6->device_lock);
 VAR_7 = FUNC_2(VAR_4->cl, FUNC_1(VAR_4->cl), ((void*)0));
 FUNC_4(&VAR_6->device_lock);
 if (VAR_7 && VAR_7 != -VAR_1)
  return VAR_7;

 return 0;
}
