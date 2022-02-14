
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {struct uni_pagedir** vc_uni_pagedir_loc; } ;
struct uni_pagedir {int refcount; } ;


 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct uni_pagedir*,int ,int) ;
 int FUNC_2 (struct uni_pagedir*) ;
 scalar_t__ FUNC_3 (struct vc_data*,struct uni_pagedir*) ;
 struct uni_pagedir* VAR_0 ;
 int* VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (struct uni_pagedir*) ;
 int FUNC_5 (struct vc_data*,struct uni_pagedir*) ;
 int FUNC_6 (struct vc_data*,struct uni_pagedir*,int) ;

int FUNC_7(struct vc_data *VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = 0, VAR_7;
 u16 *VAR_8;
 struct uni_pagedir *VAR_9;

 if (VAR_0) {
  VAR_9 = *VAR_3->vc_uni_pagedir_loc;
  if (VAR_9 == VAR_0)
   return 0;

  VAR_0->refcount++;
  *VAR_3->vc_uni_pagedir_loc = VAR_0;
  if (VAR_9 && !--VAR_9->refcount) {
   FUNC_2(VAR_9);
   FUNC_4(VAR_9);
  }
  return 0;
 }



 VAR_6 = FUNC_0(VAR_3);
 if (VAR_6)
  return VAR_6;

 VAR_9 = *VAR_3->vc_uni_pagedir_loc;
 VAR_8 = VAR_2;

 for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
  for (VAR_5 = VAR_1[VAR_4]; VAR_5; VAR_5--) {
   VAR_7 = FUNC_1(VAR_9, *(VAR_8++), VAR_4);
   if (VAR_7)
    VAR_6 = VAR_7;
  }

 if (FUNC_3(VAR_3, VAR_9)) {
  VAR_0 = *VAR_3->vc_uni_pagedir_loc;
  return VAR_6;
 }

 for (VAR_4 = 0; VAR_4 <= 3; VAR_4++)
  FUNC_6(VAR_3, VAR_9, VAR_4);
 FUNC_5(VAR_3, VAR_9);
 VAR_0 = VAR_9;
 return VAR_6;
}
