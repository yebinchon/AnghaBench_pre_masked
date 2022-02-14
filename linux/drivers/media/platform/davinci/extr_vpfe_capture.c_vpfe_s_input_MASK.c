
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vpfe_subdev_info {int ccdc_if_params; scalar_t__ can_route; struct vpfe_route* routes; } ;
struct vpfe_route {scalar_t__ output; scalar_t__ input; } ;
struct TYPE_10__ {int ctrl_handler; } ;
struct vpfe_device {unsigned int current_input; size_t std_index; int lock; TYPE_4__ v4l2_dev; struct vpfe_subdev_info* current_subdev; struct v4l2_subdev** sd; TYPE_1__* cfg; scalar_t__ started; } ;
struct v4l2_subdev {int ctrl_handler; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int (* set_hw_if_params ) (int *) ;} ;
struct TYPE_11__ {TYPE_2__ hw_ops; } ;
struct TYPE_9__ {int std_id; } ;
struct TYPE_7__ {struct vpfe_subdev_info* sub_devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 int FUNC_5 (struct v4l2_subdev*,int ,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_5 ;
 struct vpfe_device* FUNC_6 (struct file*) ;
 int FUNC_7 (struct vpfe_device*,int ) ;
 int FUNC_8 (struct vpfe_device*,int*,int*,unsigned int) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_9(struct file *VAR_7, void *VAR_8, unsigned int VAR_9)
{
 struct vpfe_device *VAR_10 = FUNC_6(VAR_7);
 struct v4l2_subdev *VAR_11;
 struct vpfe_subdev_info *VAR_12;
 int VAR_13, VAR_14;
 struct vpfe_route *VAR_15;
 u32 VAR_16, VAR_17;
 int VAR_18;

 FUNC_3(1, VAR_3, &VAR_10->v4l2_dev, "vpfe_s_input\n");

 VAR_18 = FUNC_0(&VAR_10->lock);
 if (VAR_18)
  return VAR_18;





 if (VAR_10->started) {
  FUNC_4(&VAR_10->v4l2_dev, "Streaming is on\n");
  VAR_18 = -VAR_0;
  goto unlock_out;
 }
 VAR_18 = FUNC_8(VAR_10,
       &VAR_13,
       &VAR_14,
       VAR_9);
 if (VAR_18 < 0) {
  FUNC_4(&VAR_10->v4l2_dev, "invalid input index\n");
  goto unlock_out;
 }

 VAR_12 = &VAR_10->cfg->sub_devs[VAR_13];
 VAR_11 = VAR_10->sd[VAR_13];
 VAR_15 = &VAR_12->routes[VAR_14];
 if (VAR_15 && VAR_12->can_route) {
  VAR_16 = VAR_15->input;
  VAR_17 = VAR_15->output;
 } else {
  VAR_16 = 0;
  VAR_17 = 0;
 }

 if (VAR_11)
  VAR_18 = FUNC_5(VAR_11, VAR_5, VAR_4, VAR_16, VAR_17, 0);

 if (VAR_18) {
  FUNC_4(&VAR_10->v4l2_dev,
   "vpfe_doioctl:error in setting input in decoder\n");
  VAR_18 = -VAR_1;
  goto unlock_out;
 }
 VAR_10->current_subdev = VAR_12;
 if (VAR_11)
  VAR_10->v4l2_dev.ctrl_handler = VAR_11->ctrl_handler;
 VAR_10->current_input = VAR_9;
 VAR_10->std_index = 0;


 VAR_18 = VAR_2->hw_ops.set_hw_if_params(&VAR_12->ccdc_if_params);
 if (VAR_18)
  goto unlock_out;


 VAR_18 = FUNC_7(VAR_10,
    VAR_6[VAR_10->std_index].std_id);
unlock_out:
 FUNC_1(&VAR_10->lock);
 return VAR_18;
}
