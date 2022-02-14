
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(u16 VAR_7)
{
 int VAR_8 = VAR_5;
 u16 VAR_9 = FUNC_0(VAR_7);

 switch (FUNC_1(VAR_7)) {
 case 130:
  if ((VAR_7 & VAR_0) && (VAR_7 & VAR_1))
   VAR_8 = VAR_6;
  if (VAR_9 & VAR_2)
   VAR_8 += 2;
  break;
 case 131:
  switch (FUNC_0(VAR_7)) {
  case 128:
  case 129:
   VAR_8 = VAR_3;
   break;
  default:
   VAR_8 = VAR_4;
   break;
  }
  break;
 }

 return VAR_8;
}
