
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int device_lock; int dev; } ;
struct mei_cl_device {struct mei_device* bus; struct mei_cl* cl; } ;
struct mei_cl {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mei_cl*) ;
 int FUNC_3 (struct mei_cl*,int *) ;
 int FUNC_4 (struct mei_cl*) ;
 int FUNC_5 (struct mei_cl*) ;
 int FUNC_6 (struct mei_cl_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct mei_cl_device *VAR_1)
{
 struct mei_device *VAR_2;
 struct mei_cl *VAR_3;
 int VAR_4;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = VAR_1->cl;

 VAR_2 = VAR_1->bus;

 FUNC_6(VAR_1);

 FUNC_7(&VAR_2->device_lock);

 if (!FUNC_4(VAR_3)) {
  FUNC_0(VAR_2->dev, "Already disconnected\n");
  VAR_4 = 0;
  goto out;
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 < 0)
  FUNC_1(VAR_2->dev, "Could not disconnect from the ME client\n");

out:

 FUNC_3(VAR_3, ((void*)0));
 FUNC_5(VAR_3);

 FUNC_8(&VAR_2->device_lock);
 return VAR_4;
}
