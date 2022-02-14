
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vivid_dev {unsigned int input; unsigned int* query_dv_timings_last; scalar_t__* dv_timings_signal_mode; scalar_t__ edid_blocks; size_t* query_dv_timings; unsigned int query_dv_timings_size; struct v4l2_dv_timings* dv_timings_cap; } ;
struct TYPE_4__ {int pixelclock; } ;
struct v4l2_dv_timings {TYPE_1__ bt; } ;
struct file {int dummy; } ;
struct TYPE_5__ {int max_pixelclock; } ;
struct TYPE_6__ {TYPE_2__ bt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct v4l2_dv_timings* VAR_9 ;
 struct vivid_dev* FUNC_0 (struct file*) ;
 TYPE_3__ VAR_10 ;
 int FUNC_1 (struct vivid_dev*) ;

int FUNC_2(struct file *VAR_11, void *VAR_12,
        struct v4l2_dv_timings *VAR_13)
{
 struct vivid_dev *VAR_14 = FUNC_0(VAR_11);
 unsigned int VAR_15 = VAR_14->input;
 unsigned int VAR_16 = VAR_14->query_dv_timings_last[VAR_15];

 if (!FUNC_1(VAR_14))
  return -VAR_1;
 if (VAR_14->dv_timings_signal_mode[VAR_15] == VAR_6 ||
     VAR_14->edid_blocks == 0)
  return -VAR_3;
 if (VAR_14->dv_timings_signal_mode[VAR_15] == VAR_5)
  return -VAR_2;
 if (VAR_14->dv_timings_signal_mode[VAR_15] == VAR_7) {
  VAR_13->bt.pixelclock = VAR_10.bt.max_pixelclock * 2;
  return -VAR_4;
 }
 if (VAR_14->dv_timings_signal_mode[VAR_15] == VAR_0) {
  *VAR_13 = VAR_14->dv_timings_cap[VAR_15];
 } else if (VAR_14->dv_timings_signal_mode[VAR_15] ==
     VAR_8) {
  *VAR_13 =
   VAR_9[VAR_14->query_dv_timings[VAR_15]];
 } else {
  *VAR_13 =
   VAR_9[VAR_16];
  VAR_14->query_dv_timings_last[VAR_15] =
   (VAR_16 + 1) % VAR_14->query_dv_timings_size;
 }
 return 0;
}
