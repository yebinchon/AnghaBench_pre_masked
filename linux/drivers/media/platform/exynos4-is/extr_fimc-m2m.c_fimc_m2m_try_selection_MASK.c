
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ top; scalar_t__ left; scalar_t__ width; scalar_t__ height; } ;
struct v4l2_selection {scalar_t__ type; scalar_t__ target; TYPE_4__ r; } ;
struct fimc_frame {scalar_t__ o_width; scalar_t__ o_height; int f_height; int f_width; TYPE_2__* fmt; } ;
struct TYPE_5__ {int vfd; } ;
struct fimc_dev {TYPE_3__* variant; TYPE_1__ m2m; } ;
struct fimc_ctx {struct fimc_frame s_frame; struct fimc_frame d_frame; struct fimc_dev* fimc_dev; } ;
struct TYPE_7__ {int min_inp_pixsize; int min_out_pixsize; int min_vsize_align; int hor_offs_align; } ;
struct TYPE_6__ {int memplanes; scalar_t__* depth; int color; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 void* FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (scalar_t__*,int,scalar_t__,int,scalar_t__*,int,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_7(struct fimc_ctx *VAR_5,
      struct v4l2_selection *VAR_6)
{
 struct fimc_dev *VAR_7 = VAR_5->fimc_dev;
 struct fimc_frame *VAR_8;
 u32 VAR_9, VAR_10, VAR_11 = 0;
 int VAR_12;

 if (VAR_6->r.top < 0 || VAR_6->r.left < 0) {
  FUNC_5(&VAR_7->m2m.vfd,
   "doesn't support negative values for top & left\n");
  return -VAR_0;
 }
 if (VAR_6->type == VAR_1) {
  VAR_8 = &VAR_5->d_frame;
  if (VAR_6->target != VAR_3)
   return -VAR_0;
 } else if (VAR_6->type == VAR_2) {
  VAR_8 = &VAR_5->s_frame;
  if (VAR_6->target != VAR_4)
   return -VAR_0;
 } else {
  return -VAR_0;
 }

 VAR_9 = (VAR_8 == &VAR_5->s_frame) ?
  VAR_7->variant->min_inp_pixsize : VAR_7->variant->min_out_pixsize;


 if (VAR_7->variant->min_vsize_align == 1)
  VAR_10 = FUNC_3(VAR_8->fmt->color) ? 0 : 1;
 else
  VAR_10 = FUNC_2(VAR_7->variant->min_vsize_align) - 1;

 for (VAR_12 = 0; VAR_12 < VAR_8->fmt->memplanes; VAR_12++)
  VAR_11 += VAR_8->fmt->depth[VAR_12];

 FUNC_6(&VAR_6->r.width, VAR_9, VAR_8->o_width,
         FUNC_2(VAR_9) - 1,
         &VAR_6->r.height, VAR_9, VAR_8->o_height,
         VAR_10, 64/(FUNC_0(VAR_11, 8)));


 if (VAR_6->r.left + VAR_6->r.width > VAR_8->o_width)
  VAR_6->r.left = VAR_8->o_width - VAR_6->r.width;
 if (VAR_6->r.top + VAR_6->r.height > VAR_8->o_height)
  VAR_6->r.top = VAR_8->o_height - VAR_6->r.height;

 VAR_6->r.left = FUNC_4(VAR_6->r.left, VAR_9);
 VAR_6->r.top = FUNC_4(VAR_6->r.top, VAR_7->variant->hor_offs_align);

 FUNC_1("l:%d, t:%d, w:%d, h:%d, f_w: %d, f_h: %d",
     VAR_6->r.left, VAR_6->r.top, VAR_6->r.width, VAR_6->r.height,
     VAR_8->f_width, VAR_8->f_height);

 return 0;
}
