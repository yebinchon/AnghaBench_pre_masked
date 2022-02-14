
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
typedef int data ;
typedef int __le16 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned char*,int) ;

__attribute__((used)) static u16 FUNC_2(unsigned char *VAR_0, unsigned int VAR_1)
{
 unsigned char *VAR_2 = VAR_0;
 u32 VAR_3 = 0;
 __le16 VAR_4;

 while (VAR_1 > 1) {
  FUNC_1(&VAR_4, VAR_2, sizeof(VAR_4));
  VAR_3 += FUNC_0(VAR_4);
  VAR_2 += 2;
  VAR_1 -= 2;
 }
 if (VAR_1 > 0)
  VAR_3 += *(u8 *)VAR_2;
 while (VAR_3 >> 16)
  VAR_3 = (VAR_3 & 0xFFFF) + ((VAR_3 >> 16) & 0xFFFF);
 return ~VAR_3;
}
