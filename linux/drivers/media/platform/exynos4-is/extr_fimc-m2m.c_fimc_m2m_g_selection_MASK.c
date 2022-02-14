
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int height; int width; int top; int left; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct fimc_frame {int o_height; int o_width; int height; int width; int offs_v; int offs_h; } ;
struct fimc_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct fimc_frame*) ;
 int FUNC_1 (struct fimc_frame*) ;
 int VAR_1 ;
 int VAR_2 ;






 struct fimc_frame* FUNC_2 (struct fimc_ctx*,int ) ;
 struct fimc_ctx* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
    struct v4l2_selection *VAR_5)
{
 struct fimc_ctx *VAR_6 = FUNC_3(VAR_4);
 struct fimc_frame *VAR_7;

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
  VAR_5->r.left = VAR_7->offs_h;
  VAR_5->r.top = VAR_7->offs_v;
  VAR_5->r.width = VAR_7->width;
  VAR_5->r.height = VAR_7->height;
  break;
 case 128:
 case 129:
 case 131:
 case 132:
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_7->o_width;
  VAR_5->r.height = VAR_7->o_height;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
