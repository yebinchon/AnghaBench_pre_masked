
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvdimm_drvdata {int ns_current; } ;
struct nd_namespace_index {int dummy; } ;


 int FUNC_0 (struct nvdimm_drvdata*,int ,struct nd_namespace_index**,unsigned long**,int *) ;

__attribute__((used)) static bool FUNC_1(struct nvdimm_drvdata *VAR_0,
  struct nd_namespace_index **VAR_1,
  unsigned long **VAR_2, u32 *VAR_3)
{
 return FUNC_0(VAR_0, VAR_0->ns_current, VAR_1,
   VAR_2, VAR_3);
}
