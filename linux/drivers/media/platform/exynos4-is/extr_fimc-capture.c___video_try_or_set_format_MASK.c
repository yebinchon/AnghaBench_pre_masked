
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_pix_format_mplane {unsigned int width; unsigned int height; int plane_fmt; int pixelformat; } ;
struct v4l2_mbus_framefmt {unsigned int width; unsigned int height; int code; } ;
struct TYPE_3__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct exynos_video_entity {int pipe; } ;
struct fimc_vid_cap {struct v4l2_mbus_framefmt ci_fmt; int user_subdev_api; struct fimc_ctx* ctx; struct exynos_video_entity ve; } ;
struct fimc_fmt {int flags; int memplanes; int mbus_code; } ;
struct fimc_dev {struct fimc_vid_cap vid_cap; } ;
struct TYPE_4__ {unsigned int f_width; unsigned int f_height; } ;
struct fimc_ctx {TYPE_2__ s_frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct v4l2_subdev* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct fimc_fmt*,unsigned int,unsigned int,struct v4l2_pix_format_mplane*) ;
 struct fimc_fmt* FUNC_2 (struct fimc_ctx*,unsigned int*,unsigned int*,int *,int *,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct exynos_video_entity*) ;
 int FUNC_6 (struct exynos_video_entity*) ;
 int FUNC_7 (struct fimc_ctx*,struct v4l2_mbus_framefmt*,struct fimc_fmt**,int) ;

__attribute__((used)) static int FUNC_8(struct fimc_dev *VAR_6,
         struct v4l2_format *VAR_7, bool VAR_8,
         struct fimc_fmt **VAR_9,
         struct fimc_fmt **VAR_10)
{
 struct v4l2_pix_format_mplane *VAR_11 = &VAR_7->fmt.pix_mp;
 struct fimc_vid_cap *VAR_12 = &VAR_6->vid_cap;
 struct exynos_video_entity *VAR_13 = &VAR_12->ve;
 struct fimc_ctx *VAR_14 = VAR_12->ctx;
 unsigned int VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = 0;


 if (FUNC_4(VAR_11->pixelformat)) {
  FUNC_2(VAR_14, &VAR_11->width, &VAR_11->height,
     ((void*)0), &VAR_11->pixelformat,
     VAR_2);
  if (VAR_8) {
   VAR_15 = VAR_11->width;
   VAR_16 = VAR_11->height;
  } else {
   VAR_14->s_frame.f_width = VAR_11->width;
   VAR_14->s_frame.f_height = VAR_11->height;
  }
 }


 *VAR_10 = FUNC_2(VAR_14, &VAR_11->width, &VAR_11->height,
       ((void*)0), &VAR_11->pixelformat,
       VAR_3);
 if (*VAR_10 == ((void*)0))
  return -VAR_0;


 if (VAR_8 && FUNC_4(VAR_11->pixelformat)) {
  VAR_11->width = VAR_15;
  VAR_11->height = VAR_16;
 }


 if (!VAR_12->user_subdev_api) {
  struct v4l2_mbus_framefmt VAR_18;
  struct v4l2_mbus_framefmt *VAR_19;

  VAR_19 = VAR_8 ? &VAR_18 : &VAR_6->vid_cap.ci_fmt;

  VAR_19->code = (*VAR_10)->mbus_code;
  VAR_19->width = VAR_11->width;
  VAR_19->height = VAR_11->height;

  FUNC_5(VAR_13);
  VAR_17 = FUNC_7(VAR_14, VAR_19, VAR_9, VAR_8);
  FUNC_6(VAR_13);

  if (VAR_17 < 0)
   return VAR_17;

  VAR_11->width = VAR_19->width;
  VAR_11->height = VAR_19->height;
 }

 FUNC_1(*VAR_10, VAR_11->width, VAR_11->height, VAR_11);

 if ((*VAR_10)->flags & VAR_4) {
  struct v4l2_subdev *VAR_20;

  FUNC_5(VAR_13);

  VAR_20 = FUNC_0(VAR_13->pipe, VAR_5);
  if (VAR_20)
   FUNC_3(VAR_20, VAR_11->plane_fmt,
         (*VAR_10)->memplanes, VAR_8);
  else
   VAR_17 = -VAR_1;

  FUNC_6(VAR_13);
 }

 return VAR_17;
}
