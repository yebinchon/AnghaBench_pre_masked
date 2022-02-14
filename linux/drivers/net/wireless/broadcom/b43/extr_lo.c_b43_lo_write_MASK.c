
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43_phy {scalar_t__ type; } ;
struct b43_wldev {int wl; struct b43_phy phy; } ;
struct b43_loctl {scalar_t__ i; scalar_t__ q; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct b43_wldev*,int ,int) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_3, struct b43_loctl *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_3->phy;
 u16 VAR_6;

 if (VAR_0) {
  if (FUNC_5(FUNC_1(VAR_4->i) > 16 || FUNC_1(VAR_4->q) > 16)) {
   FUNC_3(VAR_3->wl, "Invalid LO control pair "
          "(I: %d, Q: %d)\n", VAR_4->i, VAR_4->q);
   FUNC_4();
   return;
  }
 }
 FUNC_0(VAR_5->type != VAR_1);

 VAR_6 = (u8) (VAR_4->q);
 VAR_6 |= ((u8) (VAR_4->i)) << 8;
 FUNC_2(VAR_3, VAR_2, VAR_6);
}
