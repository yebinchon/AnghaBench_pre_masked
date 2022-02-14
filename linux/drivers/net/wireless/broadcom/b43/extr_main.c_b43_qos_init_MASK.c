
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43_wldev {int wl; int qos_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct b43_wldev*) ;
 int FUNC_1 (struct b43_wldev*,int) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void FUNC_6(struct b43_wldev *VAR_3)
{
 if (!VAR_3->qos_enabled) {

  FUNC_1(VAR_3, FUNC_0(VAR_3) & ~VAR_0);
  FUNC_4(VAR_3, VAR_1,
       FUNC_3(VAR_3, VAR_1)
       & ~VAR_2);
  FUNC_5(VAR_3->wl, "QoS disabled\n");
  return;
 }


 FUNC_2(VAR_3);


 FUNC_1(VAR_3, FUNC_0(VAR_3) | VAR_0);
 FUNC_4(VAR_3, VAR_1,
      FUNC_3(VAR_3, VAR_1)
      | VAR_2);
 FUNC_5(VAR_3->wl, "QoS enabled\n");
}
