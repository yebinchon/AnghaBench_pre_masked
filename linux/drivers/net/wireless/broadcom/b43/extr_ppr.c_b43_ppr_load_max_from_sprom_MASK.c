
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct ssb_sprom {int ofdm2gpo; int* mcs2gpo; int cddpo; int stbcpo; int ofdm5glpo; int* mcs5glpo; int ofdm5gpo; int* mcs5gpo; int ofdm5ghpo; int* mcs5ghpo; int cck2gpo; TYPE_2__* core_pwr_info; } ;
struct b43_phy {scalar_t__ type; int rev; } ;
struct b43_wldev {struct b43_phy phy; TYPE_1__* dev; } ;
struct b43_ppr_rates {void** mcs_20_cdd; void** ofdm_20_cdd; void** mcs_20_stbc; void** mcs_20_sdm; void** ofdm; void** mcs_20; void** cck; } ;
struct b43_ppr {struct b43_ppr_rates rates; } ;
typedef enum b43_band { ____Placeholder_b43_band } b43_band ;
struct TYPE_4__ {int maxpwr_5gh; int maxpwr_5g; int maxpwr_5gl; int maxpwr_2g; } ;
struct TYPE_3__ {struct ssb_sprom* bus_sprom; } ;






 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int ) ;

bool FUNC_2(struct b43_wldev *VAR_1, struct b43_ppr *VAR_2,
     enum b43_band VAR_3)
{
 struct b43_ppr_rates *VAR_4 = &VAR_2->rates;
 struct ssb_sprom *VAR_5 = VAR_1->dev->bus_sprom;
 struct b43_phy *VAR_6 = &VAR_1->phy;
 u8 VAR_7, VAR_8;
 u32 VAR_9;
 u16 *VAR_10;
 u8 VAR_11, VAR_12;
 int VAR_13;

 switch (VAR_3) {
 case 131:
  VAR_7 = FUNC_1(VAR_5->core_pwr_info[0].maxpwr_2g,
        VAR_5->core_pwr_info[1].maxpwr_2g);
  VAR_9 = VAR_5->ofdm2gpo;
  VAR_10 = VAR_5->mcs2gpo;
  VAR_11 = (VAR_5->cddpo >> 0) & 0xf;
  VAR_12 = (VAR_5->stbcpo >> 0) & 0xf;
  break;
 case 129:
  VAR_7 = FUNC_1(VAR_5->core_pwr_info[0].maxpwr_5gl,
        VAR_5->core_pwr_info[1].maxpwr_5gl);
  VAR_9 = VAR_5->ofdm5glpo;
  VAR_10 = VAR_5->mcs5glpo;
  VAR_11 = (VAR_5->cddpo >> 8) & 0xf;
  VAR_12 = (VAR_5->stbcpo >> 8) & 0xf;
  break;
 case 128:
  VAR_7 = FUNC_1(VAR_5->core_pwr_info[0].maxpwr_5g,
        VAR_5->core_pwr_info[1].maxpwr_5g);
  VAR_9 = VAR_5->ofdm5gpo;
  VAR_10 = VAR_5->mcs5gpo;
  VAR_11 = (VAR_5->cddpo >> 4) & 0xf;
  VAR_12 = (VAR_5->stbcpo >> 4) & 0xf;
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_5->core_pwr_info[0].maxpwr_5gh,
        VAR_5->core_pwr_info[1].maxpwr_5gh);
  VAR_9 = VAR_5->ofdm5ghpo;
  VAR_10 = VAR_5->mcs5ghpo;
  VAR_11 = (VAR_5->cddpo >> 12) & 0xf;
  VAR_12 = (VAR_5->stbcpo >> 12) & 0xf;
  break;
 default:
  FUNC_0(1);
  return 0;
 }

 if (VAR_3 == 131) {
  for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
   VAR_8 = ((VAR_5->cck2gpo >> (VAR_13 * 4)) & 0xf) * 2;
   VAR_4->cck[VAR_13] = VAR_7 - VAR_8;
  }
 }


 for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
  VAR_8 = ((VAR_9 >> (VAR_13 * 4)) & 0xf) * 2;
  VAR_4->ofdm[VAR_13] = VAR_7 - VAR_8;
 }


 VAR_4->mcs_20[0] = VAR_4->ofdm[0];
 VAR_4->mcs_20[1] = VAR_4->ofdm[2];
 VAR_4->mcs_20[2] = VAR_4->ofdm[3];
 VAR_4->mcs_20[3] = VAR_4->ofdm[4];
 VAR_4->mcs_20[4] = VAR_4->ofdm[5];
 VAR_4->mcs_20[5] = VAR_4->ofdm[6];
 VAR_4->mcs_20[6] = VAR_4->ofdm[7];
 VAR_4->mcs_20[7] = VAR_4->ofdm[7];


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_8 = ((VAR_10[0] >> (VAR_13 * 4)) & 0xf) * 2;
  VAR_4->mcs_20_cdd[VAR_13] = VAR_7 - VAR_8;
  if (VAR_6->type == VAR_0 && VAR_6->rev >= 3)
   VAR_4->mcs_20_cdd[VAR_13] -= VAR_11;
 }
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_8 = ((VAR_10[1] >> (VAR_13 * 4)) & 0xf) * 2;
  VAR_4->mcs_20_cdd[4 + VAR_13] = VAR_7 - VAR_8;
  if (VAR_6->type == VAR_0 && VAR_6->rev >= 3)
   VAR_4->mcs_20_cdd[4 + VAR_13] -= VAR_11;
 }


 VAR_4->ofdm_20_cdd[0] = VAR_4->mcs_20_cdd[0];
 VAR_4->ofdm_20_cdd[1] = VAR_4->mcs_20_cdd[0];
 VAR_4->ofdm_20_cdd[2] = VAR_4->mcs_20_cdd[1];
 VAR_4->ofdm_20_cdd[3] = VAR_4->mcs_20_cdd[2];
 VAR_4->ofdm_20_cdd[4] = VAR_4->mcs_20_cdd[3];
 VAR_4->ofdm_20_cdd[5] = VAR_4->mcs_20_cdd[4];
 VAR_4->ofdm_20_cdd[6] = VAR_4->mcs_20_cdd[5];
 VAR_4->ofdm_20_cdd[7] = VAR_4->mcs_20_cdd[6];


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_8 = ((VAR_10[0] >> (VAR_13 * 4)) & 0xf) * 2;
  VAR_4->mcs_20_stbc[VAR_13] = VAR_7 - VAR_8;
  if (VAR_6->type == VAR_0 && VAR_6->rev >= 3)
   VAR_4->mcs_20_stbc[VAR_13] -= VAR_12;
 }
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_8 = ((VAR_10[1] >> (VAR_13 * 4)) & 0xf) * 2;
  VAR_4->mcs_20_stbc[4 + VAR_13] = VAR_7 - VAR_8;
  if (VAR_6->type == VAR_0 && VAR_6->rev >= 3)
   VAR_4->mcs_20_stbc[4 + VAR_13] -= VAR_12;
 }


 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_8 = ((VAR_10[2] >> (VAR_13 * 4)) & 0xf) * 2;
  VAR_4->mcs_20_sdm[VAR_13] = VAR_7 - VAR_8;
 }
 for (VAR_13 = 0; VAR_13 < 4; VAR_13++) {
  VAR_8 = ((VAR_10[3] >> (VAR_13 * 4)) & 0xf) * 2;
  VAR_4->mcs_20_sdm[4 + VAR_13] = VAR_7 - VAR_8;
 }

 return 1;
}
