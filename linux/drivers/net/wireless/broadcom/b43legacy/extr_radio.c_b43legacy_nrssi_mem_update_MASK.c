
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {int* nrssi; int nrssislope; int* nrssi_lt; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
typedef int s32 ;
typedef int s16 ;


 int FUNC_0 (int,int ,int) ;

void FUNC_1(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_phy *VAR_1 = &VAR_0->phy;
 s16 VAR_2;
 s16 VAR_3;
 s32 VAR_4;

 VAR_3 = 0x1F - VAR_1->nrssi[0];
 for (VAR_2 = 0; VAR_2 < 64; VAR_2++) {
  VAR_4 = (VAR_2 - VAR_3) * VAR_1->nrssislope;
  VAR_4 /= 0x10000;
  VAR_4 += 0x3A;
  VAR_4 = FUNC_0(VAR_4, 0, 0x3F);
  VAR_1->nrssi_lt[VAR_2] = VAR_4;
 }
}
