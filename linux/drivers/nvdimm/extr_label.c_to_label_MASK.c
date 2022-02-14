
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm_drvdata {int dummy; } ;
struct nd_namespace_label {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvdimm_drvdata*) ;
 int FUNC_1 (struct nvdimm_drvdata*) ;

__attribute__((used)) static struct nd_namespace_label *FUNC_2(struct nvdimm_drvdata *VAR_0, int VAR_1)
{
 unsigned long VAR_2, VAR_3;

 VAR_3 = (unsigned long) FUNC_0(VAR_0);
 VAR_2 = VAR_3 + FUNC_1(VAR_0) * VAR_1;

 return (struct nd_namespace_label *) VAR_2;
}
