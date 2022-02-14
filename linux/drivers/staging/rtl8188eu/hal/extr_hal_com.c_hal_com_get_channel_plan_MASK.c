
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

u8 FUNC_1(u8 VAR_1, u8 VAR_2,
       u8 VAR_3, bool VAR_4)
{
 u8 VAR_5;
 u8 VAR_6;

 VAR_5 = 1;
 if (!VAR_4) {
  if (!FUNC_0(VAR_2))
   VAR_5 = 0;
  if (VAR_1 & VAR_0)
   VAR_5 = 0;
 }

 if (VAR_5)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1 & (~VAR_0);

 if (!FUNC_0(VAR_6))
  VAR_6 = VAR_3;

 return VAR_6;
}
