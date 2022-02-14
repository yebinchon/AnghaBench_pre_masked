
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_padgroup {unsigned int base; unsigned int size; } ;
struct intel_community {int ngpps; struct intel_padgroup* gpps; } ;



__attribute__((used)) static const struct intel_padgroup *
FUNC_0(const struct intel_community *VAR_0,
        unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->ngpps; VAR_2++) {
  const struct intel_padgroup *VAR_3 = &VAR_0->gpps[VAR_2];

  if (VAR_1 >= VAR_3->base && VAR_1 < VAR_3->base + VAR_3->size)
   return VAR_3;
 }

 return ((void*)0);
}
