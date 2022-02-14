
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dummy; } ;
struct device {int dummy; } ;
struct apple_gmux_data {int dummy; } ;


 int FUNC_0 (struct apple_gmux_data*) ;
 struct apple_gmux_data* FUNC_1 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct pnp_dev *VAR_1 = FUNC_2(VAR_0);
 struct apple_gmux_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);
 return 0;
}
