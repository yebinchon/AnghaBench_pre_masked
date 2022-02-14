
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_css_pool {size_t last; TYPE_1__* entry; } ;
struct TYPE_2__ {int valid; } ;


 int VAR_0 ;

void FUNC_0(struct imgu_css_pool *VAR_1)
{
 VAR_1->entry[VAR_1->last].valid = 0;
 VAR_1->last = (VAR_1->last + VAR_0 - 1) % VAR_0;
}
