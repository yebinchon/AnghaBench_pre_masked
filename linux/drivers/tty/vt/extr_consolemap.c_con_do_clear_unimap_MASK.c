
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {struct uni_pagedir** vc_uni_pagedir_loc; } ;
struct uni_pagedir {int refcount; scalar_t__ sum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uni_pagedir*) ;
 struct uni_pagedir* VAR_2 ;
 struct uni_pagedir* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct vc_data *VAR_3)
{
 struct uni_pagedir *VAR_4, *VAR_5;

 VAR_4 = *VAR_3->vc_uni_pagedir_loc;
 if (!VAR_4 || --VAR_4->refcount) {
  VAR_5 = FUNC_1(sizeof(*VAR_4), VAR_1);
  if (!VAR_5) {
   if (VAR_4)
    VAR_4->refcount++;
   return -VAR_0;
  }
  VAR_5->refcount=1;
  *VAR_3->vc_uni_pagedir_loc = VAR_5;
 } else {
  if (VAR_4 == VAR_2) VAR_2 = ((void*)0);
  VAR_4->refcount++;
  VAR_4->sum = 0;
  FUNC_0(VAR_4);
 }
 return 0;
}
