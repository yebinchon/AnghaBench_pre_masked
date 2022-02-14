
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static unsigned int FUNC_3(u32 VAR_7)
{
 unsigned int VAR_8;
 int VAR_9 = FUNC_0(VAR_7);


 if (!FUNC_2(VAR_7))
  return VAR_5;

 switch (FUNC_1(VAR_7)) {
 case 128:
  if (VAR_9 == VAR_0 || VAR_9 == VAR_1)
   VAR_8 = VAR_6;
  else
   VAR_8 = VAR_4;
  break;
 default:
  if (VAR_9 == VAR_0 || VAR_9 == VAR_1)
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_3;
  break;
 }
 return VAR_8;
}
