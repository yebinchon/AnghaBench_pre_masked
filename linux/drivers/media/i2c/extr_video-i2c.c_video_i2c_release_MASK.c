
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_i2c_data {int regmap; int queue_lock; int lock; int v4l2_dev; } ;
struct video_device {int dummy; } ;


 int FUNC_0 (struct video_i2c_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 struct video_i2c_data* FUNC_4 (struct video_device*) ;

__attribute__((used)) static void FUNC_5(struct video_device *VAR_0)
{
 struct video_i2c_data *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(&VAR_1->v4l2_dev);
 FUNC_1(&VAR_1->lock);
 FUNC_1(&VAR_1->queue_lock);
 FUNC_2(VAR_1->regmap);
 FUNC_0(VAR_1);
}
