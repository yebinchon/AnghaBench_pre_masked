
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vctrl_data {TYPE_2__* vtable; } ;
struct regulator_dev {TYPE_1__* desc; } ;
struct TYPE_4__ {int out; } ;
struct TYPE_3__ {unsigned int n_voltages; } ;


 int VAR_0 ;
 struct vctrl_data* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1,
         unsigned int VAR_2)
{
 struct vctrl_data *VAR_3 = FUNC_0(VAR_1);

 if (VAR_2 >= VAR_1->desc->n_voltages)
  return -VAR_0;

 return VAR_3->vtable[VAR_2].out;
}
