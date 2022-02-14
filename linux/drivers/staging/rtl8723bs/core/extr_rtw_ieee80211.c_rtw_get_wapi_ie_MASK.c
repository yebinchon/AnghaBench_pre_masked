
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint ;
typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;

int FUNC_3(u8 *VAR_6, uint VAR_7, u8 *VAR_8, u16 *VAR_9)
{
 int VAR_10 = 0;
 u8 VAR_11, VAR_12;
 uint VAR_13;
 u8 VAR_14[4] = {0x0, 0x14, 0x72, 0x01};
 u8 VAR_15[4] = {0x0, 0x14, 0x72, 0x02};

 if (VAR_9)
  *VAR_9 = 0;

 if (!VAR_6 || VAR_7 <= 0)
  return VAR_10;

 VAR_13 = (VAR_2 + VAR_0 + VAR_1);

 while (VAR_13 < VAR_7) {
  VAR_11 = VAR_6[VAR_13];


  if (VAR_11 == VAR_3 && (!FUNC_1(&VAR_6[VAR_13+6], VAR_14, 4) ||
     !FUNC_1(&VAR_6[VAR_13+6], VAR_15, 4))) {
   if (VAR_8) {
    FUNC_2(VAR_8, &VAR_6[VAR_13], VAR_6[VAR_13+1]+2);

    for (VAR_12 = 0; VAR_12 < (VAR_6[VAR_13+1]+2); VAR_12 = VAR_12+8) {
     FUNC_0(VAR_5, VAR_4, ("\n %2x,%2x,%2x,%2x,%2x,%2x,%2x,%2x\n",
        VAR_8[VAR_12], VAR_8[VAR_12+1], VAR_8[VAR_12+2], VAR_8[VAR_12+3], VAR_8[VAR_12+4],
        VAR_8[VAR_12+5], VAR_8[VAR_12+6], VAR_8[VAR_12+7]));
    }
   }

   if (VAR_9)
    *VAR_9 = VAR_6[VAR_13+1]+2;

   VAR_13 += VAR_6[VAR_13+1]+2;
  } else {
   VAR_13 += VAR_6[VAR_13+1]+2;
  }
 }

 if (VAR_9)
  VAR_10 = *VAR_9;

 return VAR_10;
}
