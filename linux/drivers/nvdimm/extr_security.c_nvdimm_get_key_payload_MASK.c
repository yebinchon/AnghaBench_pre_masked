
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvdimm {int dummy; } ;
struct key {int dummy; } ;


 void const* FUNC_0 (struct key*) ;
 struct key* FUNC_1 (struct nvdimm*) ;
 void const* VAR_0 ;

__attribute__((used)) static const void *FUNC_2(struct nvdimm *VAR_1,
  struct key **VAR_2)
{
 *VAR_2 = FUNC_1(VAR_1);
 if (!*VAR_2)
  return VAR_0;

 return FUNC_0(*VAR_2);
}
