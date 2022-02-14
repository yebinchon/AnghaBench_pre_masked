
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct vpe_q_data {int height; int width; TYPE_1__ c_rect; } ;
struct vpe_ctx {int dummy; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 struct vpe_ctx* FUNC_0 (struct file*) ;
 struct vpe_q_data* FUNC_1 (struct vpe_ctx*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
  struct v4l2_selection *VAR_5)
{
 struct vpe_ctx *VAR_6 = FUNC_0(VAR_3);
 struct vpe_q_data *VAR_7;
 bool VAR_8 = 0;

 if ((VAR_5->type != VAR_1) &&
     (VAR_5->type != VAR_2))
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_5->type);
 if (!VAR_7)
  return -VAR_0;

 switch (VAR_5->target) {
 case 131:
 case 132:
  if (VAR_5->type == VAR_2)
   return -VAR_0;
  break;
 case 129:
 case 128:
  if (VAR_5->type == VAR_1)
   return -VAR_0;
  break;
 case 133:
  if (VAR_5->type == VAR_2)
   return -VAR_0;
  VAR_8 = 1;
  break;
 case 130:
  if (VAR_5->type == VAR_1)
   return -VAR_0;
  VAR_8 = 1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8) {




  VAR_5->r = VAR_7->c_rect;
 } else {




  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_7->width;
  VAR_5->r.height = VAR_7->height;
 }

 return 0;
}
