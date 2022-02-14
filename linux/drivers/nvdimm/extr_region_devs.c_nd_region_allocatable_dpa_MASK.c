
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int ndr_mappings; int dev; struct nd_mapping* mapping; } ;
struct nd_mapping {int dummy; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct nd_region*) ;
 int FUNC_6 (struct nd_region*,struct nd_mapping*) ;

resource_size_t FUNC_7(struct nd_region *VAR_1)
{
 resource_size_t VAR_2 = 0;
 int VAR_3;

 if (FUNC_1(&VAR_1->dev))
  VAR_2 = VAR_0;

 FUNC_0(!FUNC_3(&VAR_1->dev));
 for (VAR_3 = 0; VAR_3 < VAR_1->ndr_mappings; VAR_3++) {
  struct nd_mapping *VAR_4 = &VAR_1->mapping[VAR_3];

  if (FUNC_1(&VAR_1->dev))
   VAR_2 = FUNC_4(VAR_2,
     FUNC_6(VAR_1,
           VAR_4));
  else if (FUNC_2(&VAR_1->dev))
   VAR_2 += FUNC_5(VAR_1);
 }
 if (FUNC_1(&VAR_1->dev))
  return VAR_2 * VAR_1->ndr_mappings;
 return VAR_2;
}
