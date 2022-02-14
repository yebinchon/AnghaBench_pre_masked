
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;


 scalar_t__ FUNC_0 (scalar_t__*,int,scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

u8 FUNC_2(u8 *VAR_0, u8 *VAR_1,
     u32 *VAR_2)
{
 u32 VAR_3;
 u8 VAR_4[8];
 u8 VAR_5 = 0;

 *VAR_2 = 0;




 FUNC_1(VAR_4, VAR_1, 4);
 FUNC_1(VAR_4 + 4, VAR_0, 4);


 VAR_5 = FUNC_0((u8 *)&VAR_4, 8,
         &VAR_3);

 if (VAR_5) {


  *VAR_2 = VAR_3 - 4;
 }

 return VAR_5;
}
