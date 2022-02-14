
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int device_lock; } ;
struct mei_cl_device {int dev; int me_cl; struct mei_cl* cl; struct mei_device* bus; } ;
struct mei_cl {scalar_t__ state; struct mei_cl_device* cldev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct mei_cl*,int ,int *) ;
 scalar_t__ FUNC_2 (struct mei_cl*) ;
 int FUNC_3 (struct mei_cl*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct mei_cl_device *VAR_2)
{
 struct mei_device *VAR_3 = VAR_2->bus;
 struct mei_cl *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->cl;

 FUNC_5(&VAR_3->device_lock);
 if (VAR_4->state == VAR_1) {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5)
   goto out;

  VAR_4->cldev = VAR_2;
 }

 if (FUNC_2(VAR_4)) {
  VAR_5 = 0;
  goto out;
 }

 if (!FUNC_4(VAR_2->me_cl)) {
  FUNC_0(&VAR_2->dev, "me client is not active\n");
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_2->me_cl, ((void*)0));
 if (VAR_5 < 0)
  FUNC_0(&VAR_2->dev, "cannot connect\n");

out:
 FUNC_6(&VAR_3->device_lock);

 return VAR_5;
}
