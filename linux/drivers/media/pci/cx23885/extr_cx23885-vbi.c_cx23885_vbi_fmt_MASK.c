
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sampling_rate; void** count; scalar_t__* start; scalar_t__ flags; scalar_t__ offset; int sample_format; int samples_per_line; } ;
struct TYPE_4__ {TYPE_1__ vbi; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx23885_dev {int tvnorm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 struct cx23885_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_10, void *VAR_11,
 struct v4l2_format *VAR_12)
{
 struct cx23885_dev *VAR_13 = FUNC_0(VAR_10);

 VAR_12->fmt.vbi.sampling_rate = 27000000;
 VAR_12->fmt.vbi.samples_per_line = VAR_7;
 VAR_12->fmt.vbi.sample_format = VAR_0;
 VAR_12->fmt.vbi.offset = 0;
 VAR_12->fmt.vbi.flags = 0;
 if (VAR_13->tvnorm & VAR_1) {

  VAR_12->fmt.vbi.start[0] = VAR_3 + 9;
  VAR_12->fmt.vbi.start[1] = VAR_4 + 9;
  VAR_12->fmt.vbi.count[0] = VAR_8;
  VAR_12->fmt.vbi.count[1] = VAR_8;
 } else if (VAR_13->tvnorm & VAR_2) {

  VAR_12->fmt.vbi.start[0] = VAR_5 + 5;
  VAR_12->fmt.vbi.start[1] = VAR_6 + 5;
  VAR_12->fmt.vbi.count[0] = VAR_9;
  VAR_12->fmt.vbi.count[1] = VAR_9;
 }

 return 0;
}
