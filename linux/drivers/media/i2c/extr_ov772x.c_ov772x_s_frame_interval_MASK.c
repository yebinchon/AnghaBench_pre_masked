
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; unsigned int denominator; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;
struct ov772x_priv {scalar_t__ power_count; unsigned int fps; int lock; int win; int cfmt; scalar_t__ streaming; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (struct ov772x_priv*,struct v4l2_fract*) ;
 int FUNC_3 (struct ov772x_priv*,unsigned int,int ,int ) ;
 struct ov772x_priv* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_frame_interval *VAR_2)
{
 struct ov772x_priv *VAR_3 = FUNC_4(VAR_1);
 struct v4l2_fract *VAR_4 = &VAR_2->interval;
 unsigned int VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_3->lock);

 if (VAR_3->streaming) {
  VAR_6 = -VAR_0;
  goto error;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4);






 if (VAR_3->power_count > 0) {
  VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_3->cfmt, VAR_3->win);
  if (VAR_6)
   goto error;
 }

 VAR_4->numerator = 1;
 VAR_4->denominator = VAR_5;
 VAR_3->fps = VAR_5;

error:
 FUNC_1(&VAR_3->lock);

 return VAR_6;
}
