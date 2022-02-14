
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ top; scalar_t__ left; } ;
struct v4l2_subdev_selection {scalar_t__ which; TYPE_1__ r; int target; int pad; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k5baf {int lock; TYPE_1__ crop_source; TYPE_1__ compose; TYPE_1__ crop_sink; } ;
typedef enum selection_rect { ____Placeholder_selection_rect } selection_rect ;


 int VAR_0 ;





 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 struct s5k5baf* FUNC_4 (struct v4l2_subdev*) ;
 TYPE_1__* FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;
 TYPE_1__* FUNC_6 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_7(struct v4l2_subdev *VAR_3,
     struct v4l2_subdev_pad_config *VAR_4,
     struct v4l2_subdev_selection *VAR_5)
{
 enum selection_rect VAR_6;
 struct s5k5baf *VAR_7 = FUNC_4(VAR_3);

 VAR_6 = FUNC_2(VAR_5->pad, VAR_5->target);

 switch (VAR_6) {
 case 128:
  return -VAR_0;
 case 132:
  VAR_5->r = VAR_2;
  return 0;
 default:
  break;
 }

 if (VAR_5->which == VAR_1) {
  if (VAR_6 == 131)
   VAR_5->r = *FUNC_5(VAR_3, VAR_4, VAR_5->pad);
  else
   VAR_5->r = *FUNC_6(VAR_3, VAR_4, VAR_5->pad);
  return 0;
 }

 FUNC_0(&VAR_7->lock);
 switch (VAR_6) {
 case 130:
  VAR_5->r = VAR_7->crop_sink;
  break;
 case 131:
  VAR_5->r = VAR_7->compose;
  break;
 case 129:
  VAR_5->r = VAR_7->crop_source;
  break;
 default:
  break;
 }
 if (FUNC_3(VAR_5->target)) {
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
 }
 FUNC_1(&VAR_7->lock);

 return 0;
}
