
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {struct uni_pagedir** vc_uni_pagedir_loc; } ;
struct uni_pagedir {scalar_t__ refcount; } ;


 int FUNC_0 (struct uni_pagedir*) ;
 int FUNC_1 (struct uni_pagedir*) ;

void FUNC_2(struct vc_data *VAR_0)
{
 struct uni_pagedir *VAR_1;

 VAR_1 = *VAR_0->vc_uni_pagedir_loc;
 if (!VAR_1)
  return;
 *VAR_0->vc_uni_pagedir_loc = ((void*)0);
 if (--VAR_1->refcount)
  return;
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
}
