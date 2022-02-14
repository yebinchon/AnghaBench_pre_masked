
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int error; } ;
struct isc_ctrls {int contrast; scalar_t__ brightness; int hist_stat; struct v4l2_ctrl_handler handler; } ;
struct isc_device {int do_wb_ctrl; struct isc_ctrls ctrls; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct v4l2_ctrl_ops VAR_7 ;
 int FUNC_0 (struct isc_device*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct v4l2_ctrl_handler*) ;
 int FUNC_3 (struct v4l2_ctrl_handler*,int) ;
 int FUNC_4 (struct v4l2_ctrl_handler*) ;
 int FUNC_5 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,int,int,int,int) ;

__attribute__((used)) static int FUNC_6(struct isc_device *VAR_8)
{
 const struct v4l2_ctrl_ops *VAR_9 = &VAR_7;
 struct isc_ctrls *VAR_10 = &VAR_8->ctrls;
 struct v4l2_ctrl_handler *VAR_11 = &VAR_10->handler;
 int VAR_12;

 VAR_10->hist_stat = VAR_1;
 FUNC_0(VAR_8);

 VAR_12 = FUNC_3(VAR_11, 5);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_10->brightness = 0;
 VAR_10->contrast = 256;

 FUNC_5(VAR_11, VAR_9, VAR_3, -1024, 1023, 1, 0);
 FUNC_5(VAR_11, VAR_9, VAR_4, -2048, 2047, 1, 256);
 FUNC_5(VAR_11, VAR_9, VAR_6, 0, VAR_0, 1, 2);
 FUNC_5(VAR_11, VAR_9, VAR_2, 0, 1, 1, 1);


 VAR_8->do_wb_ctrl = FUNC_5(VAR_11, VAR_9, VAR_5,
         0, 0, 0, 0);

 if (!VAR_8->do_wb_ctrl) {
  VAR_12 = VAR_11->error;
  FUNC_2(VAR_11);
  return VAR_12;
 }

 FUNC_1(VAR_8->do_wb_ctrl, 0);

 FUNC_4(VAR_11);

 return 0;
}
