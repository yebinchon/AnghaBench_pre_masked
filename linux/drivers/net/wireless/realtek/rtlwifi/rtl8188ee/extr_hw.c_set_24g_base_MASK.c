
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct txpower_info_2g {int** index_cck_base; int** index_bw40_base; int** bw20_diff; int** ofdm_diff; int** bw40_diff; int** cck_diff; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct txpower_info_2g *VAR_2, u32 VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0 ; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->index_cck_base[VAR_3][VAR_4] = 0x2D;
  VAR_2->index_bw40_base[VAR_3][VAR_4] = 0x2D;
 }
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_5 == 0) {
   VAR_2->bw20_diff[VAR_3][0] = 0x02;
   VAR_2->ofdm_diff[VAR_3][0] = 0x04;
  } else {
   VAR_2->bw20_diff[VAR_3][VAR_5] = 0xFE;
   VAR_2->bw40_diff[VAR_3][VAR_5] = 0xFE;
   VAR_2->cck_diff[VAR_3][VAR_5] = 0xFE;
   VAR_2->ofdm_diff[VAR_3][VAR_5] = 0xFE;
  }
 }
}
