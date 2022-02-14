
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int height; int width; int top; int left; } ;
struct gsc_frame {TYPE_3__ crop; int f_height; int f_width; } ;
struct gsc_dev {scalar_t__ regs; } ;
struct TYPE_5__ {TYPE_1__* rotate; } ;
struct gsc_ctx {scalar_t__ out_path; TYPE_2__ gsc_ctrls; struct gsc_frame d_frame; struct gsc_dev* gsc_dev; } ;
struct TYPE_4__ {int val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

void FUNC_7(struct gsc_ctx *VAR_4)
{
 struct gsc_dev *VAR_5 = VAR_4->gsc_dev;
 struct gsc_frame *VAR_6 = &VAR_4->d_frame;
 u32 VAR_7;


 if (VAR_4->out_path == VAR_0) {
  VAR_7 = FUNC_1(VAR_6->crop.left);
  VAR_7 |= FUNC_2(VAR_6->crop.top);
  FUNC_6(VAR_7, VAR_5->regs + VAR_1);

  VAR_7 = FUNC_3(VAR_6->f_width);
  VAR_7 |= FUNC_0(VAR_6->f_height);
  FUNC_6(VAR_7, VAR_5->regs + VAR_2);
 }


 if (VAR_4->gsc_ctrls.rotate->val == 90 ||
     VAR_4->gsc_ctrls.rotate->val == 270) {
  VAR_7 = FUNC_5(VAR_6->crop.height);
  VAR_7 |= FUNC_4(VAR_6->crop.width);
 } else {
  VAR_7 = FUNC_5(VAR_6->crop.width);
  VAR_7 |= FUNC_4(VAR_6->crop.height);
 }
 FUNC_6(VAR_7, VAR_5->regs + VAR_3);
}
