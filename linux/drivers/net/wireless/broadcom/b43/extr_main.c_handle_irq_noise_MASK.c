
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_6__ {int calculation_running; int nr_samples; scalar_t__** samples; } ;
struct TYPE_5__ {int link_noise; } ;
struct TYPE_4__ {scalar_t__ type; struct b43_phy_g* g; } ;
struct b43_wldev {TYPE_3__ noisecalc; TYPE_2__ stats; TYPE_1__ phy; } ;
struct b43_phy_g {scalar_t__* nrssi_lt; } ;
typedef int s32 ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (int,int ,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct b43_wldev *VAR_2)
{
 struct b43_phy_g *VAR_3 = VAR_2->phy.g;
 u16 VAR_4;
 u8 VAR_5[4];
 u8 VAR_6, VAR_7;
 s32 VAR_8;



 if (VAR_2->phy.type != VAR_0)
  return;
 FUNC_1(!VAR_2->noisecalc.calculation_running);
 *((__le32 *)VAR_5) = FUNC_6(FUNC_3(VAR_2));
 if (VAR_5[0] == 0x7F || VAR_5[1] == 0x7F ||
     VAR_5[2] == 0x7F || VAR_5[3] == 0x7F)
  goto generate_new;


 FUNC_1(VAR_2->noisecalc.nr_samples >= 8);
 VAR_6 = VAR_2->noisecalc.nr_samples;
 VAR_5[0] = FUNC_5(VAR_5[0], 0, FUNC_0(VAR_3->nrssi_lt) - 1);
 VAR_5[1] = FUNC_5(VAR_5[1], 0, FUNC_0(VAR_3->nrssi_lt) - 1);
 VAR_5[2] = FUNC_5(VAR_5[2], 0, FUNC_0(VAR_3->nrssi_lt) - 1);
 VAR_5[3] = FUNC_5(VAR_5[3], 0, FUNC_0(VAR_3->nrssi_lt) - 1);
 VAR_2->noisecalc.samples[VAR_6][0] = VAR_3->nrssi_lt[VAR_5[0]];
 VAR_2->noisecalc.samples[VAR_6][1] = VAR_3->nrssi_lt[VAR_5[1]];
 VAR_2->noisecalc.samples[VAR_6][2] = VAR_3->nrssi_lt[VAR_5[2]];
 VAR_2->noisecalc.samples[VAR_6][3] = VAR_3->nrssi_lt[VAR_5[3]];
 VAR_2->noisecalc.nr_samples++;
 if (VAR_2->noisecalc.nr_samples == 8) {

  VAR_8 = 0;
  for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
   for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
    VAR_8 += VAR_2->noisecalc.samples[VAR_6][VAR_7];
  }
  VAR_8 /= (8 * 4);
  VAR_8 *= 125;
  VAR_8 += 64;
  VAR_8 /= 128;
  VAR_4 = FUNC_4(VAR_2, VAR_1, 0x40C);
  VAR_4 = (VAR_4 / 128) & 0x1F;
  if (VAR_4 >= 8)
   VAR_8 += 2;
  else
   VAR_8 -= 25;
  if (VAR_4 == 8)
   VAR_8 -= 72;
  else
   VAR_8 -= 48;

  VAR_2->stats.link_noise = VAR_8;
  VAR_2->noisecalc.calculation_running = 0;
  return;
 }
generate_new:
 FUNC_2(VAR_2);
}
