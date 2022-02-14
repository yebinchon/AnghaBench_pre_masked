
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int __le32 ;


 int const FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(const u8 *VAR_6, u32 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;

 VAR_8 = FUNC_1(*((__le32 *)(VAR_6 + VAR_1)));
 VAR_9 = FUNC_1(*((__le32 *)(VAR_6 + VAR_3)));
 VAR_10 = ((*(VAR_6 + VAR_4)) & FUNC_0(4)) ?
      FUNC_1(*((__le32 *)(VAR_6 + VAR_2))) : 0;

 VAR_8 += VAR_0;
 VAR_9 += VAR_0;
 VAR_10 += VAR_10 ? VAR_0 : 0;
 VAR_11 = VAR_5 + VAR_8 + VAR_9 + VAR_10;
 if (VAR_11 != VAR_7)
  return 0;

 return 1;
}
