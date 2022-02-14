
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl_handler {int error; } ;
struct sd {scalar_t__ sensor; void* awb; int freq; void* red_balance; void* blue_balance; void* gain; } ;
struct TYPE_2__ {struct v4l2_ctrl_handler* ctrl_handler; } ;
struct gspca_dev {TYPE_1__ vdev; struct v4l2_ctrl_handler ctrl_handler; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (char*) ;
 int VAR_22 ;
 int FUNC_1 (int,void**,int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int) ;
 void* FUNC_3 (struct v4l2_ctrl_handler*,int *,int ,int,int,int,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*,int *,int ,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_23)
{
 struct sd *VAR_24 = (struct sd *)VAR_23;
 struct v4l2_ctrl_handler *VAR_25 = &VAR_23->ctrl_handler;

 VAR_23->vdev.ctrl_handler = VAR_25;
 FUNC_2(VAR_25, 12);
 FUNC_3(VAR_25, &VAR_22,
   VAR_5, 0, 14, 1, 8);
 FUNC_3(VAR_25, &VAR_22,
   VAR_7, 0, 0x0d, 1, 7);
 FUNC_3(VAR_25, &VAR_22,
   VAR_15, 0, 0xf, 1, 5);
 FUNC_3(VAR_25, &VAR_22,
   VAR_9, 0, VAR_0, 1, 10);


 FUNC_3(VAR_25, &VAR_22,
   VAR_3, 0, 1, 1, 1);
 if (VAR_24->sensor == VAR_1)
  FUNC_3(VAR_25, &VAR_22,
    VAR_10, 0, 1, 1, 0);
 VAR_24->awb = FUNC_3(VAR_25, &VAR_22,
   VAR_2, 0, 1, 1, 1);
 VAR_24->gain = FUNC_3(VAR_25, &VAR_22,
   VAR_8, 0x10, 0x40, 1, 0x20);
 VAR_24->blue_balance = FUNC_3(VAR_25, &VAR_22,
   VAR_4, -0x30, 0x30, 1, 0);
 VAR_24->red_balance = FUNC_3(VAR_25, &VAR_22,
   VAR_14, -0x30, 0x30, 1, 0);
 FUNC_3(VAR_25, &VAR_22,
   VAR_16, 0, 15, 1, 6);
 FUNC_4(VAR_25, &VAR_22,
   VAR_6, VAR_21,
   ~((1 << VAR_19) |
     (1 << VAR_17) |
     (1 << VAR_20) |
     (1 << VAR_21) |
     (1 << VAR_18)),
   VAR_19);
 VAR_24->freq = FUNC_4(VAR_25, &VAR_22,
   VAR_11,
   VAR_13, 1,
   VAR_12);

 if (VAR_25->error) {
  FUNC_0("Could not initialize controls\n");
  return VAR_25->error;
 }

 FUNC_1(4, &VAR_24->awb, 0, 1);

 return 0;
}
