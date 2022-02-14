
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
typedef int s32 ;
typedef int __le32 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;

s32 FUNC_2(u32 *VAR_1, u8 *VAR_2, u16 *VAR_3)
{

 if (!VAR_2 || !VAR_1)
  return VAR_0;

 *(__le32 *)&VAR_2[0] = FUNC_1(VAR_1[1]);
 *(__le16 *)&VAR_2[4] = FUNC_0((u16)(VAR_1[2]));
 *VAR_3 = (u16)(VAR_1[2] >> 16);

 return 0;
}
