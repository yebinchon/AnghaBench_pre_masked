
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int*) ;

__attribute__((used)) static void FUNC_1(u8 VAR_4, u16 VAR_5, u16 VAR_6,
          u16 VAR_7)
{
 u32 VAR_8[4] = { 0, 0, 0, 0 };

 if (VAR_7)
  VAR_8[1] = ((VAR_7 - 1) << VAR_1);

 VAR_8[3] =
  ((VAR_6 - 1) << VAR_3) |
  (VAR_5 << VAR_2);
 FUNC_0(VAR_0 + VAR_4, VAR_8);
}
