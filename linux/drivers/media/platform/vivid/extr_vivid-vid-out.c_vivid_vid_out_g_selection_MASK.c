
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; scalar_t__ left; } ;
struct vivid_dev {TYPE_1__ sink_rect; int has_compose_out; TYPE_1__ compose_out; int has_crop_out; TYPE_1__ fmt_out_rect; TYPE_1__ crop_out; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;






 struct vivid_dev* FUNC_0 (struct file*) ;
 TYPE_1__ VAR_3 ;

int FUNC_1(struct file *VAR_4, void *VAR_5,
         struct v4l2_selection *VAR_6)
{
 struct vivid_dev *VAR_7 = FUNC_0(VAR_4);

 if (!VAR_7->has_crop_out && !VAR_7->has_compose_out)
  return -VAR_1;
 if (VAR_6->type != VAR_2)
  return -VAR_0;

 VAR_6->r.left = VAR_6->r.top = 0;
 switch (VAR_6->target) {
 case 130:
  if (!VAR_7->has_crop_out)
   return -VAR_0;
  VAR_6->r = VAR_7->crop_out;
  break;
 case 128:
  if (!VAR_7->has_crop_out)
   return -VAR_0;
  VAR_6->r = VAR_7->fmt_out_rect;
  break;
 case 129:
  if (!VAR_7->has_crop_out)
   return -VAR_0;
  VAR_6->r = VAR_3;
  break;
 case 133:
  if (!VAR_7->has_compose_out)
   return -VAR_0;
  VAR_6->r = VAR_7->compose_out;
  break;
 case 131:
 case 132:
  if (!VAR_7->has_compose_out)
   return -VAR_0;
  VAR_6->r = VAR_7->sink_rect;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
