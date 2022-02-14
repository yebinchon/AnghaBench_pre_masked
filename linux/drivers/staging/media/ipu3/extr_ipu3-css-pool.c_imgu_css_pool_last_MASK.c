
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imgu_css_pool {unsigned int last; TYPE_1__* entry; } ;
struct imgu_css_map {int member_0; } ;
struct TYPE_2__ {struct imgu_css_map const param; int valid; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

const struct imgu_css_map *
FUNC_1(struct imgu_css_pool *VAR_1, unsigned int VAR_2)
{
 static const struct imgu_css_map VAR_3 = { 0 };
 int VAR_4 = (VAR_1->last + VAR_0 - VAR_2) % VAR_0;

 FUNC_0(VAR_2 >= VAR_0);

 if (!VAR_1->entry[VAR_4].valid)
  return &VAR_3;

 return &VAR_1->entry[VAR_4].param;
}
