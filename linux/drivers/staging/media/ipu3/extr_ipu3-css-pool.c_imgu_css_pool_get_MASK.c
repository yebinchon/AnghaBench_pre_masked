
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct imgu_css_pool {int last; TYPE_1__* entry; } ;
struct TYPE_2__ {int valid; } ;


 int VAR_0 ;

void FUNC_0(struct imgu_css_pool *VAR_1)
{

 u32 VAR_2 = (VAR_1->last + 1) % VAR_0;

 VAR_1->entry[VAR_2].valid = 1;
 VAR_1->last = VAR_2;
}
