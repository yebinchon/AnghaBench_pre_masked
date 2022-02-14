
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct tvp5150 {scalar_t__ norm; scalar_t__ detected_norm; int rect; } ;


 scalar_t__ VAR_0 ;
 struct tvp5150* FUNC_0 (struct v4l2_subdev*) ;
 scalar_t__ FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_pad_config *VAR_2)
{
 struct tvp5150 *VAR_3 = FUNC_0(VAR_1);
 v4l2_std_id VAR_4;





 if (VAR_3->norm == VAR_0) {
  VAR_4 = FUNC_1(VAR_1);
  if (VAR_4 != VAR_3->detected_norm) {
   VAR_3->detected_norm = VAR_4;
   FUNC_2(VAR_4, &VAR_3->rect);
  }
 }

 return 0;
}
