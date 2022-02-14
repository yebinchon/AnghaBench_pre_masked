
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_pix_format_mplane {scalar_t__ field; int height; int width; int pixelformat; } ;
struct TYPE_4__ {struct v4l2_pix_format_mplane pix_mp; } ;
struct v4l2_format {scalar_t__ type; TYPE_2__ fmt; } ;
struct fimc_variant {int min_inp_pixsize; int min_out_pixsize; int min_vsize_align; TYPE_1__* pix_limit; } ;
struct fimc_fmt {int color; } ;
struct fimc_dev {struct fimc_variant* variant; } ;
struct fimc_ctx {struct fimc_dev* fimc_dev; } ;
struct TYPE_3__ {int scaler_dis_w; int out_rot_dis_w; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct fimc_fmt*,int ,int ,struct v4l2_pix_format_mplane*) ;
 struct fimc_fmt* FUNC_4 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (struct fimc_fmt*) ;
 int FUNC_8 (int *,int,int,int,int *,int,int,int,int ) ;

__attribute__((used)) static int FUNC_9(struct fimc_ctx *VAR_4, struct v4l2_format *VAR_5)
{
 struct fimc_dev *VAR_6 = VAR_4->fimc_dev;
 const struct fimc_variant *VAR_7 = VAR_6->variant;
 struct v4l2_pix_format_mplane *VAR_8 = &VAR_5->fmt.pix_mp;
 struct fimc_fmt *VAR_9;
 u32 VAR_10, VAR_11, VAR_12;

 if (!FUNC_0(VAR_5->type))
  return -VAR_0;

 VAR_9 = FUNC_4(&VAR_8->pixelformat, ((void*)0),
          FUNC_6(VAR_5->type), 0);
 if (FUNC_1(VAR_9 == ((void*)0), "Pixel format lookup failed"))
  return -VAR_0;

 if (VAR_8->field == VAR_2)
  VAR_8->field = VAR_3;
 else if (VAR_8->field != VAR_3)
  return -VAR_0;

 if (VAR_5->type == VAR_1) {
  VAR_10 = VAR_7->pix_limit->scaler_dis_w;
  VAR_11 = FUNC_2(VAR_7->min_inp_pixsize) - 1;
 } else {
  VAR_10 = VAR_7->pix_limit->out_rot_dis_w;
  VAR_11 = FUNC_2(VAR_7->min_out_pixsize) - 1;
 }

 if (FUNC_7(VAR_9)) {
  VAR_11 = 6;
  VAR_12 = 5;
 } else {
  if (VAR_7->min_vsize_align == 1)
   VAR_12 = FUNC_5(VAR_9->color) ? 0 : 1;
  else
   VAR_12 = FUNC_2(VAR_7->min_vsize_align) - 1;
 }

 FUNC_8(&VAR_8->width, 16, VAR_10, VAR_11,
  &VAR_8->height, 8, VAR_7->pix_limit->scaler_dis_w, VAR_12, 0);

 FUNC_3(VAR_9, VAR_8->width, VAR_8->height, &VAR_5->fmt.pix_mp);
 return 0;
}
