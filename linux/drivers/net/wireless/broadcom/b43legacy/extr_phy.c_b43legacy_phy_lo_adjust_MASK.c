
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {int dummy; } ;
struct b43legacy_lopair {int dummy; } ;


 struct b43legacy_lopair* FUNC_0 (struct b43legacy_wldev*) ;
 struct b43legacy_lopair* FUNC_1 (struct b43legacy_wldev*,int,int,int ) ;
 int FUNC_2 (struct b43legacy_wldev*,struct b43legacy_lopair*) ;

void FUNC_3(struct b43legacy_wldev *VAR_0, int VAR_1)
{
 struct b43legacy_lopair *VAR_2;

 if (VAR_1) {

  VAR_2 = FUNC_1(VAR_0, 2, 3, 0);
 } else
  VAR_2 = FUNC_0(VAR_0);
 FUNC_2(VAR_0, VAR_2);
}
