
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct gsc_variant {int dummy; } ;
struct gsc_scaler {int main_hratio; int main_vratio; int pre_vratio; int pre_hratio; int pre_shfactor; } ;
struct TYPE_10__ {int width; int height; } ;
struct gsc_frame {TYPE_5__ crop; } ;
struct TYPE_9__ {TYPE_3__* rotate; } ;
struct gsc_ctx {TYPE_4__ gsc_ctrls; int out_path; TYPE_2__* gsc_dev; struct gsc_frame d_frame; struct gsc_frame s_frame; struct gsc_scaler scaler; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_7__ {TYPE_1__* pdev; struct gsc_variant* variant; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,int) ;
 int FUNC_1 (struct gsc_variant*,int,int,int *) ;
 int FUNC_2 (struct gsc_variant*,int,int,int,int,int,int ) ;
 int FUNC_3 (struct gsc_variant*,struct gsc_frame*,int *,int,int,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (char*,int,int,...) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct gsc_ctx *VAR_1)
{
 struct gsc_scaler *VAR_2 = &VAR_1->scaler;
 struct gsc_frame *VAR_3 = &VAR_1->s_frame;
 struct gsc_frame *VAR_4 = &VAR_1->d_frame;
 struct gsc_variant *VAR_5 = VAR_1->gsc_dev->variant;
 struct device *VAR_6 = &VAR_1->gsc_dev->pdev->dev;
 int VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_5, VAR_3->crop.width,
  VAR_3->crop.height, VAR_4->crop.width, VAR_4->crop.height,
  VAR_1->gsc_ctrls.rotate->val, VAR_1->out_path);
 if (VAR_9) {
  FUNC_6("out of scaler range");
  return VAR_9;
 }

 if (VAR_1->gsc_ctrls.rotate->val == 90 ||
     VAR_1->gsc_ctrls.rotate->val == 270) {
  VAR_8 = VAR_4->crop.width;
  VAR_7 = VAR_4->crop.height;
 } else {
  VAR_7 = VAR_4->crop.width;
  VAR_8 = VAR_4->crop.height;
 }

 if (VAR_7 <= 0 || VAR_8 <= 0) {
  FUNC_0(VAR_6, "Invalid target size: %dx%d", VAR_7, VAR_8);
  return -VAR_0;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_3->crop.width,
          VAR_7, &VAR_2->pre_hratio);
 if (VAR_9) {
  FUNC_6("Horizontal scale ratio is out of range");
  return VAR_9;
 }

 VAR_9 = FUNC_1(VAR_5, VAR_3->crop.height,
          VAR_8, &VAR_2->pre_vratio);
 if (VAR_9) {
  FUNC_6("Vertical scale ratio is out of range");
  return VAR_9;
 }

 FUNC_3(VAR_5, VAR_3, &VAR_2->pre_hratio,
     VAR_7, VAR_8, &VAR_2->pre_vratio);

 FUNC_4(VAR_2->pre_hratio, VAR_2->pre_vratio,
       &VAR_2->pre_shfactor);

 VAR_2->main_hratio = (VAR_3->crop.width << 16) / VAR_7;
 VAR_2->main_vratio = (VAR_3->crop.height << 16) / VAR_8;

 FUNC_5("scaler input/output size : sx = %d, sy = %d, tx = %d, ty = %d",
   VAR_3->crop.width, VAR_3->crop.height, VAR_7, VAR_8);
 FUNC_5("scaler ratio info : pre_shfactor : %d, pre_h : %d",
   VAR_2->pre_shfactor, VAR_2->pre_hratio);
 FUNC_5("pre_v :%d, main_h : %d, main_v : %d",
   VAR_2->pre_vratio, VAR_2->main_hratio, VAR_2->main_vratio);

 return 0;
}
