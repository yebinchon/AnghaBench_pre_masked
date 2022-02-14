
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nd_region {int ndr_mappings; struct nd_mapping* mapping; } ;
struct nd_mapping {int lock; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct device** FUNC_2 (struct nd_region*) ;

__attribute__((used)) static struct device **FUNC_3(struct nd_region *VAR_0)
{
 struct nd_mapping *VAR_1;
 struct device **VAR_2;
 int VAR_3;

 if (VAR_0->ndr_mappings == 0)
  return ((void*)0);


 for (VAR_3 = 0; VAR_3 < VAR_0->ndr_mappings; VAR_3++) {
  VAR_1 = &VAR_0->mapping[VAR_3];
  FUNC_0(&VAR_1->lock, VAR_3);
 }

 VAR_2 = FUNC_2(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_0->ndr_mappings; VAR_3++) {
  int VAR_4 = VAR_0->ndr_mappings - 1 - VAR_3;

  VAR_1 = &VAR_0->mapping[VAR_4];
  FUNC_1(&VAR_1->lock);
 }

 return VAR_2;
}
