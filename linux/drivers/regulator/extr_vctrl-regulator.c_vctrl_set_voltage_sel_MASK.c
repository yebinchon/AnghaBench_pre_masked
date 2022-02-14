
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vctrl_data {unsigned int sel; int min_slew_down_rate; TYPE_2__* vtable; int ovp_threshold; struct regulator* ctrl_reg; } ;
struct regulator_dev {int dev; TYPE_1__* desc; } ;
struct regulator {int dummy; } ;
struct TYPE_4__ {unsigned int ovp_min_sel; int out; int ctrl; } ;
struct TYPE_3__ {unsigned int n_voltages; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*) ;
 struct vctrl_data* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator*,int ,int ) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_1,
     unsigned int VAR_2)
{
 struct vctrl_data *VAR_3 = FUNC_3(VAR_1);
 struct regulator *VAR_4 = VAR_3->ctrl_reg;
 unsigned int VAR_5 = VAR_3->sel;
 int VAR_6;

 if (VAR_2 >= VAR_1->desc->n_voltages)
  return -VAR_0;

 if (VAR_2 >= VAR_3->sel || !VAR_3->ovp_threshold) {

  VAR_6 = FUNC_4(VAR_4,
         VAR_3->vtable[VAR_2].ctrl,
         VAR_3->vtable[VAR_2].ctrl);
  if (!VAR_6)
   VAR_3->sel = VAR_2;

  return VAR_6;
 }

 while (VAR_3->sel != VAR_2) {
  unsigned int VAR_7;
  int VAR_8;

  if (VAR_2 >= VAR_3->vtable[VAR_3->sel].ovp_min_sel)
   VAR_7 = VAR_2;
  else
   VAR_7 = VAR_3->vtable[VAR_3->sel].ovp_min_sel;

  VAR_6 = FUNC_4(VAR_4,
         VAR_3->vtable[VAR_7].ctrl,
         VAR_3->vtable[VAR_7].ctrl);
  if (VAR_6) {
   FUNC_1(&VAR_1->dev,
    "failed to set control voltage to %duV\n",
    VAR_3->vtable[VAR_7].ctrl);
   goto err;
  }
  VAR_3->sel = VAR_7;

  VAR_8 = FUNC_0(VAR_3->vtable[VAR_3->sel].out -
         VAR_3->vtable[VAR_7].out,
         VAR_3->min_slew_down_rate);
  FUNC_5(VAR_8, VAR_8 + FUNC_0(VAR_8, 10));
 }

 return 0;

err:
 if (VAR_3->sel != VAR_5) {

  if (!FUNC_4(VAR_4,
        VAR_3->vtable[VAR_5].ctrl,
        VAR_3->vtable[VAR_5].ctrl))
   VAR_3->sel = VAR_5;
  else
   FUNC_2(&VAR_1->dev,
     "failed to restore original voltage\n");
 }

 return VAR_6;
}
