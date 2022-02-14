
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_dv_timings {int bt; int type; } ;
struct file {int f_flags; } ;
struct aspeed_video {scalar_t__ v4l2_input_status; int detected_timings; int flags; int wait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 struct aspeed_video* FUNC_1 (struct file*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
      struct v4l2_dv_timings *VAR_8)
{
 int VAR_9;
 struct aspeed_video *VAR_10 = FUNC_1(VAR_6);






 if (VAR_6->f_flags & VAR_3) {
  if (FUNC_0(VAR_5, &VAR_10->flags))
   return -VAR_0;
 } else {
  VAR_9 = FUNC_2(VAR_10->wait,
           !FUNC_0(VAR_5,
       &VAR_10->flags));
  if (VAR_9)
   return -VAR_1;
 }

 VAR_8->type = VAR_4;
 VAR_8->bt = VAR_10->detected_timings;

 return VAR_10->v4l2_input_status ? -VAR_2 : 0;
}
