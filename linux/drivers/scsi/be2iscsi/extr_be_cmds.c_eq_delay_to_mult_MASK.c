
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int const VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_1)
{

 const u32 VAR_2 = 10;
 u32 VAR_3;

 if (VAR_1 == 0)
  VAR_3 = 0;
 else {
  u32 VAR_4 = 1000000 / VAR_1;
  if (VAR_4 == 0)
   VAR_3 = 1023;
  else {
   VAR_3 = (651042 - VAR_4) * VAR_2;
   VAR_3 /= VAR_4;
   VAR_3 = (VAR_3 + VAR_2 / 2) / VAR_2;
   VAR_3 = FUNC_0(VAR_3, (u32) 1023);
  }
 }
 return VAR_3;
}
