
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct nd_pfn {int ndns; struct device dev; int align; int mode; } ;
struct nd_namespace_common {int claim; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct nd_namespace_common*,int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct device*) ;

struct device *FUNC_6(struct nd_pfn *VAR_1,
  struct nd_namespace_common *VAR_2)
{
 struct device *VAR_3;

 if (!VAR_1)
  return ((void*)0);

 VAR_1->mode = VAR_0;
 VAR_1->align = FUNC_4();
 VAR_3 = &VAR_1->dev;
 FUNC_3(&VAR_1->dev);
 if (VAR_2 && !FUNC_0(&VAR_1->dev, VAR_2, &VAR_1->ndns)) {
  FUNC_1(&VAR_2->dev, "failed, already claimed by %s\n",
    FUNC_2(VAR_2->claim));
  FUNC_5(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
