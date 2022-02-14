
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct vc_data {struct uni_pagedir** vc_uni_pagedir_loc; } ;
struct uni_pagedir {scalar_t__ sum; int refcount; int *** uni_pgdir; } ;
struct TYPE_4__ {TYPE_1__* d; } ;
struct TYPE_3__ {struct uni_pagedir** vc_uni_pagedir_loc; } ;


 int VAR_0 ;
 int FUNC_0 (struct uni_pagedir*) ;
 int FUNC_1 (struct uni_pagedir*) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct vc_data *VAR_2, struct uni_pagedir *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 struct uni_pagedir *VAR_7;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!FUNC_3(VAR_4))
   continue;
  VAR_7 = *VAR_1[VAR_4].d->vc_uni_pagedir_loc;
  if (!VAR_7 || VAR_7 == VAR_3 || VAR_7->sum != VAR_3->sum)
   continue;
  for (VAR_5 = 0; VAR_5 < 32; VAR_5++) {
   u16 **VAR_8, **VAR_9;
   VAR_8 = VAR_3->uni_pgdir[VAR_5]; VAR_9 = VAR_7->uni_pgdir[VAR_5];
   if (!VAR_8 && !VAR_9)
    continue;
   if (!VAR_8 || !VAR_9)
    break;
   for (VAR_6 = 0; VAR_6 < 32; VAR_6++) {
    if (!VAR_8[VAR_6] && !VAR_9[VAR_6])
     continue;
    if (!VAR_8[VAR_6] || !VAR_9[VAR_6])
     break;
    if (FUNC_2(VAR_8[VAR_6], VAR_9[VAR_6], 64*sizeof(u16)))
     break;
   }
   if (VAR_6 < 32)
    break;
  }
  if (VAR_5 == 32) {
   VAR_7->refcount++;
   *VAR_2->vc_uni_pagedir_loc = VAR_7;
   FUNC_0(VAR_3);
   FUNC_1(VAR_3);
   return 1;
  }
 }
 return 0;
}
