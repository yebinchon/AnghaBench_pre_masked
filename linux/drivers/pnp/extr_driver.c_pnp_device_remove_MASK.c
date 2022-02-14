
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_driver {int flags; int (* remove ) (struct pnp_dev*) ;} ;
struct pnp_dev {scalar_t__ active; struct pnp_driver* driver; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pnp_dev*) ;
 int FUNC_1 (struct pnp_dev*) ;
 int FUNC_2 (struct pnp_dev*) ;
 struct pnp_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct pnp_dev *VAR_2 = FUNC_3(VAR_1);
 struct pnp_driver *VAR_3 = VAR_2->driver;

 if (VAR_3) {
  if (VAR_3->remove)
   VAR_3->remove(VAR_2);
  VAR_2->driver = ((void*)0);
 }

 if (VAR_2->active &&
     (!VAR_3 || !(VAR_3->flags & VAR_0)))
  FUNC_1(VAR_2);

 FUNC_0(VAR_2);
 return 0;
}
