
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nd_region {int dev; int id; int ns_ida; } ;
struct device {int groups; int * parent; int * type; } ;
struct TYPE_2__ {struct device dev; } ;
struct nd_namespace_blk {scalar_t__ id; TYPE_1__ common; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nd_namespace_blk*) ;
 struct nd_namespace_blk* FUNC_4 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct device *FUNC_5(struct nd_region *VAR_3)
{
 struct nd_namespace_blk *VAR_4;
 struct device *VAR_5;

 if (!FUNC_2(&VAR_3->dev))
  return ((void*)0);

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = &VAR_4->common.dev;
 VAR_5->type = &VAR_1;
 VAR_4->id = FUNC_1(&VAR_3->ns_ida, 0, 0, VAR_0);
 if (VAR_4->id < 0) {
  FUNC_3(VAR_4);
  return ((void*)0);
 }
 FUNC_0(VAR_5, "namespace%d.%d", VAR_3->id, VAR_4->id);
 VAR_5->parent = &VAR_3->dev;
 VAR_5->groups = VAR_2;

 return &VAR_4->common.dev;
}
