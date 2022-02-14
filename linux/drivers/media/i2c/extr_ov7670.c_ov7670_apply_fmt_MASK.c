
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct ov7670_win_size {unsigned char com7_bit; TYPE_2__* regs; int vstop; int vstart; int hstop; int hstart; } ;
struct ov7670_info {int mbus_config; unsigned char clkrc; TYPE_1__* fmt; scalar_t__ pclk_hb_disable; struct ov7670_win_size* wsize; } ;
struct TYPE_4__ {unsigned char value; } ;
struct TYPE_3__ {TYPE_2__* regs; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int ,int ,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,unsigned char) ;
 int FUNC_2 (struct v4l2_subdev*,TYPE_2__*) ;
 struct ov7670_info* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_8)
{
 struct ov7670_info *VAR_9 = FUNC_3(VAR_8);
 struct ov7670_win_size *VAR_10 = VAR_9->wsize;
 unsigned char VAR_11, VAR_12 = 0;
 int VAR_13;







 VAR_11 = VAR_9->fmt->regs[0].value;
 VAR_11 |= VAR_10->com7_bit;
 VAR_13 = FUNC_1(VAR_8, VAR_5, VAR_11);
 if (VAR_13)
  return VAR_13;




 if (VAR_9->mbus_config & VAR_7)
  VAR_12 |= VAR_2;
 if (VAR_9->mbus_config & VAR_6)
  VAR_12 |= VAR_0;
 if (VAR_9->pclk_hb_disable)
  VAR_12 |= VAR_1;
 VAR_13 = FUNC_1(VAR_8, VAR_4, VAR_12);
 if (VAR_13)
  return VAR_13;




 VAR_13 = FUNC_2(VAR_8, VAR_9->fmt->regs + 1);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_8, VAR_10->hstart, VAR_10->hstop, VAR_10->vstart,
       VAR_10->vstop);
 if (VAR_13)
  return VAR_13;

 if (VAR_10->regs) {
  VAR_13 = FUNC_2(VAR_8, VAR_10->regs);
  if (VAR_13)
   return VAR_13;
 }
 VAR_13 = FUNC_1(VAR_8, VAR_3, VAR_9->clkrc);
 if (VAR_13)
  return VAR_13;

 return 0;
}
