
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int entity; } ;
struct TYPE_2__ {int handler; } ;
struct stimx274 {int lock; TYPE_1__ ctrls; } ;
struct i2c_client {int dummy; } ;


 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int VAR_0 ;
 int FUNC_1 (struct stimx274*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct stimx274* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (struct v4l2_subdev*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_0(VAR_1);
 struct stimx274 *VAR_3 = FUNC_4(VAR_2);


 FUNC_1(VAR_3, VAR_0);

 FUNC_5(VAR_2);
 FUNC_6(&VAR_3->ctrls.handler);
 FUNC_2(&VAR_2->entity);
 FUNC_3(&VAR_3->lock);
 return 0;
}
