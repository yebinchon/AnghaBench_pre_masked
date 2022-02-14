
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_rect {void* height; void* width; void* top; void* left; } ;
struct TYPE_8__ {void* height; void* width; void* top; void* left; } ;
struct TYPE_7__ {void* h; void* w; } ;
struct TYPE_6__ {TYPE_1__* fmt; } ;
struct s5p_jpeg_ctx {int crop_altered; TYPE_4__ crop_rect; TYPE_3__ out_q; TYPE_2__ cap_q; } ;
struct TYPE_5__ {int fourcc; } ;


 int VAR_0 ;



 int FUNC_0 (struct v4l2_rect*,struct v4l2_rect*) ;
 void* FUNC_1 (void*,int) ;

__attribute__((used)) static int FUNC_2(struct s5p_jpeg_ctx *VAR_1,
       struct v4l2_rect *VAR_2)
{
 struct v4l2_rect VAR_3;
 int VAR_4, VAR_5;

 switch (VAR_1->cap_q.fmt->fourcc) {
 case 130:
 case 129:
  VAR_4 = 1;
  VAR_5 = 2;
  break;
 case 128:
  VAR_4 = 2;
  VAR_5 = 2;
  break;
 default:
  VAR_4 = 1;
  VAR_5 = 1;
  break;
 }

 VAR_3.top = 0;
 VAR_3.left = 0;
 VAR_3.width = VAR_1->out_q.w;
 VAR_3.height = VAR_1->out_q.h;

 VAR_2->width = FUNC_1(VAR_2->width, VAR_4);
 VAR_2->height = FUNC_1(VAR_2->height, VAR_5);
 VAR_2->left = FUNC_1(VAR_2->left, 2);
 VAR_2->top = FUNC_1(VAR_2->top, 2);

 if (!FUNC_0(VAR_2, &VAR_3))
  return -VAR_0;

 VAR_1->crop_rect.left = VAR_2->left;
 VAR_1->crop_rect.top = VAR_2->top;
 VAR_1->crop_rect.width = VAR_2->width;
 VAR_1->crop_rect.height = VAR_2->height;

 VAR_1->crop_altered = 1;

 return 0;
}
