
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
 int const VAR_4 ;
 int const FUNC_0 (int const) ;
 int FUNC_1 (int,int*,int*) ;

__attribute__((used)) static void FUNC_2(u8 VAR_5, u8 VAR_6, u32 VAR_7,
      u16 VAR_8)
{
 u8 const VAR_9 = VAR_6 * 16;

 u32 VAR_10[4] = { 0, 0, 0, 0 };
 u32 VAR_11[4] = { 0, 0, 0, 0 };

 VAR_10[1] =
  FUNC_0(VAR_3 + VAR_9) |
  FUNC_0(VAR_4 + VAR_9) |
  (VAR_2 << (VAR_1 + VAR_9));
 VAR_11[1] =
  (1 << (VAR_3 + VAR_9)) |
  (1 << (VAR_4 + VAR_9)) |
  ((VAR_8 - 1) << (VAR_1 + VAR_9));

 VAR_10[VAR_6 + 2] = 0xFFFFFFFF;
 VAR_11[VAR_6 + 2] = VAR_7;

 FUNC_1(VAR_0 + VAR_5, VAR_10, VAR_11);
}
