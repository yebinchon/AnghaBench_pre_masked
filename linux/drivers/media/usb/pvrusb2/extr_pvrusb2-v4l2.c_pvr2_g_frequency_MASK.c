
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_tuner {int capability; } ;
struct v4l2_frequency {int frequency; int type; } ;
struct TYPE_4__ {TYPE_1__* mc_head; } ;
struct pvr2_v4l2_fh {TYPE_2__ channel; } ;
struct pvr2_hdw {int dummy; } ;
struct file {struct pvr2_v4l2_fh* private_data; } ;
struct TYPE_3__ {struct pvr2_hdw* hdw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (struct pvr2_hdw*,int ) ;
 int FUNC_2 (struct pvr2_hdw*,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7, struct v4l2_frequency *VAR_8)
{
 struct pvr2_v4l2_fh *VAR_9 = VAR_6->private_data;
 struct pvr2_hdw *VAR_10 = VAR_9->channel.mc_head->hdw;
 int VAR_11 = 0;
 int VAR_12;
 struct v4l2_tuner VAR_13;
 int VAR_14;

 VAR_14 = FUNC_2(VAR_10, &VAR_13);
 if (VAR_14 != 0)
  return VAR_14;
 VAR_14 = FUNC_0(
   FUNC_1(VAR_10, VAR_0),
   &VAR_11);
 if (VAR_14 != 0)
  return VAR_14;
 FUNC_0(
   FUNC_1(VAR_10, VAR_1),
   &VAR_12);
 if (VAR_12 == VAR_2)
  VAR_8->type = VAR_5;
 else
  VAR_8->type = VAR_3;
 if (VAR_13.capability & VAR_4)
  VAR_11 = (VAR_11 * 2) / 125;
 else
  VAR_11 /= 62500;
 VAR_8->frequency = VAR_11;
 return 0;
}
