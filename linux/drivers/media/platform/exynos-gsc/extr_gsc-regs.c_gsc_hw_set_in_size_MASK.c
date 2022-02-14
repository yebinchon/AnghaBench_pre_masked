
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int height; int width; int top; int left; } ;
struct gsc_frame {TYPE_1__ crop; int f_height; int f_width; } ;
struct gsc_dev {scalar_t__ regs; } ;
struct gsc_ctx {struct gsc_frame s_frame; struct gsc_dev* gsc_dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

void FUNC_7(struct gsc_ctx *VAR_3)
{
 struct gsc_dev *VAR_4 = VAR_3->gsc_dev;
 struct gsc_frame *VAR_5 = &VAR_3->s_frame;
 u32 VAR_6;


 VAR_6 = FUNC_3(VAR_5->crop.left);
 VAR_6 |= FUNC_4(VAR_5->crop.top);
 FUNC_6(VAR_6, VAR_4->regs + VAR_1);


 VAR_6 = FUNC_5(VAR_5->f_width);
 VAR_6 |= FUNC_2(VAR_5->f_height);
 FUNC_6(VAR_6, VAR_4->regs + VAR_2);


 VAR_6 = FUNC_1(VAR_5->crop.width);
 VAR_6 |= FUNC_0(VAR_5->crop.height);
 FUNC_6(VAR_6, VAR_4->regs + VAR_0);
}
