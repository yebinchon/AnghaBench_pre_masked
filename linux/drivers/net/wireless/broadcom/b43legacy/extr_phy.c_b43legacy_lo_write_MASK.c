
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct b43legacy_wldev {int wl; } ;
struct b43legacy_lopair {int low; int high; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43legacy_wldev*,int ,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 () ;

__attribute__((used)) static inline
void FUNC_3(struct b43legacy_wldev *VAR_1,
   struct b43legacy_lopair *VAR_2)
{
 u16 VAR_3;

 VAR_3 = (u8)(VAR_2->low);
 VAR_3 |= ((u8)(VAR_2->high)) << 8;
 FUNC_0(VAR_1, VAR_0, VAR_3);
}
