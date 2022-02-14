
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
struct device {int dummy; } ;
struct apple_gmux_data {scalar_t__ power_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct apple_gmux_data*) ;
 int FUNC_1 (struct apple_gmux_data*,scalar_t__) ;
 int FUNC_2 (struct apple_gmux_data*) ;
 struct apple_gmux_data* FUNC_3 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct pnp_dev *VAR_2 = FUNC_4(VAR_1);
 struct apple_gmux_data *VAR_3 = FUNC_3(VAR_2);

 FUNC_0(VAR_3);
 FUNC_2(VAR_3);
 if (VAR_3->power_state == VAR_0)
  FUNC_1(VAR_3, VAR_3->power_state);
 return 0;
}
