
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dim_channel {int dummy; } ;
struct dim2_hdm {TYPE_1__* hch; } ;
struct TYPE_2__ {struct dim_channel ch; scalar_t__ is_initialized; } ;


 int VAR_0 ;

__attribute__((used)) static struct dim_channel **FUNC_0(struct dim2_hdm *VAR_1,
      struct dim_channel **VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1->hch[VAR_4].is_initialized)
   VAR_2[VAR_3++] = &VAR_1->hch[VAR_4].ch;
 }
 VAR_2[VAR_3++] = ((void*)0);

 return VAR_2;
}
