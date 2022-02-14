
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct altera_jtag {int dr_post; int* dr_post_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*) ;

int FUNC_2(struct altera_jtag *VAR_1, u32 VAR_2, u32 VAR_3,
      u8 *VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6;
 u32 VAR_7;

 if (VAR_2 > VAR_1->dr_post) {
  FUNC_1(VAR_1->dr_post_data);
  VAR_1->dr_post_data = (u8 *)FUNC_0((VAR_2 + 7) >> 3);

  if (VAR_1->dr_post_data == ((void*)0))
   VAR_5 = -VAR_0;
  else
   VAR_1->dr_post = VAR_2;

 } else
  VAR_1->dr_post = VAR_2;

 if (VAR_5 == 0) {
  for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6) {
   VAR_7 = VAR_6 + VAR_3;

   if (VAR_4 == ((void*)0))
    VAR_1->dr_post_data[VAR_6 >> 3] |= (1 << (VAR_6 & 7));
   else {
    if (VAR_4[VAR_7 >> 3] & (1 << (VAR_7 & 7)))
     VAR_1->dr_post_data[VAR_6 >> 3] |=
        (1 << (VAR_6 & 7));
    else
     VAR_1->dr_post_data[VAR_6 >> 3] &=
         ~(u32)(1 << (VAR_6 & 7));

   }
  }
 }

 return VAR_5;
}
