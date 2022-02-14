
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int top; int left; } ;
struct v4l2_selection {int target; TYPE_1__ r; int type; } ;
struct TYPE_4__ {int height; int width; int top; int left; } ;
struct gsc_frame {TYPE_2__ crop; int f_height; int f_width; } ;
struct gsc_ctx {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gsc_frame*) ;
 int FUNC_1 (struct gsc_frame*) ;
 int VAR_1 ;
 int VAR_2 ;






 struct gsc_frame* FUNC_2 (struct gsc_ctx*,int ) ;
 struct gsc_ctx* FUNC_3 (void*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
   struct v4l2_selection *VAR_5)
{
 struct gsc_frame *VAR_6;
 struct gsc_ctx *VAR_7 = FUNC_3(VAR_4);

 if ((VAR_5->type != VAR_1) &&
     (VAR_5->type != VAR_2))
  return -VAR_0;

 VAR_6 = FUNC_2(VAR_7, VAR_5->type);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 switch (VAR_5->target) {
 case 131:
 case 132:
 case 129:
 case 128:
  VAR_5->r.left = 0;
  VAR_5->r.top = 0;
  VAR_5->r.width = VAR_6->f_width;
  VAR_5->r.height = VAR_6->f_height;
  return 0;

 case 133:
 case 130:
  VAR_5->r.left = VAR_6->crop.left;
  VAR_5->r.top = VAR_6->crop.top;
  VAR_5->r.width = VAR_6->crop.width;
  VAR_5->r.height = VAR_6->crop.height;
  return 0;
 }

 return -VAR_0;
}
