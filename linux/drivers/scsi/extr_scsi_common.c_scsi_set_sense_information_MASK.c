
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;
 int FUNC_1 (int,int*) ;
 scalar_t__ FUNC_2 (int*,int,int ) ;

int FUNC_3(u8 *VAR_1, int VAR_2, u64 VAR_3)
{
 if ((VAR_1[0] & 0x7f) == 0x72) {
  u8 *VAR_4, VAR_5;

  VAR_5 = VAR_1[7];
  VAR_4 = (char *)FUNC_2(VAR_1, VAR_5 + 8, 0);
  if (!VAR_4) {
   VAR_1[7] = VAR_5 + 0xc;
   VAR_4 = VAR_1 + 8 + VAR_5;
  }

  if (VAR_2 < VAR_5 + 0xc)

   return -VAR_0;

  VAR_4[0] = 0;
  VAR_4[1] = 0xa;
  VAR_4[2] = 0x80;
  VAR_4[3] = 0;
  FUNC_1(VAR_3, &VAR_4[4]);
 } else if ((VAR_1[0] & 0x7f) == 0x70) {





  if (VAR_3 <= 0xffffffffUL)
   VAR_1[0] |= 0x80;
  else
   VAR_1[0] &= 0x7f;
  FUNC_0((u32)VAR_3, &VAR_1[3]);
 }

 return 0;
}
