
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int s64 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(s64 VAR_0)
{
 int VAR_1;
 s64 VAR_2;

 VAR_2 = (s64) 1 << (64 - 1);



 for (VAR_1 = 0; VAR_1 < 64; VAR_1++, VAR_2 >>= 1) {


  if (VAR_0 & VAR_2) {


   VAR_1 = (64 - 1) - VAR_1;



   if (~VAR_2 & VAR_0)
    VAR_1++;

   return (VAR_1);
  }
 }
 FUNC_0(0);
 return 0;
}
