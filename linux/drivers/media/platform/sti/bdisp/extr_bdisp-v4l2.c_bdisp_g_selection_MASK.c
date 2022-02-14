
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int top; int left; } ;
struct v4l2_selection {TYPE_1__ r; int target; int type; } ;
struct file {int dummy; } ;
struct bdisp_frame {int height; int width; TYPE_1__ crop; } ;
struct bdisp_ctx {TYPE_2__* bdisp_dev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bdisp_frame*) ;
 int FUNC_1 (struct bdisp_frame*) ;
 struct bdisp_frame* FUNC_2 (struct bdisp_ctx*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 struct bdisp_ctx* FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_1, void *VAR_2,
        struct v4l2_selection *VAR_3)
{
 struct bdisp_frame *VAR_4;
 struct bdisp_ctx *VAR_5 = FUNC_4(VAR_2);

 VAR_4 = FUNC_2(VAR_5, VAR_3->type);
 if (FUNC_0(VAR_4)) {
  FUNC_3(VAR_5->bdisp_dev->dev, "Invalid frame (%p)\n", VAR_4);
  return FUNC_1(VAR_4);
 }

 switch (VAR_3->type) {
 case 135:
  switch (VAR_3->target) {
  case 130:

   VAR_3->r = VAR_4->crop;
   break;
  case 128:
  case 129:

   VAR_3->r.left = 0;
   VAR_3->r.top = 0;
   VAR_3->r.width = VAR_4->width;
   VAR_3->r.height = VAR_4->height;
   break;
  default:
   FUNC_3(VAR_5->bdisp_dev->dev, "Invalid target\n");
   return -VAR_0;
  }
  break;

 case 136:
  switch (VAR_3->target) {
  case 134:
  case 131:

   VAR_3->r = VAR_4->crop;
   break;
  case 132:
  case 133:

   VAR_3->r.left = 0;
   VAR_3->r.top = 0;
   VAR_3->r.width = VAR_4->width;
   VAR_3->r.height = VAR_4->height;
   break;
  default:
   FUNC_3(VAR_5->bdisp_dev->dev, "Invalid target\n");
   return -VAR_0;
  }
  break;

 default:
  FUNC_3(VAR_5->bdisp_dev->dev, "Invalid type\n");
  return -VAR_0;
 }

 return 0;
}
