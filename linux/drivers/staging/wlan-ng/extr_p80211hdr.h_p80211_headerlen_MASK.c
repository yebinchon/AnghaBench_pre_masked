
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline u16 FUNC_5(u16 VAR_3)
{
 u16 VAR_4 = 0;

 switch (FUNC_2(VAR_3)) {
 case 128:
  VAR_4 = VAR_2;
  break;
 case 129:
  VAR_4 = VAR_2;
  if (FUNC_3(VAR_3) && FUNC_0(VAR_3))
   VAR_4 += VAR_0;
  break;
 case 130:
  VAR_4 = FUNC_4(FUNC_1(VAR_3)) -
      VAR_1;
  break;
 default:
  VAR_4 = VAR_2;
 }

 return VAR_4;
}
