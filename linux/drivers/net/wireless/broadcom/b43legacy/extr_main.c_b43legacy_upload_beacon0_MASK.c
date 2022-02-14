
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {struct b43legacy_wl* wl; } ;
struct b43legacy_wl {int beacon0_uploaded; } ;


 int * VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int,int) ;
 int FUNC_1 (struct b43legacy_wldev*,int,int,int *) ;

__attribute__((used)) static void FUNC_2(struct b43legacy_wldev *VAR_1)
{
 struct b43legacy_wl *VAR_2 = VAR_1->wl;

 if (VAR_2->beacon0_uploaded)
  return;
 FUNC_0(VAR_1, 0x68, 0x18);


 FUNC_1(VAR_1, 0x268, 0x4A,
          &VAR_0[3]);
 VAR_2->beacon0_uploaded = 1;
}
