
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int s32 ;



__attribute__((used)) static inline int FUNC_0(u8 VAR_0[9])
{
 int VAR_1, VAR_2;

 if (!VAR_0[7])
  return 0;

 if (VAR_0[1] == 0)
  VAR_1 = ((s32)VAR_0[0] >> 1)*1000;
 else
  VAR_1 = 1000*(-1*(s32)(0x100-VAR_0[0]) >> 1);

 VAR_1 -= 250;
 VAR_2 = 1000*((s32)VAR_0[7] - (s32)VAR_0[6]);
 VAR_2 /= (s32)VAR_0[7];
 VAR_1 += VAR_2;

 return VAR_1;
}
