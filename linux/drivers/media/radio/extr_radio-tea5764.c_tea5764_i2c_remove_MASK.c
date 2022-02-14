
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tea5764_device {int v4l2_dev; int ctrl_handler; int vdev; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (char*) ;
 struct tea5764_device* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct tea5764_device*) ;
 int FUNC_3 (struct tea5764_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_0)
{
 struct tea5764_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_0("remove");
 if (VAR_1) {
  FUNC_3(VAR_1);
  FUNC_6(&VAR_1->vdev);
  FUNC_4(&VAR_1->ctrl_handler);
  FUNC_5(&VAR_1->v4l2_dev);
  FUNC_2(VAR_1);
 }
 return 0;
}
