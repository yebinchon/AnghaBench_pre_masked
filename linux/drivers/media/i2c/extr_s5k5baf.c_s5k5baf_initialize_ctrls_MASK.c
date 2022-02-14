
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct s5k5baf_ctrls {void* auto_exp; void* gain; void* exposure; void* hflip; void* vflip; void* awb; void* gain_blue; void* gain_red; struct v4l2_ctrl_handler handler; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct s5k5baf {TYPE_1__ sd; struct s5k5baf_ctrls ctrls; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 struct v4l2_ctrl_ops VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (int,void**) ;
 int FUNC_3 (struct v4l2_ctrl_handler*) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int,int) ;
 void* FUNC_6 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int ,int,int ) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*,char*,int) ;

__attribute__((used)) static int FUNC_9(struct s5k5baf *VAR_25)
{
 const struct v4l2_ctrl_ops *VAR_26 = &VAR_23;
 struct s5k5baf_ctrls *VAR_27 = &VAR_25->ctrls;
 struct v4l2_ctrl_handler *VAR_28 = &VAR_27->handler;
 int VAR_29;

 VAR_29 = FUNC_4(VAR_28, 16);
 if (VAR_29 < 0) {
  FUNC_8(&VAR_25->sd, "cannot init ctrl handler (%d)\n", VAR_29);
  return VAR_29;
 }


 VAR_27->awb = FUNC_5(VAR_28, VAR_26, VAR_2,
           0, 1, 1, 1);
 VAR_27->gain_red = FUNC_5(VAR_28, VAR_26, VAR_13,
         0, 255, 1, VAR_1);
 VAR_27->gain_blue = FUNC_5(VAR_28, VAR_26, VAR_3,
          0, 255, 1, VAR_0);
 FUNC_1(3, &VAR_27->awb, 0, 0);

 VAR_27->hflip = FUNC_5(VAR_28, VAR_26, VAR_10, 0, 1, 1, 0);
 VAR_27->vflip = FUNC_5(VAR_28, VAR_26, VAR_17, 0, 1, 1, 0);
 FUNC_2(2, &VAR_27->hflip);

 VAR_27->auto_exp = FUNC_6(VAR_28, VAR_26,
    VAR_8,
    VAR_22, 0, VAR_21);

 VAR_27->exposure = FUNC_5(VAR_28, VAR_26, VAR_7,
         0, 6000000U, 1, 100000U);

 VAR_27->gain = FUNC_5(VAR_28, VAR_26, VAR_9,
     0, 256, 1, 256);
 FUNC_1(3, &VAR_27->auto_exp, 0, 0);

 FUNC_6(VAR_28, VAR_26, VAR_11,
          VAR_12, 0,
          VAR_12);

 FUNC_6(VAR_28, VAR_26, VAR_5,
          VAR_20, ~0x6f, VAR_19);

 FUNC_5(VAR_28, VAR_26, VAR_18,
     0, 256, 1, 0);

 FUNC_5(VAR_28, VAR_26, VAR_14, -127, 127, 1, 0);
 FUNC_5(VAR_28, VAR_26, VAR_4, -127, 127, 1, 0);
 FUNC_5(VAR_28, VAR_26, VAR_6, -127, 127, 1, 0);
 FUNC_5(VAR_28, VAR_26, VAR_15, -127, 127, 1, 0);

 FUNC_7(VAR_28, VAR_26, VAR_16,
         FUNC_0(VAR_24) - 1,
         0, 0, VAR_24);

 if (VAR_28->error) {
  FUNC_8(&VAR_25->sd, "error creating controls (%d)\n",
    VAR_28->error);
  VAR_29 = VAR_28->error;
  FUNC_3(VAR_28);
  return VAR_29;
 }

 VAR_25->sd.ctrl_handler = VAR_28;
 return 0;
}
