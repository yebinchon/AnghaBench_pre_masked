
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int ns_current; } ;
struct nd_region {int ndr_mappings; struct nd_mapping* mapping; } ;
struct nd_namespace_index {int minor; int major; } ;
struct nd_mapping {int dummy; } ;
struct device {int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct nd_namespace_index* FUNC_1 (struct nvdimm_drvdata*,int ) ;
 struct nd_region* FUNC_2 (int ) ;
 struct nvdimm_drvdata* FUNC_3 (struct nd_mapping*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3)
{
 struct nd_region *VAR_4 = FUNC_2(VAR_3->parent);
 int VAR_5, VAR_6 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_4->ndr_mappings; VAR_5++) {
  struct nd_mapping *VAR_7 = &VAR_4->mapping[VAR_5];
  struct nvdimm_drvdata *VAR_8 = FUNC_3(VAR_7);
  struct nd_namespace_index *VAR_9;





  if (!VAR_8) {
   VAR_6 = 0;
   break;
  }

  VAR_9 = FUNC_1(VAR_8, VAR_8->ns_current);
  if (VAR_9 == ((void*)0))
   VAR_6 |= 1;
  else {

   if (FUNC_0(VAR_9->major) == 1
     && FUNC_0(VAR_9->minor) == 1)
    VAR_6 |= 2;
   else
    VAR_6 |= 4;
  }
 }
 switch (VAR_6) {
 case 0:
 case 2:
  return VAR_1;
 case 1:
 case 4:
  return VAR_2;
 default:
  return -VAR_0;
 }
}
