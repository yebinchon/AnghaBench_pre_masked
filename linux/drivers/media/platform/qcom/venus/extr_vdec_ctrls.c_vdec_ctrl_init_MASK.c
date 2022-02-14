
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int error; } ;
struct venus_inst {TYPE_1__ ctrl_handler; } ;
struct v4l2_ctrl {int flags; } ;


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
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 struct v4l2_ctrl* FUNC_2 (TYPE_1__*,int *,int ,int,int,int,int) ;
 struct v4l2_ctrl* FUNC_3 (TYPE_1__*,int *,int ,int,int,int) ;
 int VAR_23 ;

int FUNC_4(struct venus_inst *VAR_24)
{
 struct v4l2_ctrl *VAR_25;
 int VAR_26;

 VAR_26 = FUNC_1(&VAR_24->ctrl_handler, 7);
 if (VAR_26)
  return VAR_26;

 VAR_25 = FUNC_3(&VAR_24->ctrl_handler, &VAR_23,
  VAR_5,
  VAR_18,
  ~((1 << VAR_20) |
    (1 << VAR_19)),
  VAR_20);
 if (VAR_25)
  VAR_25->flags |= VAR_7;

 VAR_25 = FUNC_3(&VAR_24->ctrl_handler, &VAR_23,
          VAR_4,
          VAR_17,
          0, VAR_16);
 if (VAR_25)
  VAR_25->flags |= VAR_7;

 VAR_25 = FUNC_3(&VAR_24->ctrl_handler, &VAR_23,
  VAR_3,
  VAR_14,
  ~((1 << VAR_10) |
    (1 << VAR_11) |
    (1 << VAR_13) |
    (1 << VAR_12) |
    (1 << VAR_15) |
    (1 << VAR_14)),
  VAR_10);
 if (VAR_25)
  VAR_25->flags |= VAR_7;

 VAR_25 = FUNC_3(&VAR_24->ctrl_handler, &VAR_23,
          VAR_2,
          VAR_9,
          0, VAR_8);
 if (VAR_25)
  VAR_25->flags |= VAR_7;

 VAR_25 = FUNC_3(&VAR_24->ctrl_handler, &VAR_23,
          VAR_6,
          VAR_22,
          0, VAR_21);
 if (VAR_25)
  VAR_25->flags |= VAR_7;

 FUNC_2(&VAR_24->ctrl_handler, &VAR_23,
  VAR_1, 0, 1, 1, 0);

 VAR_25 = FUNC_2(&VAR_24->ctrl_handler, &VAR_23,
  VAR_0, 1, 32, 1, 1);
 if (VAR_25)
  VAR_25->flags |= VAR_7;

 VAR_26 = VAR_24->ctrl_handler.error;
 if (VAR_26) {
  FUNC_0(&VAR_24->ctrl_handler);
  return VAR_26;
 }

 return 0;
}
