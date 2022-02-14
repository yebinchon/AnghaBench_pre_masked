
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvdimm_drvdata {int dummy; } ;
struct nd_namespace_index {int nslot; scalar_t__ free; } ;


 int FUNC_0 (int ) ;
 struct nd_namespace_index* FUNC_1 (struct nvdimm_drvdata*,int) ;

__attribute__((used)) static bool FUNC_2(struct nvdimm_drvdata *VAR_0, int VAR_1,
  struct nd_namespace_index **VAR_2,
  unsigned long **VAR_3, u32 *VAR_4)
{
 struct nd_namespace_index *VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1);
 if (VAR_5 == ((void*)0))
  return 0;

 *VAR_3 = (unsigned long *) VAR_5->free;
 *VAR_4 = FUNC_0(VAR_5->nslot);
 *VAR_2 = VAR_5;

 return 1;
}
