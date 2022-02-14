
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rapl_domain {TYPE_1__* rpl; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct rapl_domain *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->rpl[VAR_2].name)
   VAR_3++;
 }

 return VAR_3;
}
