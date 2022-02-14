
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int numerator; int denominator; } ;
struct ov6650 {int pclk_max; int pclk_limit; TYPE_1__ tpf; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_client*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;
 struct ov6650* FUNC_3 (struct i2c_client*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3,
       struct v4l2_subdev_frame_interval *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(VAR_3);
 struct ov6650 *VAR_6 = FUNC_3(VAR_5);
 struct v4l2_fract *VAR_7 = &VAR_4->interval;
 int VAR_8, VAR_9;
 u8 VAR_10;

 if (VAR_7->numerator == 0 || VAR_7->denominator == 0)
  VAR_8 = 1;
 else
  VAR_8 = (VAR_7->numerator * VAR_1) / VAR_7->denominator;

 if (VAR_8 == 0)
  VAR_8 = 1;
 else if (VAR_8 > FUNC_0(VAR_0))
  VAR_8 = FUNC_0(VAR_0);





 VAR_6->tpf.numerator = VAR_8;
 VAR_6->tpf.denominator = VAR_1;

 VAR_10 = FUNC_2(&VAR_6->tpf, VAR_6->pclk_limit, VAR_6->pclk_max);

 VAR_9 = FUNC_1(VAR_5, VAR_2, VAR_10, VAR_0);
 if (!VAR_9) {
  VAR_7->numerator = FUNC_0(VAR_10);
  VAR_7->denominator = VAR_1;
 }

 return VAR_9;
}
