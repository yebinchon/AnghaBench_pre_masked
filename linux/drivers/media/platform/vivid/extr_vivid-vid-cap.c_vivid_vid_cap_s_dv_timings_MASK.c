
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {size_t input; struct v4l2_dv_timings* dv_timings_cap; int vb_vid_cap_q; } ;
struct v4l2_dv_timings {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_dv_timings*,int *,int ,int *,int *) ;
 scalar_t__ FUNC_1 (struct v4l2_dv_timings*,struct v4l2_dv_timings*,int ,int) ;
 int FUNC_2 (struct v4l2_dv_timings*) ;
 scalar_t__ FUNC_3 (int *) ;
 struct vivid_dev* FUNC_4 (struct file*) ;
 int VAR_3 ;
 int FUNC_5 (struct vivid_dev*) ;
 int FUNC_6 (struct vivid_dev*,int) ;

int FUNC_7(struct file *VAR_4, void *VAR_5,
        struct v4l2_dv_timings *VAR_6)
{
 struct vivid_dev *VAR_7 = FUNC_4(VAR_4);

 if (!FUNC_5(VAR_7))
  return -VAR_2;
 if (!FUNC_0(VAR_6, &VAR_3,
          0, ((void*)0), ((void*)0)) &&
     !FUNC_2(VAR_6))
  return -VAR_1;

 if (FUNC_1(VAR_6, &VAR_7->dv_timings_cap[VAR_7->input],
      0, 0))
  return 0;
 if (FUNC_3(&VAR_7->vb_vid_cap_q))
  return -VAR_0;

 VAR_7->dv_timings_cap[VAR_7->input] = *VAR_6;
 FUNC_6(VAR_7, 0);
 return 0;
}
