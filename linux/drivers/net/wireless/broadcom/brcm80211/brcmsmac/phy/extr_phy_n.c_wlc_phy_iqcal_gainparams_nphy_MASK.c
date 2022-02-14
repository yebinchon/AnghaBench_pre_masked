
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct nphy_txgains {int* txlpf; int* txgm; int* pga; int* pad; int* ipa; } ;
struct nphy_iqcal_params {int txlpf; int txgm; int pga; int pad; int ipa; int cal_gain; int* ncorr; } ;
struct TYPE_2__ {int phy_rev; } ;
struct brcms_phy {TYPE_1__ pubpi; int radio_chanspec; } ;


 scalar_t__ FUNC_0 (int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int ,int) ;
 size_t*** VAR_1 ;

__attribute__((used)) static void
FUNC_2(struct brcms_phy *VAR_2, u16 VAR_3,
         struct nphy_txgains VAR_4,
         struct nphy_iqcal_params *VAR_5)
{
 u8 VAR_6;
 int VAR_7;
 u16 VAR_8;
 u8 VAR_9 = (FUNC_0(VAR_2->radio_chanspec) ? 1 : 0);

 if (FUNC_1(VAR_2->pubpi.phy_rev, 3)) {
  if (FUNC_1(VAR_2->pubpi.phy_rev, 7))
   VAR_5->txlpf = VAR_4.txlpf[VAR_3];

  VAR_5->txgm = VAR_4.txgm[VAR_3];
  VAR_5->pga = VAR_4.pga[VAR_3];
  VAR_5->pad = VAR_4.pad[VAR_3];
  VAR_5->ipa = VAR_4.ipa[VAR_3];
  if (FUNC_1(VAR_2->pubpi.phy_rev, 7))
   VAR_5->cal_gain =
    ((VAR_5->txlpf << 15) | (VAR_5->txgm << 12) |
     (VAR_5->pga << 8) |
     (VAR_5->pad << 3) | (VAR_5->ipa));
  else
   VAR_5->cal_gain =
    ((VAR_5->txgm << 12) | (VAR_5->pga << 8) |
     (VAR_5->pad << 4) | (VAR_5->ipa));

  VAR_5->ncorr[0] = 0x79;
  VAR_5->ncorr[1] = 0x79;
  VAR_5->ncorr[2] = 0x79;
  VAR_5->ncorr[3] = 0x79;
  VAR_5->ncorr[4] = 0x79;
 } else {

  VAR_8 = ((VAR_4.pad[VAR_3] << 0) |
         (VAR_4.pga[VAR_3] << 4) |
         (VAR_4.txgm[VAR_3] << 8));

  VAR_7 = -1;
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_1[VAR_9][VAR_6][0] ==
       VAR_8) {
    VAR_7 = VAR_6;
    break;
   }
  }

  VAR_5->txgm = VAR_1[VAR_9][VAR_6][1];
  VAR_5->pga = VAR_1[VAR_9][VAR_6][2];
  VAR_5->pad = VAR_1[VAR_9][VAR_6][3];
  VAR_5->cal_gain = ((VAR_5->txgm << 7) | (VAR_5->pga << 4) |
        (VAR_5->pad << 2));
  VAR_5->ncorr[0] = VAR_1[VAR_9][VAR_6][4];
  VAR_5->ncorr[1] = VAR_1[VAR_9][VAR_6][5];
  VAR_5->ncorr[2] = VAR_1[VAR_9][VAR_6][6];
  VAR_5->ncorr[3] = VAR_1[VAR_9][VAR_6][7];
 }
}
