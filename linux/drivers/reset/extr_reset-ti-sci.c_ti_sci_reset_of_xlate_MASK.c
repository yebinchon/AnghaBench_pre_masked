
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_sci_reset_data {int idr; int dev; } ;
struct ti_sci_reset_control {int lock; int reset_mask; int dev_id; } ;
struct reset_controller_dev {scalar_t__ of_reset_n_cells; } ;
struct of_phandle_args {scalar_t__ args_count; int * args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 struct ti_sci_reset_control* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,struct ti_sci_reset_control*,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 struct ti_sci_reset_data* FUNC_4 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_5(struct reset_controller_dev *VAR_3,
     const struct of_phandle_args *VAR_4)
{
 struct ti_sci_reset_data *VAR_5 = FUNC_4(VAR_3);
 struct ti_sci_reset_control *VAR_6;

 if (FUNC_0(VAR_4->args_count != VAR_3->of_reset_n_cells))
  return -VAR_0;

 VAR_6 = FUNC_1(VAR_5->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->dev_id = VAR_4->args[0];
 VAR_6->reset_mask = VAR_4->args[1];
 FUNC_3(&VAR_6->lock);

 return FUNC_2(&VAR_5->idr, VAR_6, 0, 0, VAR_2);
}
