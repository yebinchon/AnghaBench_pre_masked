
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct tda1997x_state {int * mbus_codes; } ;


 struct tda1997x_state* FUNC_0 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
        struct v4l2_subdev_pad_config *VAR_1)
{
 struct tda1997x_state *VAR_2 = FUNC_0(VAR_0);
 struct v4l2_mbus_framefmt *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, 0);
 VAR_3->code = VAR_2->mbus_codes[0];

 return 0;
}
