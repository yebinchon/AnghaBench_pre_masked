
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_driver {int (* shutdown ) (struct pnp_dev*) ;} ;
struct pnp_dev {struct pnp_driver* driver; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct pnp_dev *VAR_1 = FUNC_1(VAR_0);
 struct pnp_driver *VAR_2 = VAR_1->driver;

 if (VAR_2 && VAR_2->shutdown)
  VAR_2->shutdown(VAR_1);
}
