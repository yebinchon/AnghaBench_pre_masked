
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ti_sci_reset_data {int idr; struct ti_sci_handle* sci; } ;
struct ti_sci_reset_control {int reset_mask; int dev_id; } ;
struct ti_sci_dev_ops {int (* get_device_resets ) (struct ti_sci_handle const*,int ,int*) ;} ;
struct TYPE_2__ {struct ti_sci_dev_ops dev_ops; } ;
struct ti_sci_handle {TYPE_1__ ops; } ;
struct reset_controller_dev {int dummy; } ;


 int VAR_0 ;
 struct ti_sci_reset_control* FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (struct ti_sci_handle const*,int ,int*) ;
 struct ti_sci_reset_data* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_1,
          unsigned long VAR_2)
{
 struct ti_sci_reset_data *VAR_3 = FUNC_2(VAR_1);
 const struct ti_sci_handle *VAR_4 = VAR_3->sci;
 const struct ti_sci_dev_ops *VAR_5 = &VAR_4->ops.dev_ops;
 struct ti_sci_reset_control *VAR_6;
 u32 VAR_7;
 int VAR_8;

 VAR_6 = FUNC_0(&VAR_3->idr, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_8 = VAR_5->get_device_resets(VAR_4, VAR_6->dev_id, &VAR_7);
 if (VAR_8)
  return VAR_8;

 return VAR_7 & VAR_6->reset_mask;
}
