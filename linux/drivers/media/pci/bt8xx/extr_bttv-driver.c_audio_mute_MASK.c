
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_ctrl {int dummy; } ;
struct bttv {TYPE_2__* sd_tda7432; TYPE_1__* sd_tvaudio; TYPE_3__* sd_msp34xx; int audio_input; } ;
struct TYPE_6__ {int ctrl_handler; } ;
struct TYPE_5__ {int ctrl_handler; } ;
struct TYPE_4__ {int ctrl_handler; } ;


 int VAR_0 ;
 int FUNC_0 (struct bttv*,int ,int) ;
 struct v4l2_ctrl* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct v4l2_ctrl*,int) ;

__attribute__((used)) static int
FUNC_3(struct bttv *VAR_1, int VAR_2)
{
 struct v4l2_ctrl *VAR_3;

 FUNC_0(VAR_1, VAR_1->audio_input, VAR_2);

 if (VAR_1->sd_msp34xx) {
  VAR_3 = FUNC_1(VAR_1->sd_msp34xx->ctrl_handler, VAR_0);
  if (VAR_3)
   FUNC_2(VAR_3, VAR_2);
 }
 if (VAR_1->sd_tvaudio) {
  VAR_3 = FUNC_1(VAR_1->sd_tvaudio->ctrl_handler, VAR_0);
  if (VAR_3)
   FUNC_2(VAR_3, VAR_2);
 }
 if (VAR_1->sd_tda7432) {
  VAR_3 = FUNC_1(VAR_1->sd_tda7432->ctrl_handler, VAR_0);
  if (VAR_3)
   FUNC_2(VAR_3, VAR_2);
 }
 return 0;
}
