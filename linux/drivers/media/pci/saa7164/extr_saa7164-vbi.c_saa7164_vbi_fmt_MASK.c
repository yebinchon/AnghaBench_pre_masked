
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int samples_per_line; int sampling_rate; int* start; int* count; int reserved; scalar_t__ flags; scalar_t__ offset; int sample_format; } ;
struct TYPE_4__ {TYPE_1__ vbi; } ;
struct v4l2_format {TYPE_2__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
      struct v4l2_format *VAR_3)
{

 VAR_3->fmt.vbi.samples_per_line = 1440;
 VAR_3->fmt.vbi.sampling_rate = 27000000;
 VAR_3->fmt.vbi.sample_format = VAR_0;
 VAR_3->fmt.vbi.offset = 0;
 VAR_3->fmt.vbi.flags = 0;
 VAR_3->fmt.vbi.start[0] = 10;
 VAR_3->fmt.vbi.count[0] = 18;
 VAR_3->fmt.vbi.start[1] = 263 + 10 + 1;
 VAR_3->fmt.vbi.count[1] = 18;
 FUNC_0(VAR_3->fmt.vbi.reserved, 0, sizeof(VAR_3->fmt.vbi.reserved));
 return 0;
}
