
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {struct b43legacy_wl* wl; } ;
struct b43legacy_wl {int beacon1_uploaded; } ;


 int FUNC_0 (struct b43legacy_wldev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct b43legacy_wldev *VAR_0)
{
 struct b43legacy_wl *VAR_1 = VAR_0->wl;

 if (VAR_1->beacon1_uploaded)
  return;
 FUNC_0(VAR_0, 0x468, 0x1A);
 VAR_1->beacon1_uploaded = 1;
}
