
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int ndr_mappings; struct nd_mapping* mapping; } ;
struct nd_mapping {int dummy; } ;
struct nd_label_id {int dummy; } ;
typedef int resource_size_t ;


 int FUNC_0 (struct nd_region*,struct nd_mapping*,struct nd_label_id*,int ) ;

__attribute__((used)) static int FUNC_1(struct nd_region *VAR_0,
  struct nd_label_id *VAR_1, resource_size_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->ndr_mappings; VAR_3++) {
  struct nd_mapping *VAR_4 = &VAR_0->mapping[VAR_3];
  int VAR_5;

  VAR_5 = FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);
  if (VAR_5)
   return VAR_5;
 }

 return 0;
}
