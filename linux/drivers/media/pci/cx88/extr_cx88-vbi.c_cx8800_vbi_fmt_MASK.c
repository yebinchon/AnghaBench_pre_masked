
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offset; int sampling_rate; int* start; void** count; int sample_format; int samples_per_line; } ;
struct TYPE_6__ {TYPE_2__ vbi; } ;
struct v4l2_format {TYPE_3__ fmt; } ;
struct file {int dummy; } ;
struct cx8800_dev {TYPE_1__* core; } ;
struct TYPE_4__ {int tvnorm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 struct cx8800_dev* FUNC_0 (struct file*) ;

int FUNC_1(struct file *VAR_8, void *VAR_9,
     struct v4l2_format *VAR_10)
{
 struct cx8800_dev *VAR_11 = FUNC_0(VAR_8);

 VAR_10->fmt.vbi.samples_per_line = VAR_5;
 VAR_10->fmt.vbi.sample_format = VAR_0;
 VAR_10->fmt.vbi.offset = 244;

 if (VAR_11->core->tvnorm & VAR_1) {

  VAR_10->fmt.vbi.sampling_rate = 28636363;
  VAR_10->fmt.vbi.start[0] = 10;
  VAR_10->fmt.vbi.start[1] = 273;
  VAR_10->fmt.vbi.count[0] = VAR_6;
  VAR_10->fmt.vbi.count[1] = VAR_6;

 } else if (VAR_11->core->tvnorm & VAR_2) {

  VAR_10->fmt.vbi.sampling_rate = 35468950;
  VAR_10->fmt.vbi.start[0] = VAR_3 + 5;
  VAR_10->fmt.vbi.start[1] = VAR_4 + 5;
  VAR_10->fmt.vbi.count[0] = VAR_7;
  VAR_10->fmt.vbi.count[1] = VAR_7;
 }
 return 0;
}
