
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(__le16 VAR_2)
{
 u32 VAR_3 = ~0;
 u32 VAR_4 = 0;
 unsigned char *VAR_5 = (unsigned char *)&VAR_2;
 unsigned char VAR_6 = 0;
 int VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  if ((VAR_7 % 8) == 0)
   VAR_6 = VAR_5[VAR_7 / 8];

  VAR_4 = ((VAR_3 & 1) ^ VAR_6) & 1;
  VAR_3 >>= 1;
  VAR_6 >>= 1;

  if (VAR_4)
   VAR_3 ^= VAR_0;
 }

 return VAR_3;
}
