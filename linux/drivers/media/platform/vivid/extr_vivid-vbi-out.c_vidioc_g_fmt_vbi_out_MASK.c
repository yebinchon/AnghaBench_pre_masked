
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vivid_dev {int std_out; scalar_t__ vbi_cap_interlaced; int has_raw_vbi_out; } ;
struct v4l2_vbi_format {int sampling_rate; int offset; int samples_per_line; int* count; scalar_t__* reserved; int flags; scalar_t__* start; int sample_format; } ;
struct TYPE_2__ {struct v4l2_vbi_format vbi; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct vivid_dev* FUNC_0 (struct file*) ;
 int FUNC_1 (struct vivid_dev*) ;

int FUNC_2(struct file *VAR_8, void *VAR_9,
     struct v4l2_format *VAR_10)
{
 struct vivid_dev *VAR_11 = FUNC_0(VAR_8);
 struct v4l2_vbi_format *VAR_12 = &VAR_10->fmt.vbi;
 bool VAR_13 = VAR_11->std_out & VAR_2;

 if (!FUNC_1(VAR_11) || !VAR_11->has_raw_vbi_out)
  return -VAR_0;

 VAR_12->sampling_rate = 25000000;
 VAR_12->offset = 24;
 VAR_12->samples_per_line = 1440;
 VAR_12->sample_format = VAR_1;
 VAR_12->start[0] = VAR_13 ? VAR_4 + 9 : VAR_6 + 5;
 VAR_12->start[1] = VAR_13 ? VAR_5 + 9 : VAR_7 + 5;
 VAR_12->count[0] = VAR_12->count[1] = VAR_13 ? 12 : 18;
 VAR_12->flags = VAR_11->vbi_cap_interlaced ? VAR_3 : 0;
 VAR_12->reserved[0] = 0;
 VAR_12->reserved[1] = 0;
 return 0;
}
