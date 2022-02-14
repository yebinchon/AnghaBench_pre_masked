
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct pvcalls_fedata {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct pvcalls_fedata* FUNC_0 (int *) ;
 int FUNC_1 (struct pvcalls_fedata*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct xenbus_device *VAR_3 = VAR_2;
 struct pvcalls_fedata *VAR_4 = ((void*)0);

 if (VAR_3 == ((void*)0))
  return VAR_0;

 VAR_4 = FUNC_0(&VAR_3->dev);
 if (VAR_4 == ((void*)0))
  return VAR_0;

 FUNC_1(VAR_4);
 return VAR_0;
}
