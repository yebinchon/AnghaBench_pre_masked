
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int dummy; } ;
struct nd_namespace_index {int dummy; } ;


 int FUNC_0 (struct nd_namespace_index*,struct nd_namespace_index*,int ) ;
 int FUNC_1 (struct nvdimm_drvdata*) ;

__attribute__((used)) static void FUNC_2(struct nvdimm_drvdata *VAR_0,
     struct nd_namespace_index *VAR_1,
     struct nd_namespace_index *VAR_2)
{

 if (!VAR_1 || !VAR_2)
  return;

 FUNC_0(VAR_1, VAR_2, FUNC_1(VAR_0));
}
