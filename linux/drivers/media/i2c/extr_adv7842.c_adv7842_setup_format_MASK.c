
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_4__ {int op_format_mode_sel; } ;
struct adv7842_state {TYPE_1__* format; TYPE_2__ pdata; struct v4l2_subdev sd; } ;
struct TYPE_3__ {int op_format_sel; scalar_t__ swap_cb_cr; scalar_t__ rgb_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct adv7842_state*) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int FUNC_2 (struct v4l2_subdev*,int,int,int ) ;
 int FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_4(struct adv7842_state *VAR_2)
{
 struct v4l2_subdev *VAR_3 = &VAR_2->sd;

 FUNC_2(VAR_3, 0x02, 0x02,
   VAR_2->format->rgb_out ? VAR_1 : 0);
 FUNC_1(VAR_3, 0x03, VAR_2->format->op_format_sel |
   VAR_2->pdata.op_format_mode_sel);
 FUNC_2(VAR_3, 0x04, 0xe0, FUNC_0(VAR_2));
 FUNC_2(VAR_3, 0x05, 0x01,
   VAR_2->format->swap_cb_cr ? VAR_0 : 0);
 FUNC_3(VAR_3);
}
