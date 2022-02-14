
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fimc_variant {scalar_t__ has_mainscaler_ext; } ;
struct fimc_scaler {int real_width; int real_height; int pre_hratio; int hfactor; int pre_vratio; int vfactor; int pre_dst_width; int pre_dst_height; int main_hratio; int main_vratio; int scaleup_h; int scaleup_v; int copy_mode; } ;
struct fimc_frame {int width; int height; TYPE_3__* fmt; } ;
struct fimc_ctx {int rotation; struct fimc_frame d_frame; struct fimc_frame s_frame; struct fimc_scaler scaler; TYPE_2__* fimc_dev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {scalar_t__ color; } ;
struct TYPE_5__ {TYPE_1__* pdev; struct fimc_variant* variant; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (int,int,int*,int*) ;

int FUNC_2(struct fimc_ctx *VAR_1)
{
 const struct fimc_variant *VAR_2 = VAR_1->fimc_dev->variant;
 struct device *VAR_3 = &VAR_1->fimc_dev->pdev->dev;
 struct fimc_scaler *VAR_4 = &VAR_1->scaler;
 struct fimc_frame *VAR_5 = &VAR_1->s_frame;
 struct fimc_frame *VAR_6 = &VAR_1->d_frame;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;

 if (VAR_1->rotation == 90 || VAR_1->rotation == 270) {
  VAR_8 = VAR_6->width;
  VAR_7 = VAR_6->height;
 } else {
  VAR_7 = VAR_6->width;
  VAR_8 = VAR_6->height;
 }
 if (VAR_7 <= 0 || VAR_8 <= 0) {
  FUNC_0(VAR_3, "Invalid target size: %dx%d\n", VAR_7, VAR_8);
  return -VAR_0;
 }

 VAR_9 = VAR_5->width;
 VAR_10 = VAR_5->height;
 if (VAR_9 <= 0 || VAR_10 <= 0) {
  FUNC_0(VAR_3, "Invalid source size: %dx%d\n", VAR_9, VAR_10);
  return -VAR_0;
 }
 VAR_4->real_width = VAR_9;
 VAR_4->real_height = VAR_10;

 VAR_11 = FUNC_1(VAR_9, VAR_7, &VAR_4->pre_hratio, &VAR_4->hfactor);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_10, VAR_8, &VAR_4->pre_vratio, &VAR_4->vfactor);
 if (VAR_11)
  return VAR_11;

 VAR_4->pre_dst_width = VAR_9 / VAR_4->pre_hratio;
 VAR_4->pre_dst_height = VAR_10 / VAR_4->pre_vratio;

 if (VAR_2->has_mainscaler_ext) {
  VAR_4->main_hratio = (VAR_9 << 14) / (VAR_7 << VAR_4->hfactor);
  VAR_4->main_vratio = (VAR_10 << 14) / (VAR_8 << VAR_4->vfactor);
 } else {
  VAR_4->main_hratio = (VAR_9 << 8) / (VAR_7 << VAR_4->hfactor);
  VAR_4->main_vratio = (VAR_10 << 8) / (VAR_8 << VAR_4->vfactor);

 }

 VAR_4->scaleup_h = (VAR_7 >= VAR_9) ? 1 : 0;
 VAR_4->scaleup_v = (VAR_8 >= VAR_10) ? 1 : 0;


 if (VAR_5->fmt->color == VAR_6->fmt->color
  && VAR_5->width == VAR_6->width
  && VAR_5->height == VAR_6->height)
  VAR_4->copy_mode = 1;
 else
  VAR_4->copy_mode = 0;

 return 0;
}
