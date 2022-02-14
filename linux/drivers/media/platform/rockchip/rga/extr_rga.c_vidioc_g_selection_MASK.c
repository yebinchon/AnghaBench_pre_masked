
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; scalar_t__ top; scalar_t__ left; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct rga_frame {int height; int width; TYPE_1__ crop; } ;
struct rga_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rga_frame*) ;
 int FUNC_1 (struct rga_frame*) ;
 int VAR_1 ;
 int VAR_2 ;






 struct rga_frame* FUNC_2 (struct rga_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
         struct v4l2_selection *VAR_5)
{
 struct rga_ctx *VAR_6 = VAR_4;
 struct rga_frame *VAR_7;
 bool VAR_8 = 0;

 VAR_7 = FUNC_2(VAR_6, VAR_5->type);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 switch (VAR_5->target) {
 case 131:
 case 132:
  if (VAR_5->type != VAR_1)
   return -VAR_0;
  break;
 case 128:
 case 129:
  if (VAR_5->type != VAR_2)
   return -VAR_0;
  break;
 case 133:
  if (VAR_5->type != VAR_1)
   return -VAR_0;
  VAR_8 = 1;
  break;
 case 130:
  if (VAR_5->type != VAR_2)
   return -VAR_0;
  VAR_8 = 1;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_8) {
  VAR_5->r = VAR_7->crop;
 } else {
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_7->width;
  VAR_5->r.height = VAR_7->height;
 }

 return 0;
}
