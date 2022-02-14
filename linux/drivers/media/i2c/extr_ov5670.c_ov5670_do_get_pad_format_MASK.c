
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; int pad; int format; } ;
struct ov5670 {int cur_mode; int sd; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,struct v4l2_subdev_format*) ;
 int * FUNC_1 (int *,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_2(struct ov5670 *VAR_1,
        struct v4l2_subdev_pad_config *VAR_2,
        struct v4l2_subdev_format *VAR_3)
{
 if (VAR_3->which == VAR_0)
  VAR_3->format = *FUNC_1(&VAR_1->sd, VAR_2,
         VAR_3->pad);
 else
  FUNC_0(VAR_1->cur_mode, VAR_3);

 return 0;
}
