
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;
typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int ,int ,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int*,int*,int) ;

void FUNC_3(u8 *VAR_7, uint VAR_8, u8 *VAR_9, u16 *VAR_10, u8 *VAR_11, u16 *VAR_12)
{
 u8 VAR_13, VAR_14, VAR_15;
 u8 VAR_16[4] = {0x0, 0x50, 0xf2, 0x01};
 uint VAR_17;



 VAR_17 = (VAR_2 + VAR_0 + VAR_1);

 VAR_14 = 0;

 while (VAR_17 < VAR_8) {
  VAR_13 = VAR_7[VAR_17];

  if ((VAR_13 == VAR_4) && (!FUNC_1(&VAR_7[VAR_17+2], &VAR_16[0], 4))) {
    FUNC_0(VAR_6, VAR_5, ("\n rtw_get_wpa_ie: sec_idx =%d in_ie[cnt+1]+2 =%d\n", VAR_14, VAR_7[VAR_17+1]+2));

    if (VAR_11) {
    FUNC_2(VAR_11, &VAR_7[VAR_17], VAR_7[VAR_17+1]+2);

    for (VAR_15 = 0; VAR_15 < (VAR_7[VAR_17+1]+2); VAR_15 = VAR_15+8) {
      FUNC_0(VAR_6, VAR_5, ("\n %2x,%2x,%2x,%2x,%2x,%2x,%2x,%2x\n",
         VAR_11[VAR_15], VAR_11[VAR_15+1], VAR_11[VAR_15+2], VAR_11[VAR_15+3], VAR_11[VAR_15+4],
         VAR_11[VAR_15+5], VAR_11[VAR_15+6], VAR_11[VAR_15+7]));
     }
    }

    *VAR_12 = VAR_7[VAR_17+1]+2;
    VAR_17 += VAR_7[VAR_17+1]+2;
  } else {
   if (VAR_13 == VAR_3) {
    FUNC_0(VAR_6, VAR_5, ("\n get_rsn_ie: sec_idx =%d in_ie[cnt+1]+2 =%d\n", VAR_14, VAR_7[VAR_17+1]+2));

    if (VAR_9) {
    FUNC_2(VAR_9, &VAR_7[VAR_17], VAR_7[VAR_17+1]+2);

    for (VAR_15 = 0; VAR_15 < (VAR_7[VAR_17+1]+2); VAR_15 = VAR_15+8) {
      FUNC_0(VAR_6, VAR_5, ("\n %2x,%2x,%2x,%2x,%2x,%2x,%2x,%2x\n",
         VAR_9[VAR_15], VAR_9[VAR_15+1], VAR_9[VAR_15+2], VAR_9[VAR_15+3], VAR_9[VAR_15+4],
         VAR_9[VAR_15+5], VAR_9[VAR_15+6], VAR_9[VAR_15+7]));
     }
    }

    *VAR_10 = VAR_7[VAR_17+1]+2;
    VAR_17 += VAR_7[VAR_17+1]+2;
   } else {
    VAR_17 += VAR_7[VAR_17+1]+2;
   }
  }
 }
}
