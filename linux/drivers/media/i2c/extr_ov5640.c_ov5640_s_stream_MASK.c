
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ bus_type; } ;
struct ov5640_dev {int streaming; int pending_fmt_change; int lock; TYPE_1__ ep; int fmt; scalar_t__ pending_mode_change; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ov5640_dev*,int *) ;
 int FUNC_3 (struct ov5640_dev*) ;
 int FUNC_4 (struct ov5640_dev*,int) ;
 int FUNC_5 (struct ov5640_dev*,int) ;
 struct ov5640_dev* FUNC_6 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_1, int VAR_2)
{
 struct ov5640_dev *VAR_3 = FUNC_6(VAR_1);
 int VAR_4 = 0;

 FUNC_0(&VAR_3->lock);

 if (VAR_3->streaming == !VAR_2) {
  if (VAR_2 && VAR_3->pending_mode_change) {
   VAR_4 = FUNC_3(VAR_3);
   if (VAR_4)
    goto out;
  }

  if (VAR_2 && VAR_3->pending_fmt_change) {
   VAR_4 = FUNC_2(VAR_3, &VAR_3->fmt);
   if (VAR_4)
    goto out;
   VAR_3->pending_fmt_change = 0;
  }

  if (VAR_3->ep.bus_type == VAR_0)
   VAR_4 = FUNC_5(VAR_3, VAR_2);
  else
   VAR_4 = FUNC_4(VAR_3, VAR_2);

  if (!VAR_4)
   VAR_3->streaming = VAR_2;
 }
out:
 FUNC_1(&VAR_3->lock);
 return VAR_4;
}
