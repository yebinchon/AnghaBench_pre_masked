
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vctrl_data {int enabled; } ;
struct regulator_dev {int dummy; } ;


 struct vctrl_data* FUNC_0 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_0)
{
 struct vctrl_data *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->enabled;
}
