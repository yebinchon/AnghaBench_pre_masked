
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ sint ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int ) ;
 int FUNC_1 (int*,int ,scalar_t__) ;
 int* FUNC_2 (int*,int ,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_3(u8 *VAR_1, u32 VAR_2, u8 VAR_3)
{
 u8 *VAR_4;
 sint VAR_5;
 int VAR_6 = 0;

 VAR_4 = FUNC_2(VAR_1, VAR_0, &VAR_5, VAR_2);



 if (VAR_4 && VAR_5 > 0) {
  switch (VAR_3) {
  case 1:
  {
   u8 *VAR_7 = VAR_4 + 2 + VAR_5;
   u32 VAR_8 = 0;

   VAR_8 = VAR_2 - (VAR_7-VAR_1);

   VAR_4[1] = 0;
   FUNC_0(VAR_4+2, VAR_7, VAR_8);
   VAR_6 -= VAR_5;

   break;
  }
  case 2:
   FUNC_1(&VAR_4[2], 0, VAR_5);
   break;
  default:
   break;
 }
 }

 return VAR_6;
}
