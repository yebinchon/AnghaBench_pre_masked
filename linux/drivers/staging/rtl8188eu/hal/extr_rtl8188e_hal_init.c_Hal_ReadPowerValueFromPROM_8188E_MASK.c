
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct txpowerinfo24g {int** IndexCCK_Base; int** IndexBW40_Base; int** BW20_Diff; int** OFDM_Diff; int** BW40_Diff; int** CCK_Diff; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_1 (struct txpowerinfo24g*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct txpowerinfo24g *VAR_8, u8 *VAR_9, bool VAR_10)
{
 u32 VAR_11, VAR_12 = VAR_4, VAR_13, VAR_14 = 0;

 FUNC_1(VAR_8, 0, sizeof(struct txpowerinfo24g));

 if (VAR_10) {
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {

   for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
    VAR_8->IndexCCK_Base[VAR_11][VAR_13] = VAR_1;
    VAR_8->IndexBW40_Base[VAR_11][VAR_13] = VAR_1;
   }
   for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
    if (VAR_14 == 0) {
     VAR_8->BW20_Diff[VAR_11][0] = VAR_0;
     VAR_8->OFDM_Diff[VAR_11][0] = VAR_2;
    } else {
     VAR_8->BW20_Diff[VAR_11][VAR_14] = VAR_3;
     VAR_8->BW40_Diff[VAR_11][VAR_14] = VAR_3;
     VAR_8->CCK_Diff[VAR_11][VAR_14] = VAR_3;
     VAR_8->OFDM_Diff[VAR_11][VAR_14] = VAR_3;
    }
   }
  }
  return;
 }

 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {

  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   VAR_8->IndexCCK_Base[VAR_11][VAR_13] = VAR_9[VAR_12++];
   if (VAR_8->IndexCCK_Base[VAR_11][VAR_13] == 0xFF)
    VAR_8->IndexCCK_Base[VAR_11][VAR_13] = VAR_1;
  }
  for (VAR_13 = 0; VAR_13 < VAR_5-1; VAR_13++) {
   VAR_8->IndexBW40_Base[VAR_11][VAR_13] = VAR_9[VAR_12++];
   if (VAR_8->IndexBW40_Base[VAR_11][VAR_13] == 0xFF)
    VAR_8->IndexBW40_Base[VAR_11][VAR_13] = VAR_1;
  }
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
   if (VAR_14 == 0) {
    VAR_8->BW40_Diff[VAR_11][VAR_14] = 0;
    if (VAR_9[VAR_12] == 0xFF) {
     VAR_8->BW20_Diff[VAR_11][VAR_14] = VAR_0;
    } else {
     VAR_8->BW20_Diff[VAR_11][VAR_14] = (VAR_9[VAR_12]&0xf0)>>4;
     if (VAR_8->BW20_Diff[VAR_11][VAR_14] & FUNC_0(3))
      VAR_8->BW20_Diff[VAR_11][VAR_14] |= 0xF0;
    }

    if (VAR_9[VAR_12] == 0xFF) {
     VAR_8->OFDM_Diff[VAR_11][VAR_14] = VAR_2;
    } else {
     VAR_8->OFDM_Diff[VAR_11][VAR_14] = (VAR_9[VAR_12]&0x0f);
     if (VAR_8->OFDM_Diff[VAR_11][VAR_14] & FUNC_0(3))
      VAR_8->OFDM_Diff[VAR_11][VAR_14] |= 0xF0;
    }
    VAR_8->CCK_Diff[VAR_11][VAR_14] = 0;
    VAR_12++;
   } else {
    if (VAR_9[VAR_12] == 0xFF) {
     VAR_8->BW40_Diff[VAR_11][VAR_14] = VAR_3;
    } else {
     VAR_8->BW40_Diff[VAR_11][VAR_14] = (VAR_9[VAR_12]&0xf0)>>4;
     if (VAR_8->BW40_Diff[VAR_11][VAR_14] & FUNC_0(3))
      VAR_8->BW40_Diff[VAR_11][VAR_14] |= 0xF0;
    }

    if (VAR_9[VAR_12] == 0xFF) {
     VAR_8->BW20_Diff[VAR_11][VAR_14] = VAR_3;
    } else {
     VAR_8->BW20_Diff[VAR_11][VAR_14] = (VAR_9[VAR_12]&0x0f);
     if (VAR_8->BW20_Diff[VAR_11][VAR_14] & FUNC_0(3))
      VAR_8->BW20_Diff[VAR_11][VAR_14] |= 0xF0;
    }
    VAR_12++;

    if (VAR_9[VAR_12] == 0xFF) {
     VAR_8->OFDM_Diff[VAR_11][VAR_14] = VAR_3;
    } else {
     VAR_8->OFDM_Diff[VAR_11][VAR_14] = (VAR_9[VAR_12]&0xf0)>>4;
     if (VAR_8->OFDM_Diff[VAR_11][VAR_14] & FUNC_0(3))
      VAR_8->OFDM_Diff[VAR_11][VAR_14] |= 0xF0;
    }

    if (VAR_9[VAR_12] == 0xFF) {
     VAR_8->CCK_Diff[VAR_11][VAR_14] = VAR_3;
    } else {
     VAR_8->CCK_Diff[VAR_11][VAR_14] = (VAR_9[VAR_12]&0x0f);
     if (VAR_8->CCK_Diff[VAR_11][VAR_14] & FUNC_0(3))
      VAR_8->CCK_Diff[VAR_11][VAR_14] |= 0xF0;
    }
    VAR_12++;
   }
  }
 }
}
