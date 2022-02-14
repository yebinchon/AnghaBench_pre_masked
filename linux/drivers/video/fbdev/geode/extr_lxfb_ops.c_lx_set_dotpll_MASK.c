
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_3(u32 VAR_5)
{
 u32 VAR_6, VAR_7;
 int VAR_8;

 FUNC_0(VAR_0, VAR_6, VAR_7);

 if ((VAR_6 & VAR_4) && (VAR_7 == VAR_5))
  return;

 VAR_7 = VAR_5;
 VAR_6 &= ~(VAR_1 | VAR_3);
 VAR_6 |= VAR_2;

 FUNC_2(VAR_0, VAR_6, VAR_7);



 FUNC_1(100);



 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  FUNC_0(VAR_0, VAR_6, VAR_7);
  if (VAR_6 & VAR_4)
   break;
 }



 VAR_6 &= ~VAR_2;
 FUNC_2(VAR_0, VAR_6, VAR_7);
}
