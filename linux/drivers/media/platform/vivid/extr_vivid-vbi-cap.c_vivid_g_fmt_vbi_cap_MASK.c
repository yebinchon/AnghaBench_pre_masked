
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int* std_cap; size_t input; scalar_t__ vbi_cap_interlaced; } ;
struct v4l2_vbi_format {int sampling_rate; int offset; int samples_per_line; int* count; scalar_t__* reserved; int flags; scalar_t__* start; int sample_format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_0(struct vivid_dev *VAR_7, struct v4l2_vbi_format *VAR_8)
{
 bool VAR_9 = VAR_7->std_cap[VAR_7->input] & VAR_1;

 VAR_8->sampling_rate = 27000000;
 VAR_8->offset = 24;
 VAR_8->samples_per_line = 1440;
 VAR_8->sample_format = VAR_0;
 VAR_8->start[0] = VAR_9 ? VAR_3 + 9 : VAR_5 + 5;
 VAR_8->start[1] = VAR_9 ? VAR_4 + 9 : VAR_6 + 5;
 VAR_8->count[0] = VAR_8->count[1] = VAR_9 ? 12 : 18;
 VAR_8->flags = VAR_7->vbi_cap_interlaced ? VAR_2 : 0;
 VAR_8->reserved[0] = 0;
 VAR_8->reserved[1] = 0;
}
