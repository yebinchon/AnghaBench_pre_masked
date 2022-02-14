
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct rproc {int node; scalar_t__ auto_boot; int name; struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rproc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct rproc*) ;

int FUNC_7(struct rproc *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 FUNC_0(VAR_3, "%s is available\n", VAR_2->name);


 FUNC_5(VAR_2);


 if (VAR_2->auto_boot) {
  VAR_4 = FUNC_6(VAR_2);
  if (VAR_4 < 0)
   return VAR_4;
 }


 FUNC_3(&VAR_1);
 FUNC_2(&VAR_2->node, &VAR_0);
 FUNC_4(&VAR_1);

 return 0;
}
