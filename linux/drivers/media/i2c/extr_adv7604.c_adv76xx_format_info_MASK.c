
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct adv76xx_state {TYPE_1__* info; } ;
struct adv76xx_format_info {scalar_t__ code; } ;
struct TYPE_2__ {unsigned int nformats; struct adv76xx_format_info const* formats; } ;



__attribute__((used)) static const struct adv76xx_format_info *
FUNC_0(struct adv76xx_state *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->info->nformats; ++VAR_2) {
  if (VAR_0->info->formats[VAR_2].code == VAR_1)
   return &VAR_0->info->formats[VAR_2];
 }

 return ((void*)0);
}
