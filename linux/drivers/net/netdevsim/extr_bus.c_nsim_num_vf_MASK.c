
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_bus_dev {int num_vfs; } ;
struct device {int dummy; } ;


 struct nsim_bus_dev* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0)
{
 struct nsim_bus_dev *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->num_vfs;
}
