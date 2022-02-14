
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct nvdimm_bus {int dummy; } ;
struct nd_region_desc {int flags; int numa_node; int target_node; int attr_groups; struct resource* res; } ;
typedef int ndr_desc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nd_region_desc*,int ,int) ;
 int FUNC_2 (struct nvdimm_bus*,struct nd_region_desc*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct resource *VAR_3, void *VAR_4)
{
 struct nd_region_desc VAR_5;
 struct nvdimm_bus *VAR_6 = VAR_4;

 FUNC_1(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.res = VAR_3;
 VAR_5.attr_groups = VAR_2;
 VAR_5.numa_node = FUNC_0(VAR_3->start);
 VAR_5.target_node = VAR_5.numa_node;
 FUNC_3(VAR_1, &VAR_5.flags);
 if (!FUNC_2(VAR_6, &VAR_5))
  return -VAR_0;
 return 0;
}
