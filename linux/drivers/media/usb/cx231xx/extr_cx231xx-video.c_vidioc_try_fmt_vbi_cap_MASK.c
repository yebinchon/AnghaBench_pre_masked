
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sampling_rate; int reserved; int * count; void** start; scalar_t__ flags; scalar_t__ offset; int sample_format; int samples_per_line; } ;
struct TYPE_4__ {TYPE_1__ vbi; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {int norm; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_7, void *VAR_8,
      struct v4l2_format *VAR_9)
{
 struct cx231xx_fh *VAR_10 = VAR_8;
 struct cx231xx *VAR_11 = VAR_10->dev;

 VAR_9->fmt.vbi.sampling_rate = 6750000 * 4;
 VAR_9->fmt.vbi.samples_per_line = VAR_6;
 VAR_9->fmt.vbi.sample_format = VAR_4;
 VAR_9->fmt.vbi.offset = 0;
 VAR_9->fmt.vbi.flags = 0;
 VAR_9->fmt.vbi.start[0] = (VAR_11->norm & VAR_5) ?
     VAR_3 : VAR_1;
 VAR_9->fmt.vbi.count[0] = (VAR_11->norm & VAR_5) ?
     VAR_2 : VAR_0;
 VAR_9->fmt.vbi.start[1] = (VAR_11->norm & VAR_5) ?
     VAR_3 + 312 : VAR_1 + 263;
 VAR_9->fmt.vbi.count[1] = VAR_9->fmt.vbi.count[0];
 FUNC_0(VAR_9->fmt.vbi.reserved, 0, sizeof(VAR_9->fmt.vbi.reserved));

 return 0;

}
