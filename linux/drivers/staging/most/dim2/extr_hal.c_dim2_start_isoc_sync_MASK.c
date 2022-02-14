
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const FUNC_0 (int const) ;
 int FUNC_1 (int,int*,int*) ;

__attribute__((used)) static void FUNC_2(u8 VAR_4, u8 VAR_5, u32 VAR_6,
     u16 VAR_7)
{
 u8 const VAR_8 = VAR_5 * 16;

 u32 VAR_9[4] = { 0, 0, 0, 0 };
 u32 VAR_10[4] = { 0, 0, 0, 0 };

 VAR_9[1] =
  FUNC_0(VAR_3 + VAR_8) |
  (VAR_2 << (VAR_1 + VAR_8));
 VAR_10[1] =
  (1 << (VAR_3 + VAR_8)) |
  ((VAR_7 - 1) << (VAR_1 + VAR_8));

 VAR_9[VAR_5 + 2] = 0xFFFFFFFF;
 VAR_10[VAR_5 + 2] = VAR_6;

 FUNC_1(VAR_0 + VAR_4, VAR_9, VAR_10);
}
