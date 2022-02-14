
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_rect {int width; int height; } ;
struct TYPE_4__ {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_3__ {int w; int h; } ;
struct s5p_jpeg_ctx {int scale_factor; int crop_altered; TYPE_2__ crop_rect; TYPE_1__ out_q; } ;


 int FUNC_0 (int,int,int) ;
 void* FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct s5p_jpeg_ctx *VAR_0,
       struct v4l2_rect *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_2 = VAR_0->out_q.w / VAR_1->width;
 VAR_3 = VAR_0->out_q.h / VAR_1->height;

 VAR_4 = VAR_2 > VAR_3 ? VAR_2 : VAR_3;
 VAR_4 = FUNC_0(VAR_4, 1, 8);


 for (VAR_6 = 0; VAR_6 <= 3; ++VAR_6) {
  VAR_5 = 1 << VAR_6;
  if (VAR_4 <= VAR_5) {
   VAR_0->scale_factor = VAR_5;
   break;
  }
 }

 VAR_1->width = FUNC_1(VAR_0->out_q.w / VAR_0->scale_factor, 2);
 VAR_1->height = FUNC_1(VAR_0->out_q.h / VAR_0->scale_factor, 2);

 VAR_0->crop_rect.width = VAR_1->width;
 VAR_0->crop_rect.height = VAR_1->height;
 VAR_0->crop_rect.left = 0;
 VAR_0->crop_rect.top = 0;

 VAR_0->crop_altered = 1;

 return 0;
}
