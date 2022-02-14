
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_pix_format_mplane {int height; int width; TYPE_2__* plane_fmt; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct fimc_vid_cap {int user_subdev_api; int vbq; struct fimc_ctx* ctx; } ;
struct fimc_frame {struct fimc_fmt* fmt; int * payload; int * bytesperline; } ;
struct fimc_fmt {int memplanes; int color; } ;
struct fimc_dev {struct fimc_vid_cap vid_cap; } ;
struct fimc_ctx {int state; struct fimc_frame s_frame; struct fimc_frame d_frame; } ;
struct TYPE_4__ {int sizeimage; int bytesperline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fimc_dev*,struct v4l2_format*,int,struct fimc_fmt**,struct fimc_fmt**) ;
 int FUNC_1 (struct fimc_ctx*) ;
 int FUNC_2 (struct fimc_ctx*,int ) ;
 int FUNC_3 (struct fimc_frame*,int ,int ) ;
 int FUNC_4 (struct fimc_frame*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fimc_dev *VAR_2,
         struct v4l2_format *VAR_3)
{
 struct fimc_vid_cap *VAR_4 = &VAR_2->vid_cap;
 struct fimc_ctx *VAR_5 = VAR_4->ctx;
 struct v4l2_pix_format_mplane *VAR_6 = &VAR_3->fmt.pix_mp;
 struct fimc_frame *VAR_7 = &VAR_5->d_frame;
 struct fimc_fmt *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 if (FUNC_5(&VAR_2->vid_cap.vbq))
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_2, VAR_3, 0, &VAR_8, &VAR_7->fmt);
 if (VAR_9 < 0)
  return VAR_9;


 FUNC_1(VAR_5);

 for (VAR_10 = 0; VAR_10 < VAR_7->fmt->memplanes; VAR_10++) {
  VAR_7->bytesperline[VAR_10] = VAR_6->plane_fmt[VAR_10].bytesperline;
  VAR_7->payload[VAR_10] = VAR_6->plane_fmt[VAR_10].sizeimage;
 }

 FUNC_3(VAR_7, VAR_6->width, VAR_6->height);

 if (!(VAR_5->state & VAR_1))
  FUNC_4(VAR_7, 0, 0, VAR_6->width, VAR_6->height);

 FUNC_2(VAR_5, VAR_7->fmt->color);


 if (!VAR_4->user_subdev_api) {
  VAR_5->s_frame.fmt = VAR_8;
  FUNC_3(&VAR_5->s_frame, VAR_6->width, VAR_6->height);
  FUNC_4(&VAR_5->s_frame, 0, 0, VAR_6->width, VAR_6->height);
 }

 return VAR_9;
}
