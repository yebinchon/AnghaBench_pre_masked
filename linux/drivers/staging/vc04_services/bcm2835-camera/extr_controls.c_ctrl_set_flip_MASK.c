
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32_value ;
typedef int u32 ;
struct vchiq_mmal_component {int * output; } ;
struct v4l2_ctrl {scalar_t__ id; scalar_t__ val; } ;
struct bm2835_mmal_v4l2_ctrl {int mmal_id; } ;
struct bm2835_mmal_dev {int instance; scalar_t__ vflip; scalar_t__ hflip; struct vchiq_mmal_component** component; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int *,int ,int *,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_6,
    struct v4l2_ctrl *VAR_7,
    const struct bm2835_mmal_v4l2_ctrl *VAR_8)
{
 int VAR_9;
 u32 VAR_10;
 struct vchiq_mmal_component *VAR_11;

 if (VAR_7->id == VAR_5)
  VAR_6->hflip = VAR_7->val;
 else
  VAR_6->vflip = VAR_7->val;

 VAR_11 = VAR_6->component[VAR_0];

 if (VAR_6->hflip && VAR_6->vflip)
  VAR_10 = VAR_1;
 else if (VAR_6->hflip)
  VAR_10 = VAR_2;
 else if (VAR_6->vflip)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_3;

 VAR_9 = FUNC_0(VAR_6->instance, &VAR_11->output[0],
         VAR_8->mmal_id,
         &VAR_10, sizeof(VAR_10));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_6->instance, &VAR_11->output[1],
         VAR_8->mmal_id,
         &VAR_10, sizeof(VAR_10));
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_0(VAR_6->instance, &VAR_11->output[2],
         VAR_8->mmal_id,
         &VAR_10, sizeof(VAR_10));
}
