
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_value ;
typedef int u32 ;
struct vchiq_mmal_component {int * output; } ;
struct v4l2_ctrl {int val; } ;
struct bm2835_mmal_v4l2_ctrl {int mmal_id; } ;
struct bm2835_mmal_dev {int instance; struct vchiq_mmal_component** component; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,int *,int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_1,
      struct v4l2_ctrl *VAR_2,
      const struct bm2835_mmal_v4l2_ctrl *VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 struct vchiq_mmal_component *VAR_6;

 VAR_6 = VAR_1->component[VAR_0];

 VAR_5 = ((VAR_2->val % 360) / 90) * 90;

 VAR_4 = FUNC_0(VAR_1->instance, &VAR_6->output[0],
         VAR_3->mmal_id,
         &VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_1->instance, &VAR_6->output[1],
         VAR_3->mmal_id,
         &VAR_5, sizeof(VAR_5));
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_1->instance, &VAR_6->output[2],
         VAR_3->mmal_id,
         &VAR_5, sizeof(VAR_5));
}
