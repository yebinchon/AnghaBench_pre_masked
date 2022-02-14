
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int dev; int id; int pfn_ida; } ;
struct device {int * parent; int * type; int groups; } ;
struct nd_pfn {scalar_t__ id; struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct nd_pfn*) ;
 struct nd_pfn* FUNC_3 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct nd_pfn *FUNC_4(struct nd_region *VAR_3)
{
 struct nd_pfn *VAR_4;
 struct device *VAR_5;

 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->id = FUNC_1(&VAR_3->pfn_ida, 0, 0, VAR_0);
 if (VAR_4->id < 0) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 VAR_5 = &VAR_4->dev;
 FUNC_0(VAR_5, "pfn%d.%d", VAR_3->id, VAR_4->id);
 VAR_5->groups = VAR_1;
 VAR_5->type = &VAR_2;
 VAR_5->parent = &VAR_3->dev;

 return VAR_4;
}
