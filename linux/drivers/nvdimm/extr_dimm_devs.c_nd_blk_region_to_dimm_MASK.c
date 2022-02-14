
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct nd_region {struct nd_mapping* mapping; } ;
struct nd_mapping {struct nvdimm* nvdimm; } ;
struct nd_blk_region {struct nd_region nd_region; } ;



struct nvdimm *FUNC_0(struct nd_blk_region *VAR_0)
{
 struct nd_region *VAR_1 = &VAR_0->nd_region;
 struct nd_mapping *VAR_2 = &VAR_1->mapping[0];

 return VAR_2->nvdimm;
}
