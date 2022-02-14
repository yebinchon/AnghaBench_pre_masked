
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct v4l2_ctrl {int dummy; } ;
struct TYPE_4__ {struct v4l2_ctrl* exposure; } ;
struct ov965x {int mclk_frequency; unsigned long exp_row_interval; int sd; int lock; TYPE_3__* frame_size; TYPE_2__* fiv; TYPE_1__ ctrls; } ;
struct TYPE_6__ {unsigned long max_exp_lines; } ;
struct TYPE_5__ {int clkrc_div; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct v4l2_ctrl*,int,int,int,int) ;
 int FUNC_4 (int,int ,int *,char*,int,unsigned long,unsigned long,int) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static void FUNC_6(struct ov965x *VAR_2)
{
 struct v4l2_ctrl *VAR_3 = VAR_2->ctrls.exposure;
 unsigned long VAR_4, VAR_5;
 int VAR_6, VAR_7, VAR_8;
 u8 VAR_9;

 FUNC_1(&VAR_2->lock);
 if (FUNC_0(!VAR_3 || !VAR_2->frame_size)) {
  FUNC_2(&VAR_2->lock);
  return;
 }
 VAR_9 = VAR_0 + VAR_2->fiv->clkrc_div;

 VAR_4 = VAR_2->mclk_frequency * ((VAR_9 >> 7) + 1) /
    ((2 * ((VAR_9 & 0x3f) + 1)));

 VAR_5 = (2 * 1520 * 1000000UL) / VAR_4;
 VAR_7 = VAR_2->frame_size->max_exp_lines * VAR_5;
 VAR_2->exp_row_interval = VAR_5;
 FUNC_2(&VAR_2->lock);

 FUNC_4(1, VAR_1, &VAR_2->sd, "clkrc: %#x, fi: %lu, tr: %lu, %d\n",
   VAR_9, VAR_4, VAR_5, VAR_7);


 VAR_6 = (VAR_5 + 100) / 100;
 VAR_7 = (VAR_7 - 100) / 100;
 VAR_8 = VAR_6 + (VAR_7 - VAR_6) / 2;

 if (FUNC_3(VAR_3, VAR_6, VAR_7, 1, VAR_8))
  FUNC_5(&VAR_2->sd, "Exposure ctrl range update failed\n");
}
