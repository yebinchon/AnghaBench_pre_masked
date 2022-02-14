
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43legacy_wldev {struct b43legacy_wl* wl; } ;
struct b43legacy_wl {int leds_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ) ;
 int FUNC_1 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct b43legacy_wldev *VAR_1, u8 VAR_2,
        bool VAR_3)
{
 struct b43legacy_wl *VAR_4 = VAR_1->wl;
 unsigned long VAR_5;
 u16 VAR_6;

 FUNC_2(&VAR_4->leds_lock, VAR_5);
 VAR_6 = FUNC_0(VAR_1, VAR_0);
 if (VAR_3)
  VAR_6 |= (1 << VAR_2);
 else
  VAR_6 &= ~(1 << VAR_2);
 FUNC_1(VAR_1, VAR_0, VAR_6);
 FUNC_3(&VAR_4->leds_lock, VAR_5);
}
