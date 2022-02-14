
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



const u8 * FUNC_0(const u8 * VAR_0, int VAR_1,
    int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 const u8 * VAR_7;

 if ((VAR_1 < 8) || (0 == (VAR_3 = VAR_0[7])))
  return ((void*)0);
 if ((VAR_0[0] < 0x72) || (VAR_0[0] > 0x73))
  return ((void*)0);
 VAR_3 = (VAR_3 < (VAR_1 - 8)) ?
   VAR_3 : (VAR_1 - 8);
 VAR_7 = &VAR_0[8];
 for (VAR_5 = 0, VAR_6 = 0; VAR_6 < VAR_3; VAR_6 += VAR_5) {
  VAR_7 += VAR_5;
  VAR_4 = (VAR_6 < (VAR_3 - 1)) ? VAR_7[1]: -1;
  VAR_5 = VAR_4 + 2;
  if (VAR_7[0] == VAR_2)
   return VAR_7;
  if (VAR_4 < 0)
   break;
 }
 return ((void*)0);
}
