
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_wldev {unsigned int periodic_state; } ;


 int FUNC_0 (struct b43legacy_wldev*) ;
 int FUNC_1 (struct b43legacy_wldev*) ;
 int FUNC_2 (struct b43legacy_wldev*) ;
 int FUNC_3 (struct b43legacy_wldev*) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_0)
{
 unsigned int VAR_1;

 VAR_1 = VAR_0->periodic_state;
 if (VAR_1 % 8 == 0)
  FUNC_0(VAR_0);
 if (VAR_1 % 4 == 0)
  FUNC_3(VAR_0);
 if (VAR_1 % 2 == 0)
  FUNC_2(VAR_0);
 FUNC_1(VAR_0);
}
