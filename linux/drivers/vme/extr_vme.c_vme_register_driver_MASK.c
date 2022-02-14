
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * bus; int name; } ;
struct vme_driver {TYPE_1__ driver; int devices; int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct vme_driver*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;

int FUNC_4(struct vme_driver *VAR_1, unsigned int VAR_2)
{
 int VAR_3;

 VAR_1->driver.name = VAR_1->name;
 VAR_1->driver.bus = &VAR_0;
 FUNC_0(&VAR_1->devices);

 VAR_3 = FUNC_2(&VAR_1->driver);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_3(&VAR_1->driver);

 return VAR_3;
}
