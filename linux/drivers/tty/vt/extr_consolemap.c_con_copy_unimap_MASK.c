
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {struct uni_pagedir** vc_uni_pagedir_loc; } ;
struct uni_pagedir {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct vc_data*) ;

int FUNC_1(struct vc_data *VAR_1, struct vc_data *VAR_2)
{
 struct uni_pagedir *VAR_3;

 if (!*VAR_2->vc_uni_pagedir_loc)
  return -VAR_0;
 if (*VAR_1->vc_uni_pagedir_loc == *VAR_2->vc_uni_pagedir_loc)
  return 0;
 FUNC_0(VAR_1);
 VAR_3 = *VAR_2->vc_uni_pagedir_loc;
 VAR_3->refcount++;
 *VAR_1->vc_uni_pagedir_loc = VAR_3;
 return 0;
}
