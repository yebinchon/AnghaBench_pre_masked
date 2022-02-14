
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef enum codespace_sel { ____Placeholder_codespace_sel } codespace_sel ;
struct TYPE_4__ {size_t* codes; } ;
struct TYPE_3__ {size_t* codes; } ;





 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* VAR_4 ;

int FUNC_0(u32 *VAR_5, u32 VAR_6, enum codespace_sel VAR_7)
{
 switch (VAR_7) {
 case 128:
  if (VAR_6 >= VAR_2)
   return -VAR_0;
  *VAR_5 = VAR_4[VAR_6].codes[0];
  break;
 case 129:
  if (VAR_6 >= VAR_1)
   return -VAR_0;
  *VAR_5 = VAR_3[VAR_6].codes[0];
  break;
 case 130:
  if (VAR_6 >= VAR_2 + VAR_1)
   return -VAR_0;
  if (VAR_6 >= VAR_2) {
   VAR_6 -= VAR_2;
   *VAR_5 = VAR_3[VAR_6].codes[0];
  } else {
   *VAR_5 = VAR_4[VAR_6].codes[0];
  }
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
