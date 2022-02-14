
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 unsigned int VAR_0 ;
 scalar_t__* VAR_1 ;
 char const** VAR_2 ;

__attribute__((used)) static const char *FUNC_0(u32 VAR_3)
{
 static const char VAR_4[] = "unknown";
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) {
  if (VAR_1[VAR_5] == VAR_3)
   return VAR_2[VAR_5];
 }
 return VAR_4;
}
