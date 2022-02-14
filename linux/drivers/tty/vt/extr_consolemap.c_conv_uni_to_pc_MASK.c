
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {struct uni_pagedir** vc_uni_pagedir_loc; } ;
struct uni_pagedir {int*** uni_pgdir; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;

int
FUNC_0(struct vc_data *VAR_3, long VAR_4)
{
 int VAR_5;
 u16 **VAR_6, *VAR_7;
 struct uni_pagedir *VAR_8;


 if (VAR_4 > 0xffff)
  return -4;
 else if (VAR_4 < 0x20)
  return -1;
 else if (VAR_4 == 0xfeff || (VAR_4 >= 0x200b && VAR_4 <= 0x200f))
  return -2;





 else if ((VAR_4 & ~VAR_2) == VAR_1)
  return VAR_4 & VAR_2;

 if (!*VAR_3->vc_uni_pagedir_loc)
  return -3;

 VAR_8 = *VAR_3->vc_uni_pagedir_loc;
 if ((VAR_6 = VAR_8->uni_pgdir[VAR_4 >> 11]) &&
     (VAR_7 = VAR_6[(VAR_4 >> 6) & 0x1f]) &&
     (VAR_5 = VAR_7[VAR_4 & 0x3f]) < VAR_0)
  return VAR_5;

 return -4;
}
