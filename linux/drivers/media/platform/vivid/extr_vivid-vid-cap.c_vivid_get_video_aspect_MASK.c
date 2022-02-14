
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int* std_aspect_ratio; size_t input; int* dv_timings_aspect_ratio; } ;
typedef enum tpg_video_aspect { ____Placeholder_tpg_video_aspect } tpg_video_aspect ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vivid_dev const*) ;
 scalar_t__ FUNC_1 (struct vivid_dev const*) ;

enum tpg_video_aspect FUNC_2(const struct vivid_dev *VAR_1)
{
 if (FUNC_1(VAR_1))
  return VAR_1->std_aspect_ratio[VAR_1->input];

 if (FUNC_0(VAR_1))
  return VAR_1->dv_timings_aspect_ratio[VAR_1->input];

 return VAR_0;
}
