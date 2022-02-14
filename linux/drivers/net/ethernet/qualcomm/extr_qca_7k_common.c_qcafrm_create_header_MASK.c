
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

u16
FUNC_1(u8 *VAR_1, u16 VAR_2)
{
 __le16 VAR_3;

 if (!VAR_1)
  return 0;

 VAR_3 = FUNC_0(VAR_2);

 VAR_1[0] = 0xAA;
 VAR_1[1] = 0xAA;
 VAR_1[2] = 0xAA;
 VAR_1[3] = 0xAA;
 VAR_1[4] = VAR_3 & 0xff;
 VAR_1[5] = (VAR_3 >> 8) & 0xff;
 VAR_1[6] = 0;
 VAR_1[7] = 0;

 return VAR_0;
}
