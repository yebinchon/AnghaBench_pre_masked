
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_tuner {int capability; } ;
struct v4l2_frequency {scalar_t__ type; unsigned long frequency; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct pvr2_ctrl {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct pvr2_ctrl*,int*) ;
 int FUNC_1 (struct pvr2_ctrl*,unsigned long) ;
 int FUNC_2 (struct pvr2_hdw*) ;
 struct pvr2_ctrl* FUNC_3 (struct pvr2_hdw*,int ) ;
 int FUNC_4 (struct pvr2_hdw*,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_6, void *VAR_7, const struct v4l2_frequency *VAR_8)
{
 struct pvr2_v4l2_fh *VAR_9 = VAR_6->private_data;
 struct pvr2_hdw *VAR_10 = VAR_9->channel.mc_head->hdw;
 unsigned long VAR_11;
 struct v4l2_tuner VAR_12;
 int VAR_13;
 struct pvr2_ctrl *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_4(VAR_10, &VAR_12);
 if (VAR_15 != 0)
  return VAR_15;
 VAR_14 = FUNC_3(VAR_10, VAR_1);
 VAR_15 = FUNC_0(VAR_14, &VAR_13);
 if (VAR_15 != 0)
  return VAR_15;
 if (VAR_8->type == VAR_5) {
  if (VAR_13 != VAR_2)
   FUNC_1(VAR_14, VAR_2);
 } else {
  if (VAR_13 == VAR_2)
   FUNC_1(VAR_14, VAR_3);
 }
 VAR_11 = VAR_8->frequency;
 if (VAR_12.capability & VAR_4)
  VAR_11 = (VAR_11 * 125) / 2;
 else
  VAR_11 = VAR_11 * 62500;
 VAR_15 = FUNC_1(
   FUNC_3(VAR_10,VAR_0),VAR_11);
 FUNC_2(VAR_10);
 return VAR_15;
}
