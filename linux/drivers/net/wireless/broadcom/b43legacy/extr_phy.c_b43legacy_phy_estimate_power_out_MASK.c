
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_phy {size_t idle_tssi; int type; scalar_t__* tssi2dbm; scalar_t__ savedpctlreg; } ;
struct b43legacy_wldev {struct b43legacy_phy phy; } ;
typedef scalar_t__ s8 ;
typedef size_t s32 ;


 int FUNC_0 (int) ;


 size_t FUNC_1 (size_t,int,int) ;

__attribute__((used)) static s8 FUNC_2(struct b43legacy_wldev *VAR_0, s8 VAR_1)
{
 struct b43legacy_phy *VAR_2 = &VAR_0->phy;
 s8 VAR_3 = 0;
 s32 VAR_4;

 VAR_4 = VAR_2->idle_tssi;
 VAR_4 += VAR_1;
 VAR_4 -= VAR_2->savedpctlreg;

 switch (VAR_2->type) {
 case 129:
 case 128:
  VAR_4 = FUNC_1(VAR_4, 0x00, 0x3F);
  VAR_3 = VAR_2->tssi2dbm[VAR_4];
  break;
 default:
  FUNC_0(1);
 }

 return VAR_3;
}
