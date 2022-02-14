
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(u16 VAR_3)
{
 int VAR_4 = 24;

 switch (FUNC_1(VAR_3)) {
 case 130:
  if (VAR_3 & VAR_2)
   VAR_4 += 2;
  if ((VAR_3 & VAR_0) && (VAR_3 & VAR_1))
   VAR_4 += 6;
  break;
 case 131:
  switch (FUNC_0(VAR_3)) {
  case 128:
  case 129:
   VAR_4 = 10;
   break;
  default:
   VAR_4 = 16;
   break;
  }
  break;
 }
 return VAR_4;
}
