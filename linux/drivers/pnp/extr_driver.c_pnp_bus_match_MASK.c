
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_driver {int dummy; } ;
struct pnp_dev {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int * FUNC_0 (struct pnp_driver*,struct pnp_dev*) ;
 struct pnp_dev* FUNC_1 (struct device*) ;
 struct pnp_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct pnp_dev *VAR_2 = FUNC_1(VAR_0);
 struct pnp_driver *VAR_3 = FUNC_2(VAR_1);

 if (FUNC_0(VAR_3, VAR_2) == ((void*)0))
  return 0;
 return 1;
}
