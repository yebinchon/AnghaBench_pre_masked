
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int top; int left; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct g2d_frame {int height; int width; int c_height; int c_width; int o_width; int o_height; } ;
struct g2d_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct g2d_frame*) ;
 int FUNC_1 (struct g2d_frame*) ;
 int VAR_1 ;
 int VAR_2 ;






 struct g2d_frame* FUNC_2 (struct g2d_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
         struct v4l2_selection *VAR_5)
{
 struct g2d_ctx *VAR_6 = VAR_4;
 struct g2d_frame *VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_5->type);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 switch (VAR_5->target) {
 case 130:
 case 128:
 case 129:
  if (VAR_5->type != VAR_2)
   return -VAR_0;
  break;
 case 133:
 case 131:
 case 132:
  if (VAR_5->type != VAR_1)
   return -VAR_0;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_5->target) {
 case 130:
 case 133:
  VAR_5->r.left = VAR_7->o_height;
  VAR_5->r.top = VAR_7->o_width;
  VAR_5->r.width = VAR_7->c_width;
  VAR_5->r.height = VAR_7->c_height;
  break;
 case 128:
 case 129:
 case 131:
 case 132:
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_7->width;
  VAR_5->r.height = VAR_7->height;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
