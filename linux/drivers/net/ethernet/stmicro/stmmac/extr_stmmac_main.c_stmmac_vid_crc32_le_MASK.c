
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(__le16 VAR_1)
{
 unsigned char *VAR_2 = (unsigned char *)&VAR_1;
 unsigned char VAR_3 = 0;
 u32 VAR_4 = ~0x0;
 u32 VAR_5 = 0;
 int VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_0);
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  if ((VAR_6 % 8) == 0)
   VAR_3 = VAR_2[VAR_6 / 8];

  VAR_5 = ((VAR_4 & 1) ^ VAR_3) & 1;
  VAR_4 >>= 1;
  VAR_3 >>= 1;

  if (VAR_5)
   VAR_4 ^= 0xedb88320;
 }

 return VAR_4;
}
