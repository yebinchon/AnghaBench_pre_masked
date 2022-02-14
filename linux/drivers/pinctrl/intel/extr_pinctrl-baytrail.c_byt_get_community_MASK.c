
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_community {unsigned int pin_base; unsigned int npins; } ;
struct byt_gpio {struct intel_community* communities_copy; TYPE_1__* soc_data; } ;
struct TYPE_2__ {int ncommunities; } ;



__attribute__((used)) static struct intel_community *FUNC_0(struct byt_gpio *VAR_0,
       unsigned int VAR_1)
{
 struct intel_community *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->soc_data->ncommunities; VAR_3++) {
  VAR_2 = VAR_0->communities_copy + VAR_3;
  if (VAR_1 < VAR_2->pin_base + VAR_2->npins && VAR_1 >= VAR_2->pin_base)
   return VAR_2;
 }

 return ((void*)0);
}
