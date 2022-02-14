
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int flags; int name; } ;
struct nd_region {int id; int ns_ida; int dev; } ;
struct device {int groups; int * parent; int * type; } ;
struct TYPE_3__ {struct device dev; } ;
struct TYPE_4__ {struct resource res; TYPE_1__ common; } ;
struct nd_namespace_pmem {scalar_t__ id; TYPE_2__ nsio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nd_namespace_pmem*) ;
 struct nd_namespace_pmem* FUNC_5 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct nd_region*,struct nd_namespace_pmem*,int ) ;

__attribute__((used)) static struct device *FUNC_7(struct nd_region *VAR_4)
{
 struct nd_namespace_pmem *VAR_5;
 struct resource *VAR_6;
 struct device *VAR_7;

 if (!FUNC_3(&VAR_4->dev))
  return ((void*)0);

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_7 = &VAR_5->nsio.common.dev;
 VAR_7->type = &VAR_2;
 VAR_7->parent = &VAR_4->dev;
 VAR_6 = &VAR_5->nsio.res;
 VAR_6->name = FUNC_0(&VAR_4->dev);
 VAR_6->flags = VAR_1;

 VAR_5->id = FUNC_2(&VAR_4->ns_ida, 0, 0, VAR_0);
 if (VAR_5->id < 0) {
  FUNC_4(VAR_5);
  return ((void*)0);
 }
 FUNC_1(VAR_7, "namespace%d.%d", VAR_4->id, VAR_5->id);
 VAR_7->groups = VAR_3;
 FUNC_6(VAR_4, VAR_5, 0);

 return VAR_7;
}
