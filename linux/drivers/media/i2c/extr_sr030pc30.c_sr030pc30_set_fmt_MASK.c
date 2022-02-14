
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct sr030pc30_info {struct sr030pc30_format const* curr_fmt; } ;
struct sr030pc30_format {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*) ;
 struct sr030pc30_info* FUNC_1 (struct v4l2_subdev*) ;
 struct sr030pc30_format* FUNC_2 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
  struct v4l2_subdev_pad_config *VAR_3,
  struct v4l2_subdev_format *VAR_4)
{
 struct sr030pc30_info *VAR_5 = VAR_2 ? FUNC_1(VAR_2) : ((void*)0);
 const struct sr030pc30_format *VAR_6;
 struct v4l2_mbus_framefmt *VAR_7;

 if (!VAR_2 || !VAR_4)
  return -VAR_0;

 VAR_7 = &VAR_4->format;
 if (VAR_4->pad)
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_2, VAR_7);
 if (VAR_4->which == VAR_1) {
  VAR_3->try_fmt = *VAR_7;
  return 0;
 }

 VAR_5->curr_fmt = VAR_6;

 return FUNC_0(VAR_2);
}
