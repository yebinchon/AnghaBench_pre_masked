
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ti_sci_reset_data {int idr; struct ti_sci_handle* sci; } ;
struct ti_sci_reset_control {int lock; int dev_id; int reset_mask; } ;
struct ti_sci_dev_ops {int (* get_device_resets ) (struct ti_sci_handle const*,int ,int *) ;int (* set_device_resets ) (struct ti_sci_handle const*,int ,int ) ;} ;
struct TYPE_2__ {struct ti_sci_dev_ops dev_ops; } ;
struct ti_sci_handle {TYPE_1__ ops; } ;
struct reset_controller_dev {int dummy; } ;


 int VAR_0 ;
 struct ti_sci_reset_control* FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ti_sci_handle const*,int ,int *) ;
 int FUNC_4 (struct ti_sci_handle const*,int ,int ) ;
 struct ti_sci_reset_data* FUNC_5 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_6(struct reset_controller_dev *VAR_1,
       unsigned long VAR_2, bool VAR_3)
{
 struct ti_sci_reset_data *VAR_4 = FUNC_5(VAR_1);
 const struct ti_sci_handle *VAR_5 = VAR_4->sci;
 const struct ti_sci_dev_ops *VAR_6 = &VAR_5->ops.dev_ops;
 struct ti_sci_reset_control *VAR_7;
 u32 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_0(&VAR_4->idr, VAR_2);
 if (!VAR_7)
  return -VAR_0;

 FUNC_1(&VAR_7->lock);

 VAR_9 = VAR_6->get_device_resets(VAR_5, VAR_7->dev_id, &VAR_8);
 if (VAR_9)
  goto out;

 if (VAR_3)
  VAR_8 |= VAR_7->reset_mask;
 else
  VAR_8 &= ~VAR_7->reset_mask;

 VAR_9 = VAR_6->set_device_resets(VAR_5, VAR_7->dev_id, VAR_8);
out:
 FUNC_2(&VAR_7->lock);

 return VAR_9;
}
