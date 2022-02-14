
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ top; scalar_t__ left; } ;
struct vivid_dev {TYPE_1__ fmt_cap_rect; int has_compose_cap; TYPE_1__ compose_cap; TYPE_1__ src_rect; int has_crop_cap; TYPE_1__ crop_cap; } ;
struct v4l2_selection {scalar_t__ type; int target; TYPE_1__ r; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;






 struct vivid_dev* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct vivid_dev*) ;
 TYPE_1__ VAR_4 ;

int FUNC_2(struct file *VAR_5, void *VAR_6,
         struct v4l2_selection *VAR_7)
{
 struct vivid_dev *VAR_8 = FUNC_0(VAR_5);

 if (!VAR_8->has_crop_cap && !VAR_8->has_compose_cap)
  return -VAR_2;
 if (VAR_7->type != VAR_3)
  return -VAR_0;
 if (FUNC_1(VAR_8))
  return -VAR_1;

 VAR_7->r.left = VAR_7->r.top = 0;
 switch (VAR_7->target) {
 case 130:
  if (!VAR_8->has_crop_cap)
   return -VAR_0;
  VAR_7->r = VAR_8->crop_cap;
  break;
 case 128:
 case 129:
  if (!VAR_8->has_crop_cap)
   return -VAR_0;
  VAR_7->r = VAR_8->src_rect;
  break;
 case 132:
  if (!VAR_8->has_compose_cap)
   return -VAR_0;
  VAR_7->r = VAR_4;
  break;
 case 133:
  if (!VAR_8->has_compose_cap)
   return -VAR_0;
  VAR_7->r = VAR_8->compose_cap;
  break;
 case 131:
  if (!VAR_8->has_compose_cap)
   return -VAR_0;
  VAR_7->r = VAR_8->fmt_cap_rect;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
