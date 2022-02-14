
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int s32 ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;

s32 FUNC_4(u32 *VAR_4, u16 VAR_5,
    const u8 *VAR_6, u16 VAR_7)
{
 u32 VAR_8 = VAR_0 << VAR_3;
 u32 *VAR_9;


 if (!VAR_4 || !VAR_6)
  return VAR_1;

 VAR_9 = &VAR_4[FUNC_0(*VAR_4)];


 VAR_9[0] = VAR_8 | VAR_5;


 VAR_9[1] = FUNC_3(*(const __le32 *)&VAR_6[0]);
 VAR_9[2] = FUNC_2(*(const __le16 *)&VAR_6[4]);
 VAR_9[2] |= (u32)VAR_7 << 16;


 VAR_8 += VAR_2 << VAR_3;
 *VAR_4 += FUNC_1(VAR_8);

 return 0;
}
