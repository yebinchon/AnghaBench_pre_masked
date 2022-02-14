
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;
struct ov6650 {int pclk_max; int pclk_limit; int tpf; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 struct ov6650* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_frame_interval *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_4(VAR_1);
 struct ov6650 *VAR_4 = FUNC_3(VAR_3);

 VAR_2->interval.numerator = FUNC_0(FUNC_2(&VAR_4->tpf,
   VAR_4->pclk_limit, VAR_4->pclk_max));
 VAR_2->interval.denominator = VAR_0;

 FUNC_1(&VAR_3->dev, "Frame interval: %u/%u s\n",
  VAR_2->interval.numerator, VAR_2->interval.denominator);

 return 0;
}
