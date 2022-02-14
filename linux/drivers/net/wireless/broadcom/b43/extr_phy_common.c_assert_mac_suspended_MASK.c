
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {scalar_t__ mac_suspended; int wl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;

__attribute__((used)) static inline void FUNC_3(struct b43_wldev *VAR_2)
{
 if (!VAR_0)
  return;
 if ((FUNC_0(VAR_2) >= VAR_1) &&
     (VAR_2->mac_suspended <= 0)) {
  FUNC_1(VAR_2->wl, "PHY/RADIO register access with "
         "enabled MAC.\n");
  FUNC_2();
 }
}
