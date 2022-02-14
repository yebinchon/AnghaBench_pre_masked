
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32_value ;
typedef scalar_t__ u32 ;
struct vchiq_mmal_port {int dummy; } ;
struct v4l2_ctrl {size_t val; scalar_t__ id; } ;
struct bm2835_mmal_v4l2_ctrl {size_t max; size_t min; } ;
struct bm2835_mmal_dev {int manual_iso_enabled; int instance; scalar_t__ iso; TYPE_1__** component; } ;
struct TYPE_2__ {struct vchiq_mmal_port control; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 scalar_t__* VAR_5 ;
 int FUNC_0 (int ,struct vchiq_mmal_port*,int ,scalar_t__*,int) ;

__attribute__((used)) static int FUNC_1(struct bm2835_mmal_dev *VAR_6,
   struct v4l2_ctrl *VAR_7,
   const struct bm2835_mmal_v4l2_ctrl *VAR_8)
{
 u32 VAR_9;
 struct vchiq_mmal_port *VAR_10;

 if (VAR_7->val > VAR_8->max || VAR_7->val < VAR_8->min)
  return 1;

 if (VAR_7->id == VAR_2)
  VAR_6->iso = VAR_5[VAR_7->val];
 else if (VAR_7->id == VAR_3)
  VAR_6->manual_iso_enabled =
    (VAR_7->val == VAR_4);

 VAR_10 = &VAR_6->component[VAR_0]->control;

 if (VAR_6->manual_iso_enabled)
  VAR_9 = VAR_6->iso;
 else
  VAR_9 = 0;

 return FUNC_0(VAR_6->instance, VAR_10,
          VAR_1,
          &VAR_9, sizeof(VAR_9));
}
