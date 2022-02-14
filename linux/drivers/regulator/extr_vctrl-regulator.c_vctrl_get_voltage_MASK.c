
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vctrl_data {int ctrl_reg; } ;
struct regulator_dev {int dummy; } ;


 struct vctrl_data* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vctrl_data*,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_0)
{
 struct vctrl_data *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = FUNC_1(VAR_1->ctrl_reg);

 return FUNC_2(VAR_1, VAR_2);
}
