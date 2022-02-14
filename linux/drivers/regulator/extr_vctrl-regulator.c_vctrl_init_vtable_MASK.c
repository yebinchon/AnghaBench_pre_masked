
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vctrl_voltage_table {int dummy; } ;
struct vctrl_voltage_range {int min_uV; int max_uV; } ;
struct TYPE_4__ {struct vctrl_voltage_range ctrl; } ;
struct regulator_desc {int n_voltages; } ;
struct vctrl_data {int ovp_threshold; TYPE_2__* vtable; TYPE_1__ vrange; struct regulator* ctrl_reg; struct regulator_desc desc; } ;
struct regulator {int dummy; } ;
struct platform_device {int dev; } ;
struct TYPE_5__ {int ctrl; int out; int ovp_min_sel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 TYPE_2__* FUNC_2 (int *,int,int,int ) ;
 struct vctrl_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct regulator*) ;
 int FUNC_5 (struct regulator*,int) ;
 int FUNC_6 (TYPE_2__*,int,int,int ,int *) ;
 int FUNC_7 (struct vctrl_data*,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct vctrl_data *VAR_5 = FUNC_3(VAR_4);
 struct regulator_desc *VAR_6 = &VAR_5->desc;
 struct regulator *VAR_7 = VAR_5->ctrl_reg;
 struct vctrl_voltage_range *VAR_8 = &VAR_5->vrange.ctrl;
 int VAR_9;
 int VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_4(VAR_7);

 VAR_6->n_voltages = VAR_9;


 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_10 = FUNC_5(VAR_7, VAR_11);

  if (VAR_10 < VAR_8->min_uV ||
      VAR_10 > VAR_8->max_uV)
   VAR_6->n_voltages--;
 }

 if (VAR_6->n_voltages == 0) {
  FUNC_0(&VAR_4->dev, "invalid configuration\n");
  return -VAR_0;
 }

 VAR_5->vtable = FUNC_2(&VAR_4->dev, VAR_6->n_voltages,
         sizeof(struct vctrl_voltage_table),
         VAR_2);
 if (!VAR_5->vtable)
  return -VAR_1;


 for (VAR_11 = 0, VAR_12 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_10 = FUNC_5(VAR_7, VAR_11);

  if (VAR_10 < VAR_8->min_uV ||
      VAR_10 > VAR_8->max_uV)
   continue;

  VAR_5->vtable[VAR_12].ctrl = VAR_10;
  VAR_5->vtable[VAR_12].out =
   FUNC_7(VAR_5, VAR_10);
  VAR_12++;
 }


 FUNC_6(VAR_5->vtable, VAR_6->n_voltages,
      sizeof(struct vctrl_voltage_table), VAR_3,
      ((void*)0));


 for (VAR_11 = VAR_6->n_voltages - 1; VAR_11 > 0; VAR_11--) {
  int VAR_13;
  int VAR_14 = (VAR_5->vtable[VAR_11].out *
      (100 - VAR_5->ovp_threshold)) / 100;

  for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
   if (VAR_5->vtable[VAR_13].out >= VAR_14) {
    VAR_5->vtable[VAR_11].ovp_min_sel = VAR_13;
    break;
   }
  }

  if (VAR_13 == VAR_11) {
   FUNC_1(&VAR_4->dev, "switching down from %duV may cause OVP shutdown\n",
    VAR_5->vtable[VAR_11].out);

   VAR_5->vtable[VAR_11].ovp_min_sel = VAR_11 - 1;
  }
 }

 return 0;
}
